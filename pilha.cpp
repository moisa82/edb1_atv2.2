#include "headers/pilha.h"
#include <iostream>
using namespace std;

// Construtor
Stack::Stack() {
    top = nullptr;
}

// Destrutor
Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

void Stack::push(char value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

char Stack::pop() {
    if (isEmpty()) {
        cout << "A pilha está vazia, não é possível remover o elemento." << endl;
        return -1;
    } else {
        char poppedValue = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return poppedValue;
    }
}

char Stack::peek() {
    if (isEmpty()) {
        cout << "A pilha está vazia." << endl;
        return -1;
    } else {
        return top->data;
    }
}

bool Stack::isEmpty() {
    return (top == nullptr);
}
