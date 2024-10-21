#include <iostream>
#include <string>

// Define a simple class
class Person {
public:
    std::string name;
    int age;

    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}
};

// Function that returns a Person object
Person createPerson(std::string name, int age) {
    return Person(name, age);
}

int main() {
    // Call the function and store the returned object
    Person person = createPerson("abc", 30);

    // Print the person's details
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;

    return 0;
}