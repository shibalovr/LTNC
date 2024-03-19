#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int &a, int &b) {
    a = a^b;
    b = a^b;
    a = a^b;
}

void BubbleSort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        int cnt = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                cnt++;
            }
        }
        if (cnt == 0) break;
    }
    return;
}

int main() {
    int a[30];
    srand(time(nullptr));
    for (int i = 0; i < 30 ; i++) {
        a[i] = rand() % 2005;
    }
    BubbleSort(a, 30);
    for (int x : a) cout << x << " ";
}