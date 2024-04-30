#include <ios>
#include <iostream>
#include <limits>
#include <queue>
using namespace std;

struct TreeNode {
    char val;
    TreeNode *left, *right;
    TreeNode(char x) : val(x), left(nullptr), right(nullptr) {}
};

// �w�q�G���𪺼h�ǿ�J�禡
TreeNode *input_level_order() {
    // �ŧi�@�Ӿ�ƨÿ�J��
    char val = getchar();
    // cin >> val;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // �p�G��J���O�ťաA�h�N��J��F�Ÿ`�I
    if (val == ' ') {
        return nullptr;
    }

    // �إߤ@�ӷs�`�I
    TreeNode *node = new TreeNode(val);

    // ���j��J���l��M�k�l��
    node->left = input_level_order();
    node->right = input_level_order();

    return node;
}

// �e��
void Preorder(TreeNode *my_tree) {
    if (my_tree != NULL) {
        cout << my_tree->val << " ";
        Preorder(my_tree->left);
        Preorder(my_tree->right);
    }
}

// ����
void Inorder(TreeNode *my_tree) {
    if (my_tree != NULL) {
        Inorder(my_tree->left);
        cout << my_tree->val << " ";
        Inorder(my_tree->right);
    }
}

// ���
void Postorder(TreeNode *my_tree) {
    if (my_tree != NULL) {
        Postorder(my_tree->left);
        Postorder(my_tree->right);
        cout << my_tree->val << " ";
    }
}

int main() {
    // ��J�G����
    TreeNode *root = input_level_order();

    // ��X�G���𪺼h�ǹM�����G
    cout << "Level order traversal: ";
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode *node = q.front();
        q.pop();
        if (node) {
            cout << node->val << " ";
            q.push(node->left);
            q.push(node->right);
        }
    }
    cout << endl;

    // �e��
    Preorder(root);
    cout << "\n";
    // ����
    Inorder(root);
    cout << "\n";
    // ���
    Postorder(root);
    cout << "\n";

    return 0;
}
