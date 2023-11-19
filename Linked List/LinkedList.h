#ifndef LINKED_LIST
#define LINKED_LIST
#include "../Node/Node.h"

template <class T>
class LinkedList {
private: // Data Members
    Node<T> *root;

public: // Constructors //
    // Default Constructor //
    LinkedList() { this->root = nullptr; }

    // Paramaitized Constructors //
    LinkedList(T data) { this->root = new Node<T>(data); }

    // Copy Constructors //
    LinkedList(Node<T> &c) { this->root = c.getData(); }

    LinkedList(LinkedList<T> &c) { this->root = new Node<T>(c.getRoot()); }

    // Deconstructor //
    ~LinkedList() {

        if (root != nullptr) {
            delete root;
            this->root = nullptr;
        }
    }

public: // Getters // Accessors //
    Node<T> *getRoot() const;

public: // Setters // Mutators //
    void setRoot(Node<T> &);
    void setRoot(Node<T> *);
    void setRoot(T);

public: // Public Methods //
    void addNode(Node<T> &);
    void addNode(Node<T> *);
    void addNode(T);
    void printList();

private: // Private Methods //
    void addNode(Node<T> *, Node<T> &);
    void addNode(Node<T> *, Node<T> *);
    void addNode(Node<T> *, T);
    void printList(Node<T> *);
};

#include "LinkedList.cpp"
#endif