#ifndef BINARY_TREE
#define BINARY_TREE
#include "..\Node\Node.h"

template <class T>
class BinaryTree{

private: // Data Members //
    Node<T> *root;

public: // Constructors //
    BinaryTree() {}
    BinaryTree(BinaryTree &c) { this->root = c.getRoot(); }
    BinaryTree(Node<T> &root) { this->root = &root; }
    BinaryTree(Node<T> *root) { this->root = root; }
    ~BinaryTree(){
        delete root;
        root = nullptr;
    }

public: // Accessors // Getters //
    Node<T> *getRoot() const;

public: // Mutators // Setters //
    void setRoot(Node<T> *);
    void addNode(Node<T> *);

public: // Public Methods //
    void printTree();

private: // Private Methods //
    int compareToRoot(const T &, const T &);
    void addNode(Node<T> *, Node<T> *);
    void printTree(Node<T> *);
   
};

#include "BinaryTree.cpp"
#endif