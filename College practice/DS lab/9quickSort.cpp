//Program to sort an array of integers in ascending order using quick sort.
#include <iostream>
using namespace std;
template <typename T>
int partition(T arr[], int low, int high) {
    T pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (true) {
        while (i <= j && arr[i] <= pivot) {
            i++;
        }
        while (j >= i && arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
        } else {
            break;
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
template <typename T>
void quicksort(T arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}
int main() {
    int myArray[] = {3, 6, 8, 10, 1, 2, 1};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    quicksort(myArray, 0, size - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    return 0;
}
