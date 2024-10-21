#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;

    // Get dimensions of matrices from user
    cout << "Enter dimensions of first matrix (m x n): ";
    cin >> m >> n;
    cout << "Enter dimensions of second matrix (p x q): ";
    cin >> p >> q;

    // Check if matrices can be multiplied
    if (n != p) {
        cout << "Matrices cannot be multiplied!" << endl;
        return 1;
    }

    // Declare matrices
    int A[m][n], B[p][q], C[m][q];

    // Get elements of first matrix from user
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Get elements of second matrix from user
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }

    // Multiply matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print resultant matrix
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}