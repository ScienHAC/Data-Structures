#include<iostream>
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

class CircularLinkedList {
private:
    Node* head;
    int size;
    
public:
    CircularLinkedList() {
        head = nullptr;
        size = 0;
    }

    // Insert at beginning
    void addBegin(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            newNode->next = newNode;
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            newNode->next = head;
            temp->next = newNode;
            head = newNode;
        }
        size++;
        cout << "Added " << data << " at the beginning." << endl;
    }

    // Insert at end
    void addLast(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            newNode->next = newNode;
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
        size++;
        cout << "Added " << data << " at the end." << endl;
    }

    // Insert at specific position
    void insertAtPosition(int position, int data) {
        if (position < 0 || position > size) {
            cout << "Invalid position! Valid range: 0 to " << size << endl;
            return;
        }

        if (position == 0) {
            addBegin(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* temp = head;
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
        cout << "Inserted " << data << " at position " << position << endl;
    }

    // Delete from beginning
    void deleteBegin() {
        if (!head) {
            cout << "List is empty! Nothing to delete." << endl;
            return;
        }

        if (head->next == head) {
            cout << "Deleted " << head->data << " from beginning." << endl;
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            Node* last = head;
            while (last->next != head) {
                last = last->next;
            }
            head = head->next;
            last->next = head;
            cout << "Deleted " << temp->data << " from beginning." << endl;
            delete temp;
        }
        size--;
    }

    // Delete from specific position
    void deleteAtPosition(int position) {
        if (!head) {
            cout << "List is empty! Nothing to delete." << endl;
            return;
        }

        if (position < 0 || position >= size) {
            cout << "Invalid position! Valid range: 0 to " << (size - 1) << endl;
            return;
        }

        if (position == 0) {
            deleteBegin();
            return;
        }

        Node* temp = head;
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }

        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        cout << "Deleted " << nodeToDelete->data << " from position " << position << endl;
        delete nodeToDelete;
        size--;
    }

    // Display the list
    void display() {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }

        cout << "List contents: ";
        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(back to head)" << endl;
        cout << "Size: " << size << endl;
    }

    // Search for an element
    void search(int data) {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        int position = 0;
        do {
            if (temp->data == data) {
                cout << "Element " << data << " found at position " << position << endl;
                return;
            }
            temp = temp->next;
            position++;
        } while (temp != head);

        cout << "Element " << data << " not found in the list." << endl;
    }

    // Get size of list
    int getSize() {
        return size;
    }

    // Destructor to free memory
    ~CircularLinkedList() {
        if (!head) return;

        Node* current = head;
        Node* nextNode;
        do {
            nextNode = current->next;
            delete current;
            current = nextNode;
        } while (current != head);
        
        head = nullptr;
    }
};

int main() {
    CircularLinkedList list;
    int choice;
    
    cout << "\n=== CIRCULAR LINKED LIST OPERATIONS ===" << endl;
    cout << "1. Insert at beginning" << endl;
    cout << "2. Insert at end" << endl;
    cout << "3. Insert at specific position" << endl;
    cout << "4. Delete from beginning" << endl;
    cout << "5. Delete from specific position" << endl;
    cout << "6. Display list" << endl;
    cout << "7. Search element" << endl;
    cout << "8. Get list size" << endl;
    cout << "0. Exit" << endl;
    
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                cout << "Enter data to add at beginning: ";
                int data;
                cin >> data;
                list.addBegin(data);
                break;
            }
            case 2: {
                cout << "Enter data to add at end: ";
                int data;
                cin >> data;
                list.addLast(data);
                break;
            }
            case 3: {
                cout << "Enter position and data: ";
                int position, data;
                cin >> position >> data;
                list.insertAtPosition(position, data);
                break;
            }
            case 4: {
                list.deleteBegin();
                break;
            }
            case 5: {
                cout << "Enter position to delete: ";
                int position;
                cin >> position;
                list.deleteAtPosition(position);
                break;
            }
            case 6: {
                list.display();
                break;
            }
            case 7: {
                cout << "Enter element to search: ";
                int data;
                cin >> data;
                list.search(data);
                break;
            }
            case 8: {
                cout << "List size: " << list.getSize() << endl;
                break;
            }
            case 0: {
                cout << "Exiting program..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice! Please try again." << endl;
                break;
            }
        }
    } while (choice != 0);
    
    return 0;
}
