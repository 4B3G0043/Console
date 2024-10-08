#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "輸入乘法表大小(1~9): ";
    cin >> size;

    if (size <= 0) {
        cout << "請輸入正確的數值!" << endl;
        return 1;
    }

    else if (size > 9) {
        cout << "請輸入小於9的數值!" << endl;
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
            cout << (i + 1) << "*" << (j + 1) << "=" << grid[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < size; ++i) {
        delete[] grid[i];
    }
    delete[] grid;

    return 0;
}
