#include "headers/pilha.h"
#include <iostream>
#include <string>
using namespace std;

bool parentesesBalanceados(const string& expression) {
    Stack pilha;

    for (char ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (pilha.isEmpty()) {
                return false;
            }
            pilha.pop();
        }
    }

    return pilha.isEmpty();
}

int main() {

    string express;
    cout << "Digite uma expressão: \n";
    getline(cin, express);

    if (parentesesBalanceados(express)) {
        cout << "A expressão está balanceada." << endl;
    } else {
        cout << "A expressão NÃO está balanceada." << endl;
    }


    return 0;
}
