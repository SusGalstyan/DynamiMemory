#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	 //     new
	int n = 5;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
		//��������� � ��������� ������� ����� ���������� � ��������� ������������� 
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
		//��������� � ��������� ������� ����� �������� �������������� [] 
   	}
	cout << endl;
	delete[]arr;
	//Memory Leaks - ������ ������; 

}