#include <iostream>
using namespace std;
inline float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    float area = calculateArea(length, width);
    cout << "Area of rectangle: " << area << endl;

    return 0;
}