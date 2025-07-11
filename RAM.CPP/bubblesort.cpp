#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if elements are in wrong order
            if (arr[j] > arr[j + 1]) {
                // Swapping without using extra function
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    // Loop for printing array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
