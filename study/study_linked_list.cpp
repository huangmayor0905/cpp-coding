#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    int count;
    cout << "please input list length: ";
    cin >> count;

    Node *head = new Node;

    cout << "please input the numbers: ";
    cin >> head->data;
    head->next = NULL;

    Node *curr = head;

    for (int i = 1; i < count; i++) {
        curr->next = new Node;

        curr = curr->next;
        cout << "please input the numbers: ";
        cin >> curr->data;

        curr->next = NULL;
    }

    curr = head;

    cout << "\n-----show the list-----\n";
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    cout << "\n-----------------------\n\n";
    cout << "Now, delete a number!\n";

    int delete_number;
    cout << "please input the number to delete: ";
    cin >> delete_number;

    if (head == NULL) {
        cout << "the list is empty!\n";
    }

    Node *temp = head, *follow;

    if (head->data == delete_number) {
        head = head->next;
        temp = NULL;
    }

    while ((temp != NULL) && (temp->data != delete_number)) {
        follow = temp;
        temp = temp->next;
    }

    // NOW temp find the delete number

    if (temp == NULL) {
        cout << "the number isn't in the list!\n";
    } else {
        cout << "the number is in the list!\n";
        follow->next = temp->next;
        delete temp;
    }

    cout << "\n-----show the list-----\n";
    curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << "\n-----------------------\n\n";

    return 0;
}
