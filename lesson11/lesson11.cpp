// lesson11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int N = 8;

	int *digits = new int[N];
	int* accumArr = new int[N];

	for (int i = 0; i < N; i++)
	{
		digits[i] = -20 + rand() % 100;
	}
	int accumulate = 1;
	for (int j = 0; j < N; j++)
	{
		if (j % 2 == 0)
		{
			accumulate *= digits[j];
		} 
	}
	cout << accumulate << "\n";

	for (int j = 0; j < N; j++)
	{
		if (digits[j] <0)
		{
			accumArr[j] = digits[j];
			cout << digits[j] << "\n";

			int max = 0;
			int min = 0;
			if (digits[j] < 0 && digits[j] > min)
			{
				min = digits[j];
			}
			else if (digits[j] < 0 && digits [j] > min)
			{
				max = digits[j];
			}

			if (digits[j])
			{

			}
		}
	}


}

