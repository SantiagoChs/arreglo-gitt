#include <iostream>
#include <queue>
#include <iomanip>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

void printTreeHorizontal(TreeNode* root) {
    if (root == nullptr)
        return;

    std::queue<TreeNode*> nodesQueue;
    nodesQueue.push(root);

    while (!nodesQueue.empty()) {
        int levelSize = nodesQueue.size();
        for (int i = 0; i < levelSize; ++i) {
            TreeNode* currentNode = nodesQueue.front();
            nodesQueue.pop();

            if (currentNode != nullptr) {
                std::cout << std::setw(4) << currentNode->val;
                nodesQueue.push(currentNode->left);
                nodesQueue.push(currentNode->right);
            } else {
                std::cout << std::setw(4) << " ";
            }
        }
        std::cout << "\n";
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    std::cout << "Árbol binario:\n";
    printTreeHorizontal(root);

    // Liberar memoria
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
