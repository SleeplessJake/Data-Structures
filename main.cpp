#include "Node/Node.h"
#include "Binary Tree/BinaryTree.h"
#include "Linked List/LinkedList.h"
#include <string>
#include <vector>

// Jacob Biles

int main() {

Node test(0);
Node other(0);
Node o(0);
Node t(0);

o.setRight(t);
other.setRight(o);
test.setRight(other);

o.setData(1);
other.setData(1);
test.setData(1);

Node funny = test;

}