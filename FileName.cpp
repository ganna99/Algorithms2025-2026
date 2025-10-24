#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = { 60, 30, 10, 50, 20, 40 };
    int n = 6;

    cout << "Before sort :"  ;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    selectionSort(arr, n);

    cout << "After sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}