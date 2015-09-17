// BoolMatrix1.cpp: определяет точку входа для консольного приложения.
//Определить класс Булева матрица (BoolMatrix). 
//Реализовать методы для логического сложения (дизъюнкции), 
//умножения и инверсии матриц.
//Реализовать методы для подсчета числа единиц в матрице и 
//упорядочения строк в лексикографическом порядке. Создать массив объектов. 
//Вывести: a) список матриц с наибольшим/наименьшим количеством единиц;
//b) список матриц с равным колиеством нулей в каждой строке

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
	cout << "будут созданно 5 матрец :";
	int k=1,i,j;

	BoolMatrix q[7];
	cout << endl;
	for (int c = 1; c <= 6; c++){
		q[c].BoolMatrixRand();
		q[c].BoolMatrixPrint();
	}
	
	for (;;){
		cout << "******************************************************************" << endl;
		cout << "выбирите действия :";
		cout << "\n1-логическое сложение \n2-умножение \n3-инверсия \n4-подсчет числа единиц в матрице\n5 вывести строки матрицы в лексекографическо порядке \n6- узнать номер  матриц с наибольшим/наименьшим количеством единиц \n7-список матриц с равым колиеством нулей в каждой строке \n0-exit ";
		cin >> k;
		if (k == 0){ return(0); }
		if (k==1){
				   cout << "введите какие матрицы сложить (всего их 6)" << endl;
				   int first, two;
				   cin >> first;
				   cin >> two;
				   q[first].BoolMatrixSum(q[two]);
				   cout << "получили матрицу:" << endl;
				   q[first].BoolMatrixPrint();	}
		if (k == 2){
			cout << "введите какие матрицы умножать (всего их 6)" << endl;
			int first, two;
			cin >> first;
			cin >> two;
			q[first].BoolMatrixPrint();
		}
		if (k == 3){
			cout << endl<< "введите номер матрицы для инверсии:" << endl;
			int k;
			cin >> k;
			q[k].BoolMatrixInvercia();
			q[k].BoolMatrixPrint();
		}
		if (k == 4){
			cout << endl << "введите номер матрицы для подсчета 1:" << endl;
			int k;
			cin >> k;
			q[k].BoolMatrixSkolkoEdinic();
			
		}
		if (k == 5){
			cout << endl << "введите номер матрицы для вывода его строк в лексекографическом порядуе :" << endl;
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

