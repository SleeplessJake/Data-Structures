#include "LinkedList.h"
#include "iostream"

// Getters // Accessors //
template <typename T>
Node<T> *LinkedList<T>::getRoot() const { return this->root; }

// Setters // Mutators //
template <typename T>
void LinkedList<T>::setRoot(T data) { this->root = new Node<T>(data); }

template <typename T>
void LinkedList<T>::setRoot(Node<T> *node) { this->root = new Node<T>(node); }

template <typename T>
void LinkedList<T>::setRoot(Node<T> &node) { this->root = new Node<T>(node); }

// Public Methods //
template <typename T>
void LinkedList<T>::addNode(Node<T> &node) {

    if (root->getRight() == nullptr) {
        root->setRight(node);
    } else {
        addNode(root->getRight(), node);
    }
}

template <typename T>
void LinkedList<T>::addNode(Node<T> *node) {

    if (root->getRight() == nullptr) {
        root->setRight(node);
    } else {
        addNode(root->getRight(), node);
    }
}

template <typename T>
void LinkedList<T>::addNode(T data) {

    if (root->getRight() == nullptr) {
        root->setRight(data);
    } else {
        addNode(root->getRight(), data);
    }
}

template <typename T>
void LinkedList<T>::printList() {

    std::cout << this->getData() << "\n";

    if (this->getRight() != nullptr) {
        printList(this->getRight());
    }
}

// Private Methods //
template <typename T>
void LinkedList<T>::addNode(Node<T> *root, Node<T> &node) {

    if (root->getRight() == nullptr) {
        root->setRight(node);
    } else {
        addNode(root->getRight(), node);
    }
}

template <typename T>
void LinkedList<T>::addNode(Node<T> *root, Node<T> *node) {

    if (root->getRight() == nullptr) {
        root->setRight(node);
    } else {
        addNode(root->getRight(), node);
    }
}

template <typename T>
void LinkedList<T>::addNode(Node<T> *root, T data) {

    if (root->getRight() == nullptr) {
        root->setRight(data);
    } else {
        addNode(root->getRight(), data);
    }
}

template <typename T>
void LinkedList<T>::printList(Node<T> *node) {

    std::cout << node->getData() << "\n";

    if (node->getRight() != nullptr) {
        printList(node->getRight());
    }
}