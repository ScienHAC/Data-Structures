#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Head pointer
Node* head = nullptr;

// Insert at the beginning
void insertAtBeginning(int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

// Insert at the end
void insertAtEnd(int value) {
    Node* newNode = new Node{value, nullptr};

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

// Insert at a specific position (1-based index)
void insertAtPosition(int value, int position) {
    if (position < 1) {
        cout << "Position must be >= 1\n";
        return;
    }

    if (position == 1) {
        insertAtBeginning(value);
        return;
    }

    Node* temp = head;
    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of range\n";
        return;
    }

    Node* newNode = new Node{value, temp->next};
    temp->next = newNode;
}

// Delete from the beginning
void deleteFromBeginning() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Delete from the end
void deleteFromEnd() {
    if (head == nullptr) {
        cout << "List is empty\n";
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

// Delete from a specific position
void deleteFromPosition(int position) {
    if (position < 1) {
        cout << "Position must be >= 1\n";
        return;
    }

    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (position == 1) {
        deleteFromBeginning();
        return;
    }

    Node* temp = head;
    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of range\n";
        return;
    }

    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

// Display the list
void display() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Search for a value
void search(int value) {
    Node* temp = head;
    int position = 1;

    while (temp != nullptr) {
        if (temp->data == value) {
            cout << "Value " << value << " found at position " << position << "\n";
            return;
        }
        temp = temp->next;
        position++;
    }

    cout << "Value " << value << " not found in the list\n";
}

// Free all nodes
void freeList() {
    while (head != nullptr) {
        deleteFromBeginning();
    }
}

// Main menu
int main() {
    int choice, value, position;

    do {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete from Beginning\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete from Position\n";
        cout << "7. Display\n";
        cout << "8. Search\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertAtBeginning(value);
                break;

            case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                insertAtEnd(value);
                break;

            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position: ";
                cin >> position;
                insertAtPosition(value, position);
                break;

            case 4:
                deleteFromBeginning();
                break;

            case 5:
                deleteFromEnd();
                break;

            case 6:
                cout << "Enter position to delete: ";
                cin >> position;
                deleteFromPosition(position);
                break;

            case 7:
                display();
                break;

            case 8:
                cout << "Enter value to search: ";
                cin >> value;
                search(value);
                break;

            case 0:
                cout << "Exiting...\n";
                freeList();
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}