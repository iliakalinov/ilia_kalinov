#include"stdafx.h"
#include <iostream>
using namespace std;
#include "BoolMatrix.h"
#include<ctime>

void BoolMatrix::BoolMatrixSum(BoolMatrix b){
	int i, j, l;
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= 6; j++)

			a[i][j] = a[i][j] + b.a[i][j];
	}




}
void  BoolMatrix::BoolMatrixRand(){
	int k;

	for (int i = 1; i <= 6; i++){
	//srand(time(0));
		for (int j = 1; j <= 6; j++){
			k = rand()%+2;
			if (k == 1){ a[i][j] = 1; }
			else a[i][j] = 0;
		}
	}

}
void BoolMatrix::BoolMatrixPrint(){
	for (int i = 1; i <= 6; i++){
		for (int j = 1; j <= 6; j++){
			if (a[i][j] == 1) { cout << "1 "; }
			else cout << "0 ";
			
			//cout << b.a[i][j] << "  ";
		}
		cout << endl;
		}
	cout << endl;
	cout << endl;
}
void BoolMatrix::BoolMatrixProizvedenie(BoolMatrix b){

	int i, j, l;
	bool k = 0;
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= 6; j++)

		for (int i2 = 1; i2 <= 6; i2++){

			k = k + (b.a[i][i2]*b.a[i2][j]);
			
		}
		a[i][j] = k;
	}
	
};
void BoolMatrix::BoolMatrixInvercia(){
	int i, j;
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= 6;j++)
		if (a[i][j] == 1){ a[i][j] = 0; }
		else a[i][j] = 1;
		}
	


};
void BoolMatrix::BoolMatrixSkolkoEdinic(){
	int i, j, k=0;
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= 6;j++)
		if (a[i][j] == 1){ k++; }
			}
	cout << "в этой матрице "<<k<<"единиц"<<endl;
	




}
void  BoolMatrix::BoolMatrixLekcika(){
	double q[7] = { 0, 0, 0, 0, 0,0,0};
	int q2[7] = { 0,1, 2, 3, 4, 5,6 };
	int i, j, k0 = 0;
	double k = -1,c;
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= 6; j++){
			if (a[i][j] == 1){
				c = 1;

				for (int i3 = 1; i3 <= j; i3++){ c *= 0.1; }
				q[i] = q[i] + c;;
			}
			}
	}
	double n;
	int n2;
	for (i = 1; i <= 5; i++){
		for (j = (i+1); j <= 6; j++)
		{
			if (q[i] > q[j]){
				n = q[j];
				q[j] = q[i];
				q[i] = n;
				n2 = q2[j];
				q2[j] = q2[i];
				q2[i] = n2;
				}

		}
	}
	int nom;
	for (i = 1; i <= 6; i++){

		nom = q2[i];
		for (j = 1; j <= 6; j++){
			
			cout << a[nom][j] << " ";
		}
		cout<<endl;

	}





}
void  BoolMatrix::BoolMatrixMinANDMax(BoolMatrix z, BoolMatrix x, BoolMatrix c, BoolMatrix v, BoolMatrix b){
	int q[7] = { 0, 0, 0, 0, 0, 0,0 };
	
	int i,j,k=0;
	for (i = 1; i <= 6; i++)
	for (j = 1; j <= 6; j++){
		if (a[i][j] == 1){ k++; }
	}
	q[1] = k;
	k = 0;
	for (i = 1; i <= 6; i++)
	for (j = 1; j <= 6; j++){
		if (z.a[i][j] == 1){ k++; }
	}
	q[2] = k;
	k = 0;
	for (i = 1; i <= 6; i++)
	for (j = 1; j <= 6; j++){
		if (x.a[i][j] == 1){ k++; }
	}
	q[3] = k;
	k = 0;
	for (i = 1; i <= 6; i++)
	for (j = 1; j <= 6; j++){
		if (c.a[i][j] == 1){ k++; }
	}
	q[4] = k;
	k = 0;
	for (i = 1; i <= 6; i++)
	for (j = 1; j <= 6; j++){
		if (v.a[i][j] == 1){ k++; }
	}
	q[5] = k;
	k = 0;
	for (i = 1; i <= 6; i++)
	for (j = 1; j <= 6; j++){
		if (b.a[i][j] == 1){ k++; }
	}
	q[6] = k;
	int q2[7] = { 0, 1, 2, 3, 4, 5, 6 };
	for (i = 1; i <= 4; i++){
		for (j = (i+1); j <= 5; j++)
		if (q[i] > q[j]){
			q[0] = q[j];
			q[j] = q[i];
			q[i] = q[0];
			q[0] = q2[i];
			q2[i] = q2[j];
			q2[j] = q[0];
		
		}
		}
	cout << "минимум единиц в матрицах :" << endl;
	for (i = 1; q[1] == q[i]; i++){ cout << q2[i] << endl; }

	cout << "\n максимум единиц в матрицах :" << endl;
	for (i = 6; q[6] == q[i]; i--){ cout << q2[i] << endl; }
}
int BoolMatrix::BoolMatrixNolIEd(){
	int k = 0,ed=0,nol=0;
	
	for (int i = 1; i <= 6; i++){

		for (int j = 1; j <= 6; j++){
			if (a[i][j] = 1){ ed++; }
			else nol++;
					}
		if (ed != nol){ return(0); }
		else { ed = 0; nol = 0; }

	}
	return(1);

}
void BoolMatrix::BoolMatrixRavnoEdINol(BoolMatrix z, BoolMatrix x, BoolMatrix c, BoolMatrix v, BoolMatrix b ,BoolMatrix n){
	int a;
	a=z.BoolMatrixNolIEd();
	if (a == 1) cout << "в 1 матрице 0 и 1 одинакого " << endl;
	a = x.BoolMatrixNolIEd();
	if (a == 1) cout << "в 2 матрице 0 и 1 одинакого " << endl;
	a = c.BoolMatrixNolIEd();
	if (a == 1) cout << "в 3 матрице 0 и 1 одинакого " << endl;
	a = v.BoolMatrixNolIEd();
	if (a == 1) cout << "в 4 матрице 0 и 1 одинакого " << endl;
	a = b.BoolMatrixNolIEd();
	if (a == 1) cout << "в 5 матрице 0 и 1 одинакого " << endl;
	a = n.BoolMatrixNolIEd();
	if (a == 1) cout << "в 6 матрице 0 и 1 одинакого " << endl;
}
BoolMatrix::BoolMatrix(){
	cout << "работа конструктора:"<<endl;

}
BoolMatrix::~BoolMatrix(){
	cout << "работа деструктора:"<<endl;
};





