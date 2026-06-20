#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
Node* insertBST(Node* root, int val) {
    if (root == nullptr)
        return createNode(val);
    if (val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
void heapify(int heap[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && heap[left] > heap[largest])
        largest = left;
    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        heapify(heap, n, largest);}
}

void buildMaxHeap(int heap[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(heap, n, i);
}

void printHeap(int heap[], int n) {
    cout << "Max Heap: ";
    for (int i = 0; i < n; i++)
        cout << heap[i] << " ";
    cout << endl;
}

int main() {

    int bstVal[] = {30, 20, 40, 10, 25,49,76,23};
    int size = 8;
    Node* bstRoot = nullptr;
    for (int i = 0; i < size; i++)
        bstRoot = insertBST(bstRoot, bstVal[i]);

    cout << "BST In-Order Traversal: ";
    inorder(bstRoot);
    cout << endl;
    int heapValues[] = {30, 20, 40, 50, 60,12, 10, 25};
    buildMaxHeap(heapValues, size);
    printHeap(heapValues, size);

    return 0;
}

