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
    {
        ROOT = nullptr; //initializing root to null
    }

    
    void search(int element, Node *&parent, Node *&currentNode) 
    {
        //This function searcher the currentNode of the specified Node as well as the current
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode!= nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
            currentNode = currentNode->rightchild;
        }
    }

    void insert()
    {
        //This function inserts a new node
        int x;
        cout << "Masukka nilai; ";
        cin >> x;
