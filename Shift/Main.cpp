#include<iostream>
#include<Windows.h>
using namespace std;
//#define HOMEWORK
//#define CLASSWORK_2
#define HOMEWORK_2
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");


#ifdef HOMEWORK
	int k;
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	cout << "Введите количетво сдвигов: ";
	cin >> k;

	for (int j = 1; j <= k; j++)
	{
		int temp = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];

		}
		arr[9] = temp;
	}

	for (int i = 0; i < 10;i++)
	{
		cout << arr[i] << tab;
	}

#endif // HOMEWORK	
#ifdef CLASSWORK_2

	int k;
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	cout << "Введите количетво сдвигов влево: ";
	cin >> k;

	for (int j = 1; j <= k; j++)
	{
		int temp = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];

		}
		arr[n - 1] = temp;
		for (int i = 0; i < n;i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
#endif // CLASSWORK_2

#ifdef HOMEWORK_2

	int k;
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Введите количетво сдвигов вправо: ";
	cin >> k;

	for (int j = 0; j < k; j++)
	{
		int temp = arr[9];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}

	for (int i = 0; i < n;i++)
	{
		cout << arr[i] << "\t";
	}

#endif // HOMEWORK_2





}