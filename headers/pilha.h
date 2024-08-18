#ifndef STACK_H
#define STACK_H

class Stack {
private:
    struct Node {
        char data;
        Node* next;
    };
    Node* top;

public:
    // Construtor
    Stack();

    // Destrutor
    ~Stack();

    // Função para adicionar um elemento na pilha
    void push(char value);

    // Função para remover o elemento do topo da pilha
    char pop();

    // Função para verificar o elemento no topo da pilha
    char peek();

    // Função para verificar se a pilha está vazia
    bool isEmpty();
};

#endif
