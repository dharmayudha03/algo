#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

// Fungsi untuk mengecek apakah sebuah karakter merupakan operator
bool isOperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

// Fungsi untuk mengecek prioritas operator
int getPrecedence(char c) {
    if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    return 0;
}

// Fungsi untuk mengubah ekspresi infix menjadi postfix
string infixToPostfix(const string& infix) {
    string postfix;
    stack<char> s;

    for (char c : infix) {
        // Mengabaikan spasi
        if (c == ' ')
            continue;

        if (isalnum(c)) {
            postfix += c;
        } else if (isOperator(c)) {
            while (!s.empty() && isOperator(s.top()) && getPrecedence(s.top()) >= getPrecedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();  // Menghapus '(' dari stack
        }
    }

    // Memasukkan sisa operator dari stack ke postfix
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string input;
    cout << "Masukkan ekspresi matematika infix: ";
    getline(cin, input);

    // Menghilangkan spasi
    input.erase(remove(input.begin(), input.end(), ' '), input.end());

    string postfix = infixToPostfix(input);
    cout << "Ekspresi matematika postfix: " << postfix << endl;

    return 0;
}