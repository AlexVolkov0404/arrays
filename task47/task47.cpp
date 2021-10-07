// task47.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int n,x,k,j;
	cout << "Enter your limit-N: ";
	cin >> n;
	int* F = new int[n];
	cout << "Enter your elements: " << endl;
	for (int i = 1; i <= n; i++) {
		cin >> F[i];
	}
	int p = 0;
	for (int i = 1; i <= n; i++) {
		x = F[i];
		k = 0;
		for (int j = 1; j <= n; j++) {
			if (F[j] == x) {
				k = k + 1;
			}
		}
		
		if (k == 1) p = p + 1;
	}
	cout << "amount of different: " << p;
}

