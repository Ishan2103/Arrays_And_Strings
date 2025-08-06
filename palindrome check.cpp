#include <iostream>
using namespace std;

int main() {
    char str[50];
    int length = 0;

    cout << "Enter a string: ";
    cin >> str;
    while (str[length] != '\0') {
        length++;
    }
    int i = 0;
    while (i < length / 2) {
        if (str[i] != str[length - i - 1]) {
            cout << "The string is not a palindrome." << endl;
            return 0;
        }
        i++;
    }

    cout << "The string is a palindrome." << endl;
    return 0;
}
