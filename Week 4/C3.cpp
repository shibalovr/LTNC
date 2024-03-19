#include <bits/stdc++.h>

using namespace std;

bool check(int a) {
    string s = to_string(a);
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n-i-1]) return false;
    }
    return true;
}

int main() {
    int q;
    cin >> q;
    while(q--) {
        int a, b, cnt(0);
        cin >> a >> b;
        for (int i = a; i <= b; i++) {
            if (check(i)) cnt++;
        }
        cout << cnt << endl;
    }
    
}