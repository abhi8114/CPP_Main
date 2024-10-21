#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the greatest using the conditional operator
    int greatest = (num1 > num2) ? 
                   ((num1 > num3) ? num1 : num3) : 
                   ((num2 > num3) ? num2 : num3);

    // Output the greatest number
    cout << "The greatest number is: " << greatest << endl;

    return 0;
}
