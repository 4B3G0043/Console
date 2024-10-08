#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the size of the grid (e.g., 9 for a 9x9 grid): ";
    cin >> size;

    if (size <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int** grid = new int* [size];
    for (int i = 0; i < size; ++i) {
        grid[i] = new int[size];
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            grid[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << (i + 1) << " * " << (j + 1) << " = " << grid[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < size; ++i) {
        delete[] grid[i];
    }
    delete[] grid;

    return 0;
}
