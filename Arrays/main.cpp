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
	cout << "������� ������ ������� ";
	cin >> SIZE;

	cout << "������� ������� ������� ";
	for (i = 0; i < SIZE;i++)
	{

		cin >> M[i];
	}

	for (i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "]=" << rand() % (100-50)+50 << endl;
	}
	cout << endl;

	for (i = SIZE - 1;i >= 0; i--)
	{
		cout << "arr [" << i << "]=" << rand() << endl;
	}
	cout << endl;

	for (i = 0; i < SIZE; i++)
	{
		sum = sum + M[i];
	}
	cout << "����� �������: " << sum << endl;
	mean = sum / SIZE;
	cout << "������� ��������������: " << sum / SIZE << endl;
	int max = M[0];
	int min = M[0];
	for (i = 0; i < SIZE; i++)
	{
		if (M[i] > max)
		{
			max = M[i];
		}
	}
	cout << "������������ �������� �������: " << max << endl;

	for (i = 0; i < SIZE; i++)
	{
		if (M[i] < min)
		{
			min = M[i];
		}
	}
	cout << "����������� �������� �������: " << min << endl;

#endif // HOMEWORK


}