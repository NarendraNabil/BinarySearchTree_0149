#include <iostream>
using namespace std;


class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    //constructor for the node class
    Node()
    {
        leftchild = nullptr; // initialize left child to null;
        rightchild = nullptr; // initialize right child to null;
    }
};

//class for the binary tree
class BinaryTree
{
public:
    Node *ROOT; //pointer to the root

    BinaryTree()//constructor for the binary tree
