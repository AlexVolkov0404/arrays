// arrays.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter your limit-N: ";
	cin >> n;
	int* F = new int[n];
	
	F[1] = 1;
	F[2] = 1;
	for (int i = 3; i <= n; i++) {
		F[i] = F[i - 2] + F[i - 1];
	}
	for (int i = 1; i <= n; i++) {
		cout << F[i]<<endl;
	}
	
}

