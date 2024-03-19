#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n; cin >> m >> n;
    char a[m+2][n+2];
    for (int i = 0; i < m+2; i++) {
        for (int j = 0; j < n+2; j++) {
            if (i == 0 || j == 0 || i == m+1 || j == n+1) {
                a[i][j] = '0';
                continue;
            }
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == '*') {
                cout << a[i][j] << " ";
                continue;
            }
            int cnt = 0;
            for (int k = -1; k <= 1; k++) {
                for (int l = -1; l <= 1; l++) {
                    if (a[i+k][j+l] == '*') cnt++;
                }
            }
            a[i][j] = '0' + cnt;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
}