#include <bits/stdc++.h>

using namespace std;

enum direction {
    UP,
    DOWN,
    RIGHT,
    LEFT
};

int main() {
    int x, y; cin >> x >> y;
    int a[x][y];
    direction d = RIGHT;
    int top = 0, bottom = x-1;
    int left = 0, right = y-1;
    int curr = 1;
    bool first = true;
    while (curr <= x*y) {
        switch (d)
        {
        case RIGHT:
            for (int i = left; i <= right; i++) {
                a[top][i] = curr;
                curr++;
            }
            d = DOWN;
            top++;
            break;
        case LEFT:
            for (int i = right; i >= left; i--) {
                a[bottom][i] = curr;
                curr++;
            }
            d = UP;
            bottom--;
            break;
        case DOWN:
            for (int i = top; i <= bottom; i++) {
                a[i][right] = curr;
                curr++;
            }
            right--;
            d = LEFT;
            break;
        case UP:
            for (int i = bottom; i >= top; i--) {
                a[i][left] = curr;
                curr++;
            }
            d = RIGHT;
            left++;
            break;
        }        
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}