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

// 定義二元樹的層序輸入函式
TreeNode *input_level_order() {
    // 宣告一個整數並輸入它
    char val = getchar();
    // cin >> val;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // 如果輸入的是空白，則代表遇到了空節點
    if (val == ' ') {
        return nullptr;
    }

    // 建立一個新節點
    TreeNode *node = new TreeNode(val);

    // 遞迴輸入左子樹和右子樹
    node->left = input_level_order();
    node->right = input_level_order();

    return node;
}

// 前序
void Preorder(TreeNode *my_tree) {
    if (my_tree != NULL) {
        cout << my_tree->val << " ";
        Preorder(my_tree->left);
        Preorder(my_tree->right);
    }
}

// 中序
void Inorder(TreeNode *my_tree) {
    if (my_tree != NULL) {
        Inorder(my_tree->left);
        cout << my_tree->val << " ";
        Inorder(my_tree->right);
    }
}

// 後序
void Postorder(TreeNode *my_tree) {
    if (my_tree != NULL) {
        Postorder(my_tree->left);
        Postorder(my_tree->right);
        cout << my_tree->val << " ";
    }
}

int main() {
    // 輸入二元樹
    TreeNode *root = input_level_order();

    // 輸出二元樹的層序遍歷結果
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

    // 前序
    Preorder(root);
    cout << "\n";
    // 中序
    Inorder(root);
    cout << "\n";
    // 後序
    Postorder(root);
    cout << "\n";

    return 0;
}
