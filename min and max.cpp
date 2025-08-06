#include <iostream>
using namespace std;

int main() {
    int arr[] = {15, 8, 22, 5, 31};
    int size = 5;
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Minimum number = " << min << endl;
    cout << "Maximum number = " << max << endl;

    return 0;
}
