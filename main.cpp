#include <iostream>
using namespace std;

class Point {
public:
    int x;
    int y;

    Point(int X, int Y) {
        x = X;
        y = y;
    }


    void print() {
        cout << x << ", " << y << endl;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(3, 5);
    point p3(4, 6);
    p1.print();
    p2.print();
    p3.print();
    return 0;
}