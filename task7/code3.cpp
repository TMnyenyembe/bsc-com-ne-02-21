#include <iostream>
#include <cmath> // For math functions like pow and M_PI
using namespace std;

namespace shapes {

    // Square class
    class Square {
    private:
        double sideLength;

    public:
        // Default constructor
        Square() {
            sideLength = 0.0;
        }

        // Overloaded constructor
        Square(float side) {
            sideLength = side;
        }

        // Destructor
        ~Square() {}

        // Accessor methods
        void setSideLength(double side) {
            sideLength = side;
        }

        float getSideLength() const {
            return sideLength;
        }
    };

    // Triangle class
    class Triangle {
    private:
        double base;
        double height;

    public:
        // Default constructor
        Triangle() {
            base = 0.0;
            height = 0.0;
        }

        // Overloaded constructor
        Triangle(double b, double h) {
            base = b;
            height = h;
        }

        // Destructor
        ~Triangle() {}

        // Accessor methods
        void setBase(double b) {
            base = b;
        }

        void setHeight(double h) {
            height = h;
        }

        float getBase() const {
            return base;
        }

        float getHeight() const {
            return height;
        }
    };

    // Circle class
    class Circle {
    private:
        double radius;

    public:
        // Default constructor
        Circle() {
            radius = 0.0;
        }

        // Overloaded constructor
        Circle(double r) {
            radius = r;
        }

        // Destructor
        ~Circle() {}

        // Accessor methods
        void setRadius(double r) {
            radius = r;
        }

        float getRadius() const {
            return radius;
        }
    };

    // Area class
    class Area {
    public:
        // To Calculate area of a square
        static double calculateSquareArea(const Square & square) {
            double side = square.getSideLength();
            return side * side;
        }

        // Calculating area of a triangle
        static double calculateTriangleArea(const Triangle & triangle) {
            double base = triangle.getBase();
            double height = triangle.getHeight();
            return 0.5 * base * height;
        }

        // Calculate area of a circle
        static double calculateCircleArea(const Circle & circle) {
            double radius = circle.getRadius();
            return M_PI * radius * radius;
        }
    };
}

int main() {
    // Create instances of shapes
    shapes::Square square(5.0);
    shapes::Triangle triangle(4.0, 3.0);
    shapes::Circle circle(2.5);

    // Calculate and output area of each shape
    cout << "Area of the square: " << shapes::Area::calculateSquareArea(square) << endl;
    cout << "Area of the triangle: " << shapes::Area::calculateTriangleArea(triangle) << endl;
    cout << "Area of the circle: " << shapes::Area::calculateCircleArea(circle) << endl;

    return 0;
}
