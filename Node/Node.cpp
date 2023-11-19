#include "Node.h"

// Accessors // Getters //
template <typename T>
T Node<T>::getData() const { return this->data; }

template <typename T>
Node<T> *Node<T>::getLeft() const { return this->left; }

template <typename T>
Node<T> *Node<T>::getRight() const { return this->right; }

// Mutators // Setters //
template <typename T>
void Node<T>::setData(const T data) { this->data = data; }

template <typename T>
void Node<T>::setLeft(Node<T> &node) { this->left = new Node(node); }

template <typename T>
void Node<T>::setLeft(Node<T> *node) { this->left = new Node(*node); }

template <typename T>
void Node<T>::setLeft(T data) { this->left = new Node(data); }

template <typename T>
void Node<T>::setRight(Node<T> &node) { this->right = new Node(node); }

template <typename T>
void Node<T>::setRight(Node<T> *node) { this->right = new Node(*node); }

template <typename T>
void Node<T>::setRight(T data) { this->right = new Node(data); }
