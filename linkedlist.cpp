#include <iostream>

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
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }


    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    
    void remove(int value) {
        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            std::cout << "Node with value " << value << " not found.\n";
            return;
        }

        if (prev == nullptr) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }

        delete temp;
    }

    void sort() {
        if (!head || !head->next) return;

        Node* current = head;
        Node* index = nullptr;
        int temp;

        while (current != nullptr) {
            index = current->next;

            while (index != nullptr) {
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }


    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;

    list.insert(5);
    list.insert(3);
    list.insert(8);
    list.insert(1);
    list.insert(9);

    std::cout << "Original list: ";
    list.display();

    list.sort();

    std::cout << "Sorted list: ";
    list.display();

    list.remove(3);

    std::cout << "List with deleting  value 3: ";
    list.display();

    list.reverse();

    std::cout << "Revers list: ";
    list.display();

    return 0;
}
