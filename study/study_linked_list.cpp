#include <iostream>
using namespace std;

struct Node {
        int data;
        Node *next;
};

class LinkedList {
    private:
    public:
        Node *head, *tail;
        // Constructor to initialize the linked list
        LinkedList() {
            head = NULL;
            tail = NULL;
        }
        // Destructor to delete the linked list
        void addNode(int data) {
            Node *temp = new Node;
            temp->data = data;
            temp->next = NULL;
            if (head == NULL) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = tail->next;
            }
        }
        // Display the linked list
        void display() {
            Node *temp = head;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
};

int main() {
    LinkedList list;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.display();

    cout << list.tail->data << endl;
    return 0;
}
