#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[10];
    cin >> s;
    cout << "_" << s << "_" << endl;
    // input: abcdefghik
    // output: _abcdefghik_
    // input: abcd
    // output: _abcd_
    // input: abcdefghiklmn
    // output: _abcdefghiklmn_
}