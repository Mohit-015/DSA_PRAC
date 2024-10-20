#include <iostream>
using namespace std;

int main() {
    int arr[] = {35, 11, 25, 78, 23, 46, 90, 34};
    int n = sizeof(arr) / sizeof(arr[0]);


    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return -1;
    }

    int largest = arr[0];
    int secondLargest = -1;  

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; 
        }
    }

    if (secondLargest == -1) {
        cout << "No second largest element in the array." << endl;
    } else {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    }

    return 0;
}
