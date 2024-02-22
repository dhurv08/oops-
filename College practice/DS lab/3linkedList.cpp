#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the beginning of the list
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert a node at a given position in the list
    void insertAtLocation(int data, int position) {
        Node* newNode = new Node(data);
        if (position == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Invalid position!" << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Function to insert a node at the end of the list
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to delete a node from the beginning of the list
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty. Unable to delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Function to delete a node at a given position in the list
    void deleteAtLocation(int position) {
        if (head == nullptr) {
            cout << "List is empty. Unable to delete." << endl;
            return;
        }
        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr) {
            cout << "Invalid position! Unable to delete." << endl;
            return;
        }
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }

    // Function to delete a node from the end of the list
    void deleteFromEnd() {
        if (head == nullptr) {
            cout << "List is empty. Unable to delete." << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    // Function to traverse and print the linked list
    void traverse() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Function to create a linked list based on user input
LinkedList createList() {
    LinkedList linkedList;
    int size, data;
    cout << "Enter the number of nodes in the linked list: ";
    cin >> size;

    for (int i = 0; i < size; ++i) {
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> data;
        linkedList.insertAtEnd(data);
    }

    return linkedList;
}

int main() {
    LinkedList linkedList = createList();
    int choice, data, position;

    do {
        cout << "\n____Enter choice from Menu____ " << endl;
        cout << "1. Insert at the beginning" << endl;
        cout << "2. Insert at a given location" << endl;
        cout << "3. Insert at the end" << endl;
        cout << "4. Delete from the beginning" << endl;
        cout << "5. Delete at a given location" << endl;
        cout << "6. Delete from the end" << endl;
        cout << "7. Traversing linked list" << endl;
        cout << "8. Exit" << endl;
        cout << "\nUser Input = ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                linkedList.insertAtBeginning(data);
                break;
            case 2:
                cout << "Enter data: ";
                cin >> data;
                cout << "Enter position: ";
                cin >> position;
                linkedList.insertAtLocation(data, position);
                break;
            case 3:
                cout << "Enter data: ";
                cin >> data;
                linkedList.insertAtEnd(data);
                break;
            case 4:
                linkedList.deleteFromBeginning();
                cout << "Node deleted from the beginning." << endl;
                break;
            case 5:
                cout << "Enter position to delete: ";
                cin >> position;
                linkedList.deleteAtLocation(position);
                break;
            case 6:
                linkedList.deleteFromEnd();
                cout << "Node deleted from the end." << endl;
                break;
            case 7:
                cout << "Linked List: ";
                linkedList.traverse();
                break;
            case 8:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}