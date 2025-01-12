#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;  // Return true if key is found
        }
    }
    return false;  // Return false if key is not found
}

int main() {
    int arr[10] = {2, 3, 5, 1, 6, 7, 9, 8, 4, 0};

    // Printing the array
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter the key to search in the array: " << endl;
    cin >> key;

    bool flag = search(arr, 10, key);

    if (flag) {
        cout << "Key Found";
    } else {
        cout << "Key Not Found";
    }

    return 0;
}

