#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x;
    int y;
    Point() {}
    Point (int a, int b) {
        x = a, y = b;
    }
};

bool operator==(const Point &a, const Point &b) {
    if (a.x == b.x && a.y == b.y) return true;
    return false;
}

enum direction {
    UP,
    DOWN,
    RIGHT,
    LEFT
};

int main() {
    int x, y; cin >> y >> x;
    int a[y][x];
    direction d;
    Point tl(0,0), tr(y-1, 0), bl(0, y-1), br(x-1, y-1);
    Point tmp(0,0);
    int curr = 1;
    bool first = true;
    while (curr <= x*y) {
        if (tmp == tl) {
            d = RIGHT;
            if (first) {
                tl.y++;
            } else {
                tl.y++;
                tl.x++;
            }
            first = false;
        } else if (tmp == tr) {
            d = DOWN;
            tr.x--;
            tr.y++;
        } else if (tmp == br) {
            d = LEFT;
            br.x -= 1;
            br.y -= 1;
        } else if (tmp == bl) {
            d = UP;
            bl.x++;
            bl.y--;
        }
        switch (d)
        {
            case UP:
                tmp.y--;
                break;
            case DOWN:
                tmp.y++;
                break;
            case RIGHT:
                tmp.x++;
                break;
            case LEFT:
                tmp.x--;
                break;
        }
        a[tmp.y][tmp.x] = curr;
        curr++;
        
    }

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}