// BoolMatrix1.cpp: ���������� ����� ����� ��� ����������� ����������.
//���������� ����� ������ ������� (BoolMatrix). 
//����������� ������ ��� ����������� �������� (����������), 
//��������� � �������� ������.
//����������� ������ ��� �������� ����� ������ � ������� � 
//������������ ����� � ������������������ �������. ������� ������ ��������. 
//�������: a) ������ ������ � ����������/���������� ����������� ������;
//b) ������ ������ � ������ ���������� ����� � ������ ������

#include "stdafx.h"
#include"BoolMatrix.h"
#include <iostream>
#include <ctime>
	
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	system("chcp 1251");
	system("color 3A");
	srand(time(0));
	cout << "����� �������� 5 ������ :";
	int k=1,i,j;

	BoolMatrix q[7];
	cout << endl;
	for (int c = 1; c <= 6; c++){
		q[c].BoolMatrixRand();
		q[c].BoolMatrixPrint();
	}
	
	for (;;){
		cout << "******************************************************************" << endl;
		cout << "�������� �������� :";
		cout << "\n1-���������� �������� \n2-��������� \n3-�������� \n4-������� ����� ������ � �������\n5 ������� ������ ������� � ����������������� ������� \n6- ������ �����  ������ � ����������/���������� ����������� ������ \n7-������ ������ � ����� ���������� ����� � ������ ������ \n0-exit ";
		cin >> k;
		if (k == 0){ return(0); }
		if (k==1){
				   cout << "������� ����� ������� ������� (����� �� 6)" << endl;
				   int first, two;
				   cin >> first;
				   cin >> two;
				   q[first].BoolMatrixSum(q[two]);
				   cout << "�������� �������:" << endl;
				   q[first].BoolMatrixPrint();	}
		if (k == 2){
			cout << "������� ����� ������� �������� (����� �� 6)" << endl;
			int first, two;
			cin >> first;
			cin >> two;
			q[first].BoolMatrixPrint();
		}
		if (k == 3){
			cout << endl<< "������� ����� ������� ��� ��������:" << endl;
			int k;
			cin >> k;
			q[k].BoolMatrixInvercia();
			q[k].BoolMatrixPrint();
		}
		if (k == 4){
			cout << endl << "������� ����� ������� ��� �������� 1:" << endl;
			int k;
			cin >> k;
			q[k].BoolMatrixSkolkoEdinic();
			
		}
		if (k == 5){
			cout << endl << "������� ����� ������� ��� ������ ��� ����� � ������������������ ������� :" << endl;
			int k;
			cin >> k;
			q[k].BoolMatrixLekcika();


		}
		if (k == 6){
			q[1].BoolMatrixMinANDMax(q[2], q[3], q[4], q[5], q[6]);
					}
		if (k == 7){
			q[1].BoolMatrixRavnoEdINol(q[1],q[2], q[3], q[4], q[5], q[6]);


		}
	}
	return 0;
}

