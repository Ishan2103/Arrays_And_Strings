#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 30, 45, 50};  
    int size = 5;
    int num, found = 0;

    cout << "Enter a number to find: ";
    cin >> num;

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }

    if (found)
        cout << "Number found in the array." << endl;
    else
        cout << "Number not found in the array." << endl;

    return 0;
}
