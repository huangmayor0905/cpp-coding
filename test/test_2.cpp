#include <ios>
#include <iostream>
#include <limits>
#include <queue>
#define ll long long
using namespace std;

struct Tree {
    char data;
    struct Tree* left;
    struct Tree* right;
};

queue<char> words;
queue<Tree*> que;

Tree* input_data(Tree* root) {
    char word;
    que.push(root);
    while (!que.empty()) {
        word = getchar();
        if (word == ' ') {
            break;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        root = que.front();
        if (root == NULL) {
            root = new Tree;
            root->data = word;
            root->left = NULL;
            root->right = NULL;
        }
        cout << "hi";
        que.push(root->left);
        que.push(root->right);
        que.pop();
    }
    return root;
}

// «e§Ç
void Preorder(Tree* my_tree) {
    if (my_tree != NULL) {
        cout << my_tree->data << " ";
        Preorder(my_tree->left);
        Preorder(my_tree->right);
    }
}

// ¤¤§Ç
void Inorder(Tree* my_tree) {
    if (my_tree != NULL) {
        Inorder(my_tree->left);
        cout << my_tree->data << " ";
        Inorder(my_tree->right);
    }
}

// «á§Ç
void Postorder(Tree* my_tree) {
    if (my_tree != NULL) {
        Postorder(my_tree->left);
        Postorder(my_tree->right);
        cout << my_tree->data << " ";
    }
}

int main() {
    char word;
    Tree* bin_tree;
    bin_tree = input_data(bin_tree);

    cout << "Print tree:\n";
    Preorder(bin_tree);
    cout << "\n";
    Inorder(bin_tree);
    cout << "\n";
    Postorder(bin_tree);
    return 0;
}

// BUG: test to-do BUG
// TODO: test to-do TODO
// FIXME: test to-do FIXME
// HACK: test to-do HACK
