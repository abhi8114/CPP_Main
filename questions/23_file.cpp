#include <iostream> 
using namespace std; 
class MyClass { 
public: 
 void display() { 
 cout << "Hello from MyClass!" << endl; 
 } 
 void showValue(int x) { 
 cout << "Value: " << x << endl; 
 } 
}; 
int main() { 
 MyClass obj; 
 MyClass* ptr = &obj; 
 void (MyClass::*ptrDisplay)() = &MyClass::display; 
 void (MyClass::*ptrShowValue)(int) = &MyClass::showValue; 
 (obj.*ptrDisplay)(); 
 (ptr->*ptrShowValue)(42); 
 return 0; 
} 
