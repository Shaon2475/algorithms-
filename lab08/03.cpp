#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
    head = newNode;
    } else {
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    }
}

Node* combine(Node* head1, Node* head2) {
    if (!head1) return head2;
    Node* temp = head1;
    while (temp->next) temp = temp->next;
    temp->next = head2;
    return head1;
}

int find(Node* head, int value) {
    int index = 0;
    while (head) {
        if (head->data == value) {
            return index;
        }
        head = head->next;
        ++index;
    }
    return -1;
}


void inputList(Node*& head) {
    int n, value;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter values: ";
    for (int i = 0; i < n; ++i) {
    cin >> value;
    append(head, value);
    }
}
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* list1 = nullptr;
    Node* list2 = nullptr;

    cout << "Enter values for list 1:" << endl;
    inputList(list1);

    cout << "Enter values for list 2:" << endl;
    inputList(list2);

    Node* finalList = combine(list1, list2);
    cout<< "After combined linked list: ";
    printList(finalList);
    int searchValue;
    cout << "Enter value to find: ";
    cin >> searchValue;
     int index = find(finalList, searchValue);
     if (index != -1) {
        cout << "Found at index " << index << endl;
    } else {
        cout << "Not Found!" << endl;
    }
}
