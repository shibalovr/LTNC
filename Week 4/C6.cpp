#include <bits/stdc++.h>

using namespace std;

void draw(int n) {
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }
    int curr = 1;
    int i = 0, j = n/2;
    while (curr <= n*n) {
        if (a[i][j] != 0) {
            i = (i + 2) % n;
            j = (j - 1 + n) % n;
        } else {
            a[i][j] = curr;
            j = (j + 1) % n;
            i = (i - 1 + n) % n;
            curr++;
        }
        
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n; cin >> n;
    draw(n);
}