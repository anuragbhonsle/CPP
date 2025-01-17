#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key)
{

    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        binarySearch(arr, mid + 1, e, key);
    }
    else
    {
       binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{

    int arr[7] = {2, 4, 6, 8, 9, 12, 15};
    int size = 7;
    int key = 9;

    bool isFound = binarySearch(arr, 0, size - 1, key);

    if (isFound)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }
}