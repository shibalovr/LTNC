#include <bits/stdc++.h>

using namespace std;

bool check(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n-i-1]) return false;
    }
    return true;
}

int main() {
    char s[100];
    cin.getline(s, 101);
    if (check(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}