//
//  binSearchTree.cpp
//  trees
//
//  Created by Abdulaziz Alghamdi on 2017-01-22.
//  Copyright © 2017 app. All rights reserved.
//

#include "binSearchTree.h"



BinS_Tree::BinS_Tree() {
    root = NULL;
}

bool BinS_Tree::isEmpty() {
    return root == NULL;
}

bool BinS_Tree::isFull() {
    BinNode* location;
    try
    {
        location = new BinNode;
        delete location;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
}

BinNode* BinS_Tree::createLeaf(int newKey) {
    
    BinNode* n = new BinNode;
    
    n->data = newKey;
    
    n->lChild = NULL;
    n->rChild = NULL;
    
    return n;
}

//********************&&&&&&&&&&&********************//

/////////////////// START Initilize tree ////////////////
void BinS_Tree::initilize(int x) {
    
    initilizeHelper(x, root);
    
}

void BinS_Tree::initilizeHelper(int newVal, BinNode* ptr) {
    
    if (root == NULL) // tre empty
    {
        root = createLeaf(newVal);
    }
    else if (newVal < ptr->data) // there is something pointed to
    {
        if (ptr->lChild != NULL)
        {
            initilizeHelper(newVal, ptr->lChild); // start again
        }
        else // left pointer not pointed to nothing so place it there
        {
            ptr->lChild = createLeaf(newVal);
        }
    }
    else if (newVal > ptr->data) // there is something pointed to
    {
        if (ptr->rChild != NULL)
        {
            initilizeHelper(newVal, ptr->rChild); // start again
        }
        else // right pointer not pointed to nothing so place it there
        {
            ptr->rChild = createLeaf(newVal);
        }
    }
}
////////////////// END Initilize tree functions ///////////////

//********************&&&&&&&&&&&********************//

////////////////// START print tree functions ///////////////
void BinS_Tree::print() {
    if (isEmpty()) {
        cout << "The tree is Empty \n";
    }
    else
        printHelper(root);
}

void BinS_Tree::printHelper(BinNode* ptr)
// Prints info member of items in tree in sorted order.
{
    if (ptr != NULL)
    {
        printHelper(ptr->lChild);   // Print left subtree.
        cout << ptr->data << " ";
        printHelper(ptr->rChild);  // Print right subtree.
    }
}
////////////////// END print tree function ///////////////

//********************&&&&&&&&&&&********************//

////////////////// START clear tree function ///////////////
void BinS_Tree::clear()
{
    clearHelper(root);
    root = NULL;
}

void BinS_Tree::clearHelper(BinNode*& ptr)
// Post: tree is empty; nodes have been deallocated.
{
    if (ptr != NULL)
    {
        clearHelper(ptr->lChild);
        clearHelper(ptr->rChild);
        delete ptr;
    }
}
////////////////// END clear tree function///////////////

int BinS_Tree::maxDepth() {
    return maxDepthHelper(root);
}

int BinS_Tree::maxDepthHelper(BinNode*& ptr)
{
    if(ptr == NULL)
        return 0;
    
    else
    {
        int lchild = maxDepthHelper(ptr->lChild);
        int rchild = maxDepthHelper(ptr->rChild);
        
        if(lchild <= rchild)
            return rchild+1;
        
        else
            return lchild+1;
        
    }
}








