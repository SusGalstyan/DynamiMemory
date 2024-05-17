#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	 //     new
	int n = 5;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
		//Обрашение к элементам массива через арифметику и оператора разыменования 
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
		//Обрашение к элементам массива через оператор индексирование [] 
   	}
	cout << endl;
	delete[]arr;
	//Memory Leaks - утечка памяти; 

}