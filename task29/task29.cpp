// task29.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	 int n;
	cout << "Enter your limit-N: ";
	cin >> n;
	int* F = new int[n];
	cout << "Enter your elements: " << endl;
	for (int i = 1; i <= n; i++) {
		cin >> F[i];
	}
	int max = F[1];
	for (int i = 3; i <= n; i+=2) {
		if (F[i] > max) max = F[i];
	}
	cout << "Max: " << max << endl;

}

