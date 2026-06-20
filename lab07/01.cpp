#include <iostream>
using namespace std;

int main() {
    string str = "I love Bangladesh";
    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else consonants++;
        }
    }

    cout << "String: " << str << endl;
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
