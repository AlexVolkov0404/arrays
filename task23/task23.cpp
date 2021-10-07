// task23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int K, L, n;
    cout << "enter K,L,1<K<=L<=N: " << endl;
    cout << "K: ";
    cin >> K;
    cout << "L: ";
    cin >> L;
    cout << "Enter your limit-N: ";
    cin >> n;
    int* F = new int[n];
    cout << "Enter your elements: " << endl;
    for (int i = 1; i <= n; i++) {
        cin >> F[i];
    }
    double s = 0;
    double k = 0;
    for (int i = 1; i <= n; i++) {
        if (i<K || i>L) {
            s = s + F[i];
            k = k + 1;
        }
     }
   float ks = s / k;
    cout << "your avarage: " << ks;
}

