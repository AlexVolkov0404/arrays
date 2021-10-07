// task10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
	cout << "Your answer: "<<endl;
	for (int i = 1; i <= n; i++) {
		if (F[i] % 2 == 0) cout << F[i]<<endl;
	}
	for (int i = n; i >= 1; i--) {
		if (F[i] % 2 != 0) cout << F[i]<<endl;
	}
}

