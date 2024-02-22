// To find an item using linear search:
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int searchItem;
    cout << "Enter the item you want to search for: ";
    cin >> searchItem;
    bool found = false;
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == searchItem)
        {
            found = true;
            index = i;
            break;
        }
    }
    if (found)
    {
        cout << "Item found at index " << index << endl;
    }
    else
    {
        cout << "Item not found in the array" << endl;
    }
    return 0;
}
