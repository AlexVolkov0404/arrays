// task52.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter your limit-N: ";
	cin >> n;
	float* A = new float[n];
	float* B = new float[n];
	cout << "Enter your elements: " << endl;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}
	for (int i = 1; i <= n; i++) {
		if (A[i] < 5) A[i] = 2 * A[i];
		else A[i]=A[i] / 2;
	}
	for (int i = 1; i <= n; i++) {
		B[i] = A[i];
		cout << B[i]<<endl;
	}
	cin.get();
	cin.get();
	return 0;
}

