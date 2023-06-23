#include <iostream>
#include <stack>
using namespace std;

string DecimalToBinary(int decimal) {
    stack<int> binaryStack;

    // Konversi desimal ke biner menggunakan stack
    while (decimal > 0) {
        int remainder = decimal % 2;
        binaryStack.push(remainder);
        decimal /= 2;
    }

    // Membangun string biner dari stack
    string binary = "";
    while (!binaryStack.empty()) {
        binary += to_string(binaryStack.top());
        binaryStack.pop();
    }

    return binary;
}

int main() {
    char repeat;

    do {
        int decimal;
        cout << "Masukkan Angka Decimal: ";
        cin >> decimal;

        string binary = DecimalToBinary(decimal);
        cout << "Angka Binary nya adalah: " << binary << endl;

        cout << "Ulang (Y/N): ";
        cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}