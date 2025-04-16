#include<iostream>
using namespace std;
#define HOMEWORK


void main()
{
	setlocale(LC_ALL, "");
	

#ifdef HOMEWORK
	int k;
	const int n=10;
	int arr [n] = { 0,1,2,3,4,5,6,7,8,9 };

	cout << "¬ведите количетво сдвигов: ";
	cin >> k;

	for (int j = 1; j <= k; j++)
	{
		int temp = arr[0];
		for (int i = 0; i < 9; i++)
		{
			arr[i] = arr[i + 1];

		}
		arr[9] = temp;
	}

	for (int i = 0; i < 10;i++)
	{
		cout << arr[i] << "\t";
	}
	


#endif // HOMEWORK


}