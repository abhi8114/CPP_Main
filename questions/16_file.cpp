#include <iostream>
using namespace std;

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

    // Constant member function to calculate the area of the rectangle
    float calculateArea() const {
        return length * width;
    }

    // Constant member function to display the length and width of the rectangle
    void displayDimensions() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

int main() {
    // Create a constant object of the Rectangle class
    const Rectangle rect(5.0, 3.0);

    // Call the constant member function to calculate the area
    float area = rect.calculateArea();

    // Call the constant member function to display the dimensions
    rect.displayDimensions();

    // Display the calculated area
    cout << "Area of rectangle: " << area << endl;

    return 0;
}