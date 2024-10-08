#include <iostream>
using namespace std;

// Node structure for the singly linked list
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Singly Linked List class
class SinglyLinkedList {
public:
    Node* head;

    // Constructor to initialize the list
    SinglyLinkedList() {
        head = NULL;
    }

    // Function to insert node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "Node inserted at the beginning.\n";
    }

    // Function to insert node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Node inserted at the end.\n";
    }

    // Function to insert node at a specific position
    void insertAtPosition(int value, int pos) {
        if (pos == 1) {
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position is out of range.\n";
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
            cout << "Node inserted at position " << pos << ".\n";
        }
    }

    // Function to delete the first node
    void deleteFirst() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "First node deleted.\n";
    }

    // Function to delete the last node
    void deleteLast() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            while (temp->next->next != NULL) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
        }
        cout << "Last node deleted.\n";
    }

    // Function to delete a node at a specific position
    void deleteAtPosition(int pos) {
        if (pos == 1) {
            deleteFirst();
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL) {
            cout << "Position is out of range.\n";
        } else {
            Node* deleteNode = temp->next;
            temp->next = deleteNode->next;
            delete deleteNode;
            cout << "Node deleted at position " << pos << ".\n";
        }
    }

    // Function to display the list
    void displayList() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Function to reverse the linked list
    void reverseList() {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
        cout << "List reversed.\n";
    }

    // Function to concatenate another list
    void concatenate(SinglyLinkedList& list2) {
        if (head == NULL) {
            head = list2.head;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = list2.head;
        }
        list2.head = NULL;  // Clear the second list after concatenation
        cout << "Lists concatenated.\n";
    }
};

int main() {
    SinglyLinkedList list1, list2;
    int choice, value, pos;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete First Node\n";
        cout << "5. Delete Last Node\n";
        cout << "6. Delete Node at Position\n";
        cout << "7. Display List\n";
        cout << "8. Reverse List\n";
        cout << "9. Concatenate Another List\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list1.insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            list1.insertAtEnd(value);
            break;
        case 3:
            cout << "Enter value: ";
            cin >> value;
            cout << "Enter position: ";
            cin >> pos;
            list1.insertAtPosition(value, pos);
            break;
        case 4:
            list1.deleteFirst();
            break;
        case 5:
            list1.deleteLast();
            break;
        case 6:
            cout << "Enter position: ";
            cin >> pos;
            list1.deleteAtPosition(pos);
            break;
        case 7:
            list1.displayList();
            break;
        case 8:
            list1.reverseList();
            break;
        case 9:
            int n;
            cout << "Enter number of nodes for second list: ";
            cin >> n;
            for (int i = 0; i < n; i++) {
                cout << "Enter value for node " << (i + 1) << ": ";
                cin >> value;
                list2.insertAtEnd(value);
            }
            list1.concatenate(list2);
            break;
        case 10:
            exit(0);
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

