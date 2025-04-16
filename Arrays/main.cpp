//Arrays
#include<iostream>
using namespace std;
#define HOMEWORK


void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Arrays" << endl;
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[1] = 1024;
	cout << arr[1] << endl;
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

#ifdef HOMEWORK

	int i;
	double SIZE;
	int M[100];
	double sum = 0;
	double mean;
	cout << "Введите размер массива ";
	cin >> SIZE;
	int max = M[0];
	int min = M[0];

	for (i = 0; i < SIZE;i++)
	{
		cout << "Введите элемент массива ";
		cin >> M[i];
	}
	for (i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "]=" << M[i] << endl;
	}
	cout << endl;

	for (i = SIZE - 1;i >= 0; i--)
	{
		cout << "arr [" << i << "]=" << M[i] << endl;
	}
	cout << endl;

	for (i = 0; i < SIZE; i++)
	{
		sum = sum + M[i];
	}
	cout << "Сумма массива: " << sum << endl;
	mean = sum / SIZE;
	cout << "Среднее арифметическое: " << mean << endl;

	for (i = 0; i < SIZE; i++)
	{
		if (M[i] > max)
		{
			max = M[i];
		}
	}
	cout << "Максимальное значение массмва: " << max << endl;

	for (i = 0; i < SIZE; i++)
	{
		if (M[i] < min)
		{
			min = M[i];
		}
	}
	cout << "Минимальное значение массива: " << min << endl;

#endif // HOMEWORK


}