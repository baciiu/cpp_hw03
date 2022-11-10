#include "ex03_3.h"

#include <iostream>
using namespace std;

#define SIZE 5

// push, pop, getSum , getMax, getSize
template <class T>
class Stack{

public:
    Stack();

    void push(T item);
    T pop();
    T getTopElement();
    T getSum();
    T getMaxElement();
    int getSize();
    bool isEmpty();
    bool isFull();

private:
    int top;
    T stack[SIZE];
};

template <class T>
Stack<T>::Stack(){
    top = -1;
}

template<class T>
void Stack<T>::push(T item) {

    if( isFull()){
        cout << "Stack is full!\n";
    }else{
        top++;
        stack[top] = item;
    }
}

template<class T>
T Stack<T>::pop() {

    T popped_element = stack[top];
    top--;
    return popped_element;
}

template <class T>
T Stack<T>::getTopElement(){
    return stack[top];
}

template <class T>
bool Stack<T>::isEmpty(){
    if (top == -1)
        return 1;
    else
        return 0;
}

template <class T>
bool Stack<T>::isFull(){
    if (top == (SIZE - 1))
        return 1;
    else
        return 0;
}

template <class T>
T Stack<T>::getSum(){

    int sum = 0 ;

    for( int i = 0 ; i <= top ; i++){
        sum += stack[i];
    }
    return sum;
}

template <class T>
int Stack<T>::getSize(){
    return top + 1 ;
}

template <class T>
T Stack<T>::getMaxElement(){

    T max = stack[0] ;

    for( int i = 1 ; i <= top  ; i++){

        if( max < stack[i]){
            max = stack[i];
        }
    }
    return max;
}

void Exercise33::run(){
    cout << "Exercise 3\n" << endl;
    Stack<int> integer_stack;

    cout << "---------------------------------------------------------" << endl;
    cout << "Size of the stack is " << integer_stack.getSize() << endl;
    cout << "stack.isEmpty() = " << integer_stack.isEmpty() << endl;

    cout << "---------------------------------------------------------" << endl;

    integer_stack.push(2);
    cout << "PUSH 2" << endl;
    integer_stack.push(54);
    cout << "PUSH 54" << endl;
    integer_stack.push(255);
    cout << "PUSH 255" << endl;
    integer_stack.push(100);
    cout << "PUSH 100" << endl;
    integer_stack.push(32);
    cout << "PUSH 32" << endl;

    cout << "---------------------------------------------------------" << endl;
    cout << "Size of the stack is " << integer_stack.getSize() << endl;
    cout << "Max element is " << integer_stack.getMaxElement() << endl;
    cout << "Sum of Integer Stack is " << integer_stack.getSum() << endl;
    cout << "Top of Integer Stack is " << integer_stack.getTopElement() << endl;
    cout << "---------------------------------------------------------" << endl;

    cout << "POP " << integer_stack.pop() << endl;

    cout << "---------------------------------------------------------" << endl;
    cout << "Size of the stack is " << integer_stack.getSize() << endl;
    cout << "Max element is " << integer_stack.getMaxElement() << endl;
    cout << "Sum of Integer Stack is " << integer_stack.getSum() << endl;
    cout << "Top of Integer Stack is " << integer_stack.getTopElement() << endl;
    cout << "---------------------------------------------------------" << endl;


    cout << "POP " << integer_stack.pop() << endl;

    cout << "---------------------------------------------------------" << endl;
    cout << "Size of the stack is " << integer_stack.getSize() << endl;
    cout << "Max element is " << integer_stack.getMaxElement() << endl;
    cout << "Sum of Integer Stack is " << integer_stack.getSum() << endl;
    cout << "Top of Integer Stack is " << integer_stack.getTopElement() << endl;
    cout << "---------------------------------------------------------" << endl;

    integer_stack.push(5);
    cout << "PUSH 5" << endl;

    cout << "---------------------------------------------------------" << endl;
    cout << "Size of the stack is " << integer_stack.getSize() << endl;
    cout << "Max element is " << integer_stack.getMaxElement() << endl;
    cout << "Sum of Integer Stack is " << integer_stack.getSum() << endl;
    cout << "Top of Integer Stack is " << integer_stack.getTopElement() << endl;
    cout << "---------------------------------------------------------" << endl;


}