#include <bits/stdc++.h>

using namespace std;

// char s[10]; // 2 blank rows;
// char s[5] = "abcd"; // abcd // abcd;
// char s[3] = "abcd"; // initializer-string too long;
// char s[4] = "abcd"; // initializer-string too long;
// char s[] = "abcd"; // size = 5;

int main() {
    // char s[10]; // 2 blank rows;
    // char s[5] = "abcd"; // abcd // abcd;
    // char s[3] = "abcd"; // initializer-string too long;
    // char s[4] = "abcd"; // initializer-string too long;
    char s[] = "abcd"; // size = 5;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        cout << s[i];
    }
    cout << endl;
    cout << s << endl;
    cout << sizeof(s);

}