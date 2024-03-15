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

void print(Point p) {
    cout << p.x << " " << p.y << endl;
}

void add_v1(Point a, Point b) {
    a.x += b.x;
    a.y += b.y;
}

void add_v2(Point &a, Point &b) {
    a.x += b.x;
    a.y += b.y;
}

Point mid_point(const Point a,const Point b) {
    int x = (a.x + b.x)/2.0;
    int y = (a.y + b.y)/2.0;

    Point res(x,y);
    return res;
}
int main() {
    Point a(3,4), b(5,6);

    print(a);
    add_v1(a,b);
    print(a);
    add_v2(a,b);
    print(a);

    Point middle = mid_point(a,b);

    print(middle);
}