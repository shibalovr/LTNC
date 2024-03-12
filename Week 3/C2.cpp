#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x, y;
    Point(){}
};

void print(Point p) {
    cout << p.x << " " << p.y;
}

int main() {
    Point p;
    p.x = 3;
    p.y = 4;
    print(p);
}