// Lab_04_1.cpp
// "Матвіїв Владислав"
// Лабораторна робота №4.1
// Цикли
// Варіант 8

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int k, N, i;
	double S;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	// Спосіб 1

	S = 0;
	i = k;

	while (i <= N) {
		S += (k / i) + (i / N);
		i++;

	}
	cout << S << endl;

	// Спосіб 2

	S = 0;
	i = k;
	do {
		S += (k / i) + (i / N);
		i++;
	} while (i <= N);
	cout << S << endl;

	// Споміб 3

	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (k / i) + (i / N);
	}
	cout << S << endl;

	// Спосіб 4

	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (k / i) + (i / N);
	}
	cout << S << endl;

	return 0;
 }