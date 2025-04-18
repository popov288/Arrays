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
	cout << "Введите размер массива ";
	cin >> SIZE;

	cout << "Введите элемент массива " << endl;
	for (i = 0; i < SIZE;i++)
	{
		cin >> M[i];
	}


	/*int minRand, maxRand;
	do
	{
		cout << "Введите минимальное рандомное: "; cin >> minRand;
		cout << "Введите минимальное рандомное: "; cin >> maxRand;
		if (minRand > maxRand) cout << "Минимальное должно быть меньше максимальногое" << endl;
		if (minRand == maxRand) cout << "Числа должны быть разные" << endl;
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
	cout << "Сумма массива: " << sum << endl;
	mean = sum / SIZE;
	cout << "Среднее арифметическое: " << sum / SIZE << endl;
	int max = M[0];
	int min = M[0];
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