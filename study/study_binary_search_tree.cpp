#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// 前序
void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// 中序
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// 後序
void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

// int hight(Node* node) {
//     if (node == NULL)
//         return 0;
//     else {
//         return
//     }
// }

// 新增節點
Node* add_node(Node* new_node, int n) {
    if (new_node == NULL) {
        new_node = new Node;
        new_node->data = n;
        new_node->left = NULL;
        new_node->right = NULL;
        return new_node;
    }
    return new_node;
}

// 新增二元搜尋樹（未平衡）
Node* input_data(Node* btree, int n) {
    if (btree == NULL) {
        btree = add_node(btree, n);
    }

    if (n < btree->data) {
        btree->left = input_data(btree->left, n);
    } else if (n > btree->data) {
        btree->right = input_data(btree->right, n);
    }

    return btree;
}

int main() {
    Node* binary_tree = NULL;
    int n;
    while (cin >> n) {
        if (n == -1) break;
        binary_tree = input_data(binary_tree, n);
    }
    cout << "\n--- preorder ---\n";
    preorder(binary_tree);
    cout << "\n\n--- inorder ---\n";
    inorder(binary_tree);
    cout << "\n\n--- postorder ---\n";
    postorder(binary_tree);
    cout << "\n";
    return 0;
}
