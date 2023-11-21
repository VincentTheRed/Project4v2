
// BinarySearchTree.h
#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

struct Node {
    int data;
    Node* leftNext;
    Node* rightNext;
    Node(int val);
};

class BinarySearchTree {
public:
    BinarySearchTree();
    ~BinarySearchTree();
    void insert(int value);
    void displayPreOrder() const;
    void displayInOrder() const;
    void displayPostOrder() const;

private:
    Node* root;
    void deleteTree(Node* node);
    void insertNode(Node*& node, int value);
    void displayPreOrder(Node* node) const;
    void displayInOrder(Node* node) const;
    void displayPostOrder(Node* node) const;
};

#endif


#endif
