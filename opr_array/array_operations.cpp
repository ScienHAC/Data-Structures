#include<iostream>
using namespace std;

int arr[100];
int n = 0;

void insert() {
    int value, pos;
    cout << "Enter value: ";
    cin >> value;
    cout << "Enter position (0 to " << n << "): ";
    cin >> pos;
    
    if(pos < 0 || pos > n) {
        cout << "Invalid position\n";
        return;
    }
    
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;
    cout << "Element inserted\n";
}

void delete_element() {
    int pos;
    if(n == 0) {
        cout << "Array is empty\n";
        return;
    }
    
    cout << "Enter position to delete (0 to " << n-1 << "): ";
    cin >> pos;
    
    if(pos < 0 || pos >= n) {
        cout << "Invalid position\n";
        return;
    }
    
    cout << "Deleted element: " << arr[pos] << "\n";
    
    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    cout << "Element deleted\n";
}

void display() {
    if(n == 0) {
        cout << "Array is empty\n";
        return;
    }
    
    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void search() {
    int value;
    cout << "Enter value to search: ";
    cin >> value;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == value) {
            cout << "Found at position " << i << "\n";
            return;
        }
    }
    cout << "Not found\n";
}

void update() {
    int pos, value;
    if(n == 0) {
        cout << "Array is empty\n";
        return;
    }
    
    cout << "Enter position to update (0 to " << n-1 << "): ";
    cin >> pos;
    
    if(pos < 0 || pos >= n) {
        cout << "Invalid position\n";
        return;
    }
    
    cout << "Enter new value: ";
    cin >> value;
    
    cout << "Old value: " << arr[pos] << "\n";
    arr[pos] = value;
    cout << "Updated successfully\n";
}

void sort_array() {
    if(n <= 1) {
        cout << "Array has less than 2 elements\n";
        return;
    }
    
    // Bubble sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Array sorted\n";
}

int main() {
    int choice;
    
    while(1) {
        cout << "\n1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Search\n";
        cout << "5. Update\n";
        cout << "6. Sort\n";
        cout << "7. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        
        if(choice == 1) {
            insert();
        }
        else if(choice == 2) {
            delete_element();
        }
        else if(choice == 3) {
            display();
        }
        else if(choice == 4) {
            search();
        }
        else if(choice == 5) {
            update();
        }
        else if(choice == 6) {
            sort_array();
        }
        else if(choice == 7) {
            cout << "Bye!\n";
            break;
        }
        else {
            cout << "Wrong choice\n";
        }
    }
    
    return 0;
}