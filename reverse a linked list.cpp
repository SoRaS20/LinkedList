#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    // Constructor to create a new node
    Node(int value) {
        this->data = value;
        next = nullptr;
    }
};

struct LinkedList {
    Node* head;
    Node* tail;

    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Optimized insertNode function with O(1) insertion time
    void insertNode(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {  // If the list is empty
            head = newNode;
            tail = newNode;     // Update tail to the new node
        } else {
            tail->next = newNode; // Append to the end of the list
            tail = newNode;       // Update tail to the new node
        }
    }

    // Function to reverse the linked list
    Node* reverseLinkedList() {
        Node* temp = head;
        Node* prev = nullptr;
        while (temp != nullptr) {
            Node* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    // Function to print the linked list
    void printList(Node* node) {
        Node* temp = node;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    LinkedList list;

    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);
    list.insertNode(5);

    list.printList(list.head);  // Print original list
    Node* newHead = list.reverseLinkedList();  // Reverse the list
    list.printList(newHead);  // Print reversed list

    return 0;
}
