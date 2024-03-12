#include <bits/stdc++.h>

using namespace std;

struct Rect {
    int x, y, w, h;
    Rect() {}
    Rect(int x_, int y_, int w_, int h_) {
        x = x_;
        y = y_;
        w = w_;
        h = h_;
    }
};

struct Ship{
    Rect R;
    string id;
    int dx, dy;

    Ship (int x, int y, int w, int h, string id_, int dx_, int dy_) {
        R.x = x;
        R.y = y;
        R.w = w;
        R.h = h;
        id = id_;
        dx = dx_;
        dy = dy_;
    }

    void move() {
        R.x += dx;
        R.y += dy;
    }
};

void display(const Ship &ship) {
    cout << "So hieu: " << ship.id << endl;
    cout << "Toa do: " << ship.R.x << " " << ship.R.y << endl;
    return; 
}

int main() {
    Ship ship1(0,0,3,4,"tau 1",1,2);
    Ship ship2(3,4,4,4,"tau 2",2,2);

    int i = 0;
    while(i < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        i++;
    }
}