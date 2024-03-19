#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int n) {
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        if (m.find(a[i]) != m.end()) return true;
        else {
            m[a[i]] = 1;
        }
    }
    return false;
}

int main () {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (check(a,n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}