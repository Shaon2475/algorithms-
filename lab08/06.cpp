#include <iostream>
#include <string>
using namespace std;

int CSimilarity(const string& word1, const string& word2) {
    int similarity = 0;
    int length = min(word1.length(), word2.length());
    for (int i = 0; i < length; ++i) {
        if (word1[i] == word2[i]) {
            similarity++;
}
}
return similarity;
}

int main() {
    string word1, word2;


    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the second word: ";
    cin >> word2;
    int similarity= CSimilarity(word1, word2);
    cout << "Similarity length: " << similarity << endl;
    cout << "Similarity percentage: " << (100.0 * similarity) / max(word1.length(), word2.length()) << "%" << endl;

    return 0;
}

