#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }

    ~Rectangle() {}

    void setLength(float len) {
        length = len;
    }

    void setWidth(float wid) {
        width = wid;
    }

    float getLength() const {
        return length;
    }

    float getWidth() const {
        return width;
    }

    float calculateArea() const {
        return length * width;
    }
};

int main() {
    float length, width;

    // Creating an instance of Rectangle
    Rectangle rect;

    // Inputing the dimensions 
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Assigning  values using  the accessor methods
    rect.setLength(length);
    rect.setWidth(width);
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
