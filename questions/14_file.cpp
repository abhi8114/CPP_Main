#include <iostream>
using namespace std;

// Define the class
class Rectangle {
private:
    float length;
    float width;
public:
    // Constructor to initialize the length and width
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Member function to calculate the area of the rectangle
    float calculateArea();
};

// Define the member function outside the class
float Rectangle::calculateArea() {
    return length * width;
}

int main() {
    // Create an object of the Rectangle class
    Rectangle rect(5.0, 3.0);

    // Access the member function to calculate the area
    float area = rect.calculateArea();

    // Display the calculated area
    cout << "Area of rectangle: " << area << endl;

    return 0;
}