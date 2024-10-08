#include <iostream>

using namespace std;

int main() {
    int size;

    // Ask the user for the size of the grid
    cout << "Enter the size of the grid (e.g., 9 for a 9x9 grid): ";
    cin >> size;

    // Check if the size is valid
    if (size <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    int** grid = new int* [size]; // Create a dynamic 2D array
    for (int i = 0; i < size; ++i) {
        grid[i] = new int[size];
    }

    // Generate the grid
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            grid[i][j] = (i + 1) * (j + 1); // Fill with multiplication table values
        }
    }

    // Output the grid with formulas
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << (i + 1) << " * " << (j + 1) << " = " << grid[i][j] << "\t"; // Display formula and result
        }
        cout << endl; // New line after each row
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < size; ++i) {
        delete[] grid[i];
    }
    delete[] grid;

    return 0;
}
