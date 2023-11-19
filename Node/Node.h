#ifndef NODE
#define NODE

template <class T>
class Node {
private:
    T data;
    Node *left;
    Node *right;

public: // Constructors //
    Node() {
        this->left = nullptr;
        this->right = nullptr;
    }
    Node(T data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
    Node(Node<T> *c) {
        this->data = c->data;
        if (c->left != nullptr) {
            this->left = new Node<T>(c->left);
        } else {
            this->left = nullptr;
        }
        if (c->right != nullptr) {
            this->right = new Node<T>(c->right);
        } else {
            this->right = nullptr;
        }
    }
    Node(Node<T> &c) {
        this->data = c.data;

        if (c.left != nullptr) {
            this->left = new Node<T>(c.left);
        } else {
            this->left = nullptr;
        }
        if (c.right != nullptr) {
            this->right = new Node<T>(c.right);
        } else {
            this->right = nullptr;
        }
    }

    // Deconstructor //
    ~Node() {

        if (this->right != nullptr) {
            Node *ptr = this->right;
            this->right = nullptr;
            delete ptr;
        }
        if (this->left != nullptr) {
            Node *ptr = this->right;
            this->right = nullptr;
            delete ptr;
        }
    }

public: // Acessosors / Getters
    T getData() const;
    Node *getLeft() const;
    Node *getRight() const;

public: // Mutators / Setters
    void setData(T);
    void setLeft(Node<T> &);
    void setLeft(Node<T> *);
    void setLeft(T);
    void setRight(Node<T> &);
    void setRight(Node<T> *);
    void setRight(T);
};

#include "Node.cpp"
#endif