#include <iostream>
using namespace std;

bool isSortedAndRotated(int arr[], int n) {
    int countDecreasingPoints = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            countDecreasingPoints++;
        }
    }

    if (arr[n - 1] > arr[0]) {
        countDecreasingPoints++;
    }

    return (countDecreasingPoints == 1);
}

int main() {
    int arr[] = {4, 5, 6, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSortedAndRotated(arr, n)) {
        cout << "The array is sorted and rotated." << endl;
    } else {
        cout << "The array is NOT sorted and rotated." << endl;
    }

    return 0;
}
