#include <iostream>
using namespace std;

int main() {
   
    int arr[] = {25, 12, 45, 71, 23, 36, 90, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}
