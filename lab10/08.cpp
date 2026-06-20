#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Stack {
private:
Node* top;

public:
Stack() {
    top = nullptr;
}
    void push(int value) {
Node* newNode = new Node();
    newNode->data = value;
newNode->next = top;
top = newNode;
}


void pop() {
if (top == nullptr) {
    cout << "Stack Underflow";
return;
}
    Node* temp = top;
    top = top->next;
    cout << "Popped: " << temp->data << endl;
    delete temp;
}
    void display() {
    Node* temp = top;
    cout << "Stack: ";
    while (temp != nullptr) {
    cout << temp->data << " -> ";
    temp = temp->next;
}
cout << "NULL\n";
}
};
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue Underflow";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) rear = nullptr;
        cout << "Dequeued: " << temp->data << endl;
        delete temp;
    }
    void display() {
        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
int main() {
    Stack s;
    Queue q;

    cout << "=== Stack Operations ==="<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    cout<<endl;

    cout << "=== Queue Operations ==="<<endl;
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}

