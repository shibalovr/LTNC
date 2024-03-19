#include <bits/stdc++.h>

using namespace std;

int main() {
    // int a[10]  = {1,2,3,4,5,6,7,8,9,10};
    int a[10]  = {10,9,8,7,6,5,4,3,2,1};
    
    
    cout << a[10] << endl; // 8 idk why?
    cout << a[11] << endl; // 0 ?
    cout << a[-1] << endl; // other value //
    int a2[4][3];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a2[i][j];
        }
    }
    // mat phan tu tu 3-4;
    // cau truc : lien tiep nhau theo tung hang.
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a2[i][j] << " ";
        }
        cout << endl;
    }
}