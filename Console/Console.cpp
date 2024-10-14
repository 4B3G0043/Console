#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    do {
        cout << "輸入算式: ";
        cin >> num1 >> op >> num2;

        double result;

        switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            }
            else {
                cout << "錯誤: 除數不能為零!" << endl;
                continue;
            }
            break;
        default:
            cout << "錯誤: 無效的運算符號!" << endl;
            continue;
        }

        cout << "結果: " << num1 << " " << op << " " << num2 << " = " << result << endl;

        cout << "是否要繼續進行另一個計算? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');
	cout << "程式結束!" << endl;

    return 0;
}
