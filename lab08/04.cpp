#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void addEnd(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        head = newNode;
    }
else {
    Node* temp = head;
    while (temp->next != NULL)
    temp = temp->next;
    temp->next = newNode;
}
}
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
    cout << temp->data << " -> ";
    temp = temp->next;
    }
    cout << "NULL"<<endl;
}
void splitList(Node* head, Node*& firstHalf, Node*& secondHalf) {
    if (head == NULL) {
        firstHalf = secondHalf = NULL;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    firstHalf = head;
    secondHalf = slow->next;
    slow->next = NULL;
}
void addBeginning(Node*& head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
}

int main()
 {
Node* head = NULL;
int n, value;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
    cin >> value;
    addEnd(head, value);
    }
    cout << "Original List: ";
    printList(head);
    cout<<endl;
    Node* firstHalf = NULL;
    Node* secondHalf = NULL;

    splitList(head, firstHalf, secondHalf);

    cout << "First Half before adding:";
    printList(firstHalf);
     cout<<endl;
    cout << "Second Half before adding: ";
    printList(secondHalf);
    cout<<endl;


    int newFValue, newSValue;
    cout << "Enter value to add at the beginning of first half: ";
    cin >> newFValue;
    cout << "Enter value to add at the beginning of second half: ";
    cin >> newSValue;
    cout<<endl;

    addBeginning(firstHalf, newFValue);
    addBeginning(secondHalf, newSValue);

    cout << "First Half after adding: ";
    printList(firstHalf);
cout<<endl;
    cout << "Second Half after adding: ";
    printList(secondHalf);

    return 0;
}
