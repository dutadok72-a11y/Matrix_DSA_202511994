#include <iostream>
using namespace std;

int main() {
    
    // Declare a 3x2 matrix
    int matrix[3][2]={
    {1, 2},
    {3, 4},
    {5, 6}
    };

    // Input values into the matrix
    cout << "Enter 6 elements for the 3x2 matrix:" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "\nThe 3x2 matrix is:" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}