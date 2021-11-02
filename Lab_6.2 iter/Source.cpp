#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

int Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
	return 1;
}

void Print(int* a, const int size)
{
	cout << "a[20] = {";
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i] << ",";
	cout << "}" << endl;
}

int Min(int* a, const int size)
{
	int min = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] < min && a[i] % 2 != 0)
			min = a[i];
	return min;
}


int Find(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if (a[i] == Min(a, 20))
			return i;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	const int n = 20;
	int Low, High;
	int a[n];
	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;

	Create(a, n, Low, High);
	Print(a, n);
	cout << "індекс найменшого непарного елемента = " << Find(a, n);

	return 0;
}