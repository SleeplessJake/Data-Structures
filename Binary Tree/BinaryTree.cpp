#include "BinaryTree.h"
#include "iostream"

enum comparrsion {
    GREATER_THAN_ROOT = 1,
    LESS_THAN_OR_EQUAL_ROOT = 0
};

// Accessors // Getters //
template <typename T>
Node<T> *BinaryTree<T>::getRoot() const { return this->root; }

// Mutators // Setters //
template <typename T>
void BinaryTree<T>::setRoot(Node<T> *root) { this->root = root; }

template <typename T>
void BinaryTree<T>::addNode(Node<T> *node) {

    bool isGreaterValue = compareToRoot(node->getData(), this->root->getData());

    if (isGreaterValue && this->root->getRight() == nullptr) {
        this->root->setRight(node);
    } else if (isGreaterValue) {
        addNode(this->root->getRight(), node);
    } else if (this->root->getLeft() == nullptr) {
        this->root->setLeft(node);
    } else {
        addNode(this->root->getLeft(), node);
    }
}

// Private Mutators // Setters //
template <typename T>
void BinaryTree<T>::addNode(Node<T> *root, Node<T> *node) {

    bool isGreaterValue = compareToRoot(node->getData(), root->getData());

    if (isGreaterValue && root->getRight() == nullptr) {
        root->setRight(node);
    } else if (isGreaterValue) {
        addNode(root->getRight(), node);
    } else if (root->getLeft() == nullptr) {
        root->setLeft(node);
    } else {
        addNode(root->getLeft(), node);
    }
}

// Public Methods //
template <typename T>
void BinaryTree<T>::printTree() {

    std::cout << this->root->getData() << "\n";

    if(this->root->getLeft() != nullptr){
         printTree(this->root->getLeft());
    }
    if(this->root->getRight() != nullptr){
        printTree(this->root->getRight());
    }
   
}

// Private Methods //
template <typename T>
int BinaryTree<T>::compareToRoot(const T &value, const T &rootValue) {

    if (value > rootValue) {
        return GREATER_THAN_ROOT;
    } else {
        return LESS_THAN_OR_EQUAL_ROOT;
    }
}

template <typename T>
void BinaryTree<T>::printTree(Node<T> *currentNode) {

    std::cout << currentNode->getData() << "\n";

    if(currentNode->getLeft() != nullptr){
        printTree(currentNode->getLeft());
    }
    if(currentNode->getRight() != nullptr){
        printTree(currentNode->getRight());
    }
   
}
