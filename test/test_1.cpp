#include <ios>
#include <iostream>
#include <limits>
#define ll long long
using namespace std;

struct Tree {
    char data;
    struct Tree* left;
    struct Tree* right;
};

queue<Tree*> que;

void input_data(Tree*& curr, char word) {
    queue<Tree*> que;
    if (curr != NULL) {
        que.push(curr);
    }

    while (!que.empty()) {
        Tree* temp_tree = que.front();
        if (temp_tree->left != NULL) {
            que.push(temp_tree->left);
        }
        if (temp_tree->right != NULL) {
            que.push(temp_tree->right);
        }
        que.pop();
    }
    cout << "end!\n";
    return;
}

// «e§Ç
void Preorder(Tree*& my_tree) {
    if (my_tree == NULL) return;
    cout << my_tree->data << " ";
    Preorder(my_tree->left);
    Preorder(my_tree->right);
}

// ¤¤§Ç
void Inorder(Tree*& my_tree) {
    if (my_tree == NULL) return;
    Inorder(my_tree->left);
    cout << my_tree->data << " ";
    Inorder(my_tree->right);
}

// «á§Ç
void Postorder(Tree*& my_tree) {
    if (my_tree == NULL) return;
    Postorder(my_tree->left);
    Postorder(my_tree->right);
    cout << my_tree->data << " ";
}

int main() {
    char word;
    Tree* bin_tree = new Tree;
    word = getchar();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    bin_tree->data = word;
    bin_tree->left = NULL;
    bin_tree->right = NULL;

    while (word = getchar()) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (word == ' ') break;
        input_data(bin_tree, word);
    }

    cout << "Print tree:\n";
    // printTree(bin_tree);
    return 0;
}

// BUG: test to-do BUG
// TODO: test to-do TODO
// FIXME: test to-do FIXME
// HACK: test to-do HACK
