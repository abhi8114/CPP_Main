#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    // Input a number
    cout << "Enter a number: ";
    cin >> num;

    // Calculate the sum of digits
    while (num != 0) {
        sum += num % 10;  // Extract the last digit and add to sum
        num /= 10;        // Remove the last digit
    }

    // Output the result
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
