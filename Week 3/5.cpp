#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x, y;
    Point(){}
    Point(int a, int b) {
        x = a;
        y = b;
    }
};

struct Rect {
    int x, y, w, h;
    Rect(int x_, int y_, int w_, int h_) {
        x = x_;
        y = y_;
        w = w_;
        h = h_;
    }

    bool contains(const Point p) {
        if (p.x >= x && p.x <= x+h && p.y >= y && p.y <= y + w) {
            return true;
        }
        return false;
    }

};

int main() {
    cout << "Nhap x, y, w, h cua hinh cn\n";
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    Rect R(x,y,w,h);
    cin.ignore();
    cout << "Nhap diem: \n";
    int px, py;
    cin >> px >> py;
    Point p(px, py);

    if (R.contains(p)) {
        cout << "diem o trong hinh\n";
    } else {
        cout << "diem o ngoai hinh\n";
    }
    return 1;

}