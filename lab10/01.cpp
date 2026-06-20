#include <iostream>
using namespace std;

const int MAX = 100;

struct Node {
    char ch;
    int freq;
    Node *left, *right;
};

struct MinHeap {
    int size;
    Node* arr[MAX];
    MinHeap() { size = 0; }

    void insert(Node* node) {
        int i = size++;
        while (i && node->freq < arr[(i - 1) / 2]->freq) {
            arr[i] = arr[(i - 1) / 2];
            i = (i - 1) / 2;
        }
        arr[i] = node;
    }

    Node* extractMin() {
Node* temp = arr[0];
arr[0] = arr[--size];
int i = 0;
while (true) {
    int left = 2 * i + 1;
int right = 2 * i + 2;
    int smallest = i;
    if (left < size && arr[left]->freq < arr[smallest]->freq)
        smallest = left;
    if (right < size && arr[right]->freq < arr[smallest]->freq)
        smallest = right;
        if (smallest == i)
      break;
    swap(arr[i], arr[smallest]);
    i = smallest;
}
        return temp;}
};

Node* newNode(char ch, int freq) {
    Node* temp = new Node;
    temp->ch = ch;
    temp->freq = freq;
    temp->left = temp->right = NULL;
    return temp;
}

void printCodes(Node* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
}
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
}
    if (!root->left && !root->right) {
        cout << root->ch << ": ";
        for (int i = 0; i < top; i++)
            cout << arr[i];
        cout << endl;
}
}

void HuffmanCoding(char chars[], int freq[], int n) {
    MinHeap heap;
    for (int i = 0; i < n; i++) {
        heap.insert(newNode(chars[i], freq[i]));
    }
    while (heap.size > 1) {
        Node* left = heap.extractMin();
        Node* right = heap.extractMin();

        Node* merged = newNode('$', left->freq + right->freq);
        merged->left = left;
        merged->right = right;

        heap.insert(merged);
    }

    Node* root = heap.extractMin();

    int arr[MAX], top = 0;
    cout << "Huffman Codes for given characters:\n";
    printCodes(root, arr, top);
}

int main() {

    char chars[9] = {'A', 'B', 'C', 'D', 'E', 'F','M','G','I'};
    int freq[] = {5, 9, 12, 13, 16, 45};
HuffmanCoding(chars, freq, 9);

    return 0;
}

