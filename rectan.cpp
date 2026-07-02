// **Rectangle Class**
// Create a `class Rectangle` with:
// - Private: `width`, `height`
// - Public: Constructor, `area()`, `perimeter()`, `isSquare()` (returns bool)
// - Also write a function `compareArea(Rectangle r1, Rectangle r2)` that prints which has bigger area
// ```
// Input:
// 5 3
// 4 4

// Output:
// Rectangle 1 — Area: 15, Perimeter: 16, Square: No
// Rectangle 2 — Area: 16, Perimeter: 16, Square: Yes
// Rectangle 2 has bigger area

#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h);
    double area();
    double perimeter();
    bool isSquare();
};

Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

double Rectangle::area() {
    return width * height;
}

double Rectangle::perimeter() {
    return 2 * (width + height);
}

bool Rectangle::isSquare() {
    // return width == height;
    return fabs(width - height) < 1e-9; // To handle floating-point precision issues
}

void compareArea(Rectangle r1, Rectangle r2) {
    if (r1.area() > r2.area()) {
        cout << "Rectangle 1 has bigger area" << endl;
    } else if (r2.area() > r1.area()) {
        cout << "Rectangle 2 has bigger area" << endl;
    } else {
        cout << "Both rectangles have the same area" << endl;
    }
}

int main() {
    double w1, h1, w2, h2;
    cout << "Enter width and height for Rectangle 1: ";
    cin >> w1 >> h1;
    cout << "Enter width and height for Rectangle 2: ";
    cin >> w2 >> h2;

    Rectangle r1(w1, h1);
    Rectangle r2(w2, h2);

    cout << "Rectangle 1 — Area: " << r1.area() << ", Perimeter: " << r1.perimeter() 
         << ", Square: " << (r1.isSquare() ? "Yes" : "No") << endl;

    cout << "Rectangle 2 — Area: " << r2.area() << ", Perimeter: " << r2.perimeter() 
         << ", Square: " << (r2.isSquare() ? "Yes" : "No") << endl;

    compareArea(r1, r2);

    return 0;
}