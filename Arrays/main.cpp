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
	/*cout << arr[1] << endl;
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/

#ifdef HOMEWORK

	int i;
	double SIZE;
	int M[100];
	double sum = 0;
	double mean;
	cout << "������� ������ ������� ";
	cin >> SIZE;

	cout << "������� ������� ������� " << endl;
	for (i = 0; i < SIZE;i++)
	{
		cin >> M[i];
	}


	/*int minRand, maxRand;
	do
	{
		cout << "������� ����������� ���������: "; cin >> minRand;
		cout << "������� ����������� ���������: "; cin >> maxRand;
		if (minRand > maxRand) cout << "����������� ������ ���� ������ ��������������" << endl;
		if (minRand == maxRand) cout << "����� ������ ���� ������" << endl;
	} while (minRand >= maxRand);
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}

	for (i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "]=" << rand() % (maxRand - minRand) + minRand << endl;
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
	*/
	int Buffer;
	for (i = 0; i < SIZE; i++)
	{
		
		for (int j = i+1; j < SIZE; j++)
		{
			if (M[j] < M[i])
			{
				Buffer = M[i];
				M[i] = M[j];
				M[j] = Buffer;
			}
		}

	}
	for (int i = 0;i < SIZE;i++)
	{
		cout << M[i] << "\t";
	}
	cout << endl;

#endif // HOMEWORK


}