// task54.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int n,k=0;
	cout << "Enter your limit-N: ";
	cin >> n;
	int* A = new int[n];
	
	cout << "Enter your elements: " << endl;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}
	for (int i = 1; i <= n; i++) {
		if (A[i] % 2 == 0) k++;
	}
	cout << "amount of elements: " << k<<endl;
	int* B = new int[k];
	for (int i = 1; i <= n; i++) {
		if (A[i] % 2 == 0) {
			//A[i] = A[i] % 2;
			B[k] = A[i];
			cout << B[k] << endl;
		}
		//cout <<B[k]<<endl;
	}

}


