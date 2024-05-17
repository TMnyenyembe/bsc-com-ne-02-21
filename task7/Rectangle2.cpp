#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle() {
        length = 0;
        width = 0;
    }

    Rectangle(float len, float wid) {
        length = len;
        width = wid;
    }

    ~Rectangle() {}

    void setLength(int len) {
        length = len;
    }

    void setWidth(int wid) {
        width = wid;
    }

    int getLength() const {
        return length;
    }

    int getWidth() const {
        return width;
    }

    int calculateArea() const {
        return length * width;
    }
};

int main() {
    int length1, width1, length2, width2;

    // Create an instance of Rectangle using default constructor
    Rectangle rect1;

    // Input length and width from the user for rect1
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;

    // Assign values using accessor methods for rect1
    rect1.setLength(length1);
    rect1.setWidth(width1);

    // Output area of rect1
    cout << "Area of the first rectangle: " << rect1.calculateArea() << endl;

    // Create another instance of Rectangle using overloaded constructor
    Rectangle rect2;

    // Input length and width from the user for rect2
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    rect2 = Rectangle(length2, width2);

    // Output area of rect2
    cout << "Area of the second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}
