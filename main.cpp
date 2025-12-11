#include <iostream>

using namespace std;

class Point{
    public:
    int x;
    int y;

    void print(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

int main(){
    Point p1;
    p1.x=10;
    p1.y=25;
    p1.print();

    Point p2;
    p2.x=25;
    p2.y=50;
    p2.print();
    
    

    
    return 0;
}