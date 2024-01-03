#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, -2, -5, -8, 3, 0, -4, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    // Sort the positive numbers in ascending order
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            for (int j = i; j < size; j++) {
                if (arr[j] >= 0 && arr[j] < arr[i]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    // Print the sorted array
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
