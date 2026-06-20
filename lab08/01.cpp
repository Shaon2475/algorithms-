
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "I am Bangladeshi@#"; // fixed input

    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == ' ' )) {
            count++;
        }
    }

    cout << "The line is: " << str << endl;
    cout << "Number of symbols: " << count << endl;

    return 0;
}
