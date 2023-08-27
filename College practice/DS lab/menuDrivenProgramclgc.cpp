/* Write a menu driven program to perform the following tasks on linear array 
1. creating a linear array (unsorted array)
2. traversing the elements of an array (print the sum of all array elements)
3. insertion at the beginning 
4. insert an element into array at given location 
5. insertion at end 
6. find the location of an element in a an array (location means index of array)(Linear search)
7. to sort elements of an array by using bubble sort 
8. find the location of an element in the array using binary search 
9. To delete given element from the array at given location
10. To delete element from beginning 
11. To delete element from last of an array 
12. Display the elements of array 
13. exit the program */
#include<iostream>
using namespace std;
const int MAX_SIZE = 100;
class linearArray{
    private :
    int size;
    int arr[MAX_SIZE];
    int Max_Size;
    public :
    linearArray(){
        size = 0;
    }
    //1. creating a linear array (unsorted array)
    void creatingArray(){
        cout<<"Enter the size of the array = ";
        cin>>size;

        cout<<"Enter the elements in array = "<<endl;
        for(int i = 0 ; i<size ; i++){
            cin>>arr[i];
        }
        cout<<"__Array entered__"<<endl;
    }
    //2. traversing the elements of an array (print the sum of all array elements)
    void transversingArray(){
        int sum = 0;
        cout<<"Traversed elements are = "<<endl;
        for(int i = 0 ; i<size ; i++){
            cout<<arr[i]<<" "<<endl;
            sum += arr[i];
        }
        cout<<"Sum of entered elements = "<<sum<<endl;
    }
    //3. insertion at the beginning 
    void insertionAtBeginning(int userEnteredElement){
        if(size>=MAX_SIZE) {
            cout<<"Array is full. Insertion failed"<<endl;
            return;
        }
        for(int i=size; i>0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = userEnteredElement;
        size++;
        cout<<"Element inserted at the beginning successfully"<<endl;
    }
    //4. insert an element into array at given location 
    void insertionAtGivenLocation(int userEnteredElement , int location){
         if(size>=MAX_SIZE || location < 0 || location >= size){
            cout<<"Array is full. Insertion failed"<<endl;
            return;
        }
        for(int i=size ; i>location ;i--){
            arr[i] = arr[i-1];
        }
        arr[location]= userEnteredElement;
        size++;
        cout<<"Entered element '"<<userEnteredElement<<"' at location '"<<location<<"' successfully"<<endl;
    }
    //5. insertion at end 
    void insertionAtEnd(int userEnteredElement){
        if(size>=Max_Size){
            cout<<"Array is full. Insertion failed"<<endl;
            return;
        }
    arr[size]=userEnteredElement;
    size++;
    cout<<"'"<<userEnteredElement<<"' is inserted at end"<<endl;
    }
    //6. find the location of an element in a an array (location means index of array)(Linear search)
    int linearSearch(int userEnteredElement){
      for (int i = 0; i < size; i++) {
            if(arr[i] == userEnteredElement) {
                return i; 
            }
        }
        return -1; 
    }
    //7. to sort elements of an array by using bubble sort 
    void bubbleSort(){
        for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                }
            }
        }
        cout << "Array sorted using Bubble Sort." << endl;
    }
    //8. find the location of an element in the array using binary search 
    int binarySearch(int userEnteredElement){
    int left = 0;
        int right = size - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == userEnteredElement) {
                return mid; 
            }
            if (arr[mid] < userEnteredElement) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return -1; 
    }
    //9. To delete given element from the array at given location
    void deleteAtGivenLocation(int location){
     if (location < 0 || location >= size) {
            cout << "Invalid location. Deletion failed." << endl;
            return;
        }
        for (int i = location; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element at location " << location << " deleted successfully." << endl;
    }
    //10. To delete element from beginning 
    void deleteAtBeginning(){
        if (size == 0) {
        cout<<"Array is empty. Deletion failed."<<endl;
        return;
        }
        for(int i = 0;i<size - 1;i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout<<"Element from the beginning deleted successfully."<<endl;
    }
    //11. To delete element from last of an array 
    void deleteAtLast(){
        if (size == 0) {
            cout<<"Array is empty. Deletion failed."<<endl;
            return;
        }
        size--;
        cout<<"Element from the end deleted successfully."<<endl;
    }
    //12. Display the elements of array
    void displayArray(){
        cout<<"The elements of the Array are = ";
        for(int i=0 ; i<size ;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

};
int main(){
    linearArray a1;
    int selection,userEnteredElement,location;
    do{
    cout<<"\n____Enter choice from Menu____ "<<endl;
    cout<<"1. - Create Array\n2. - Traversing Array\n3. - Insertion at beggning\n4. - Insertion at given location\n5. - Insert at end";
    cout<<"\n6. - Linear Search\n7. - Bubble Sort the elements \n8. - Binary Search \n9. - Delete elements from given location\n10. - Delete element from beginning";
    cout<<"\n11. - Delete elements from last\n12. - Display the array\n13. - Exit";
    cout<<"\nUser Input = ";
    cin>>selection;
    switch(selection){
        case 1: 
        a1.creatingArray();
        break;

        case 2:
        a1.transversingArray();
        break;

        case 3:
        cout<<"Enter the element to insert at beginning = ";
        cin>>userEnteredElement;
        a1.insertionAtBeginning(userEnteredElement);
        break;

        case 4:
        cout<<"Enter the element to insert = ";
        cin>>userEnteredElement;
        cout<<"Enter the location = ";
        cin>>location;
        a1.insertionAtGivenLocation(userEnteredElement,location);
        break;

        case 5:
        cout<<"Enter the element to insert at end = ";
        cin>>userEnteredElement;
        a1.insertionAtEnd(userEnteredElement);
        break;

        case 6:
        cout<<"Enter the element to search in array(Linear Search) = ";
        cin>>userEnteredElement;
        a1.linearSearch(userEnteredElement);
         if (location != -1) {
                cout<<"Element found at index "<<location<<endl;
            }
            else {
                cout<<"Element not found in the array."<<endl;
            }
        break;

        case 7:
        a1.bubbleSort();
        break;

        case 8:
        cout<<"Enter the element to search in array(Binary Search) = ";
        cin>>userEnteredElement;
        a1.binarySearch(userEnteredElement);
        if(location != -1) {
                cout<<"Element found at index "<<location<<endl;
            }
            else {
                cout<<"Element not found in the array."<<endl;
            }
        break;

        case 9:
        cout<<"Enter the location at which you want to delete the element = ";
        cin>>location;
        a1.deleteAtGivenLocation(location);
        break;

        case 10:
        a1.deleteAtBeginning();
        break;

        case 11:
        a1.deleteAtLast();
        break;

        case 12:
        a1.displayArray();
        break;

        case 13:
        cout<<"Program exit successful"<<endl;
        break;

        default:
        cout<<"INVALID INPUT"<<endl;
    }
}while(selection != 13);
}