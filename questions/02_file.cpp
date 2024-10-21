    #include <iostream>
using namespace std;

int main() {
    char ch;

    // Input a character
    cout << "Enter a lowercase letter: ";
    cin >> ch;

    // Check if the character is lowercase and convert it to uppercase using the conditional operator
    char uppercase = (ch >= 'a' && ch <= 'z') ? (ch - 'a' + 'A') : ch;

    // Output the converted uppercase letter
    cout << "The uppercase letter is: " << uppercase << endl;

    return 0;
}
