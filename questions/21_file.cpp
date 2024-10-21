#include <iostream> 
using namespace std; 
class Matrix { 
public: 
 int data[2][2]; 
 void input() { 
 cout << "Enter matrix elements (2x2):" << endl; 
 for (int i = 0; i < 2; i++) { 
 for (int j = 0; j < 2; j++) { 
 cin >> data[i][j]; 
 } 
 } 
 } 
 void display() { 
 for (int i = 0; i < 2; i++) { 
 for (int j = 0; j < 2; j++) { 
 cout << data[i][j] << " "; 
 } 
 cout << endl; 
 } 
 } 
}; 
Matrix multiplyMatrices(Matrix m1, Matrix m2) { 
 Matrix result; 
 for (int i = 0; i < 2; i++) { 
 for (int j = 0; j < 2; j++) { 
 result.data[i][j] = 0; 
 for (int k = 0; k < 2; k++) { 
 result.data[i][j] += m1.data[i][k] * m2.data[k][j]; 
 } 
 } 
 } 
 return result; 
} 
int main() { 
 Matrix m1, m2, result; 
 cout << "For first matrix:" << endl; 
 m1.input(); 
 cout << "For second matrix:" << endl; 
 m2.input(); 
 result = multiplyMatrices(m1, m2);
 cout << "Resultant matrix:" << endl;
 result.display();
 return 0;
}