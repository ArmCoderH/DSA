#include <iostream>
using namespace std;

void wavePrint(int arr[][100], int nRows, int mCols) {
    // Traverse the columns
    for (int col = 0; col < mCols; col++) {
        // Check if the column is odd
        if (col % 2 == 1) {  // Same as (col & 1), checking if column is odd
            // Odd column: traverse from bottom to top
            for (int row = nRows - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";  // Print each element
            }
        } 
        else {
            // Even column: traverse from top to bottom
            for (int row = 0; row < nRows; row++) {
                cout << arr[row][col] << " ";  // Print each element
            }
        }
    }
    cout << endl;  // To add a new line after printing the result
}

int main() {
    int nRows, mCols;
    cout << "Enter number of rows and columns: ";
    cin >> nRows >> mCols;
    
    int arr[100][100];  // Assuming a max size of 100x100 for the 2D array

    // Input the elements of the 2D array
    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < mCols; j++) {
            cin >> arr[i][j];  // Take input for each element of the 2D array
        }
    }

    // Call the function to print the array in wave pattern
    wavePrint(arr, nRows, mCols);

    return 0;
}
