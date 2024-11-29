#include <iostream>
using namespace std;


class Shape {  // Lớp trừu tượng
public:
    virtual void draw() = 0; // Hàm thuần ảo
    virtual ~Shape() {}
};


class Circle: public Shape { 
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};


class Rectangle: public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};


int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();


    shape1->draw(); // Output: Drawing a Circle
    shape2->draw(); // Output: Drawing a Rectangle


    return 0;
}
