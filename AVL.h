//
//  AVL.h
//  trees
//
//  Created by Abdulaziz Alghamdi on 2017-01-22.
//  Copyright © 2017 app. All rights reserved.
//

#ifndef AVL_h
#define AVL_h

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <cstdio>
#include <sstream>
#include <algorithm>

using namespace std;



struct AVL_Node {
    int data;
    AVL_Node* lChild;
    AVL_Node* rChild;
};

class AVL_Tree {
    
public:
    
    
    AVL_Tree();
    ~AVL_Tree();
    int getHeight();
    int height(AVL_Node* p);
    int diff(AVL_Node*p);
    
    // rotation
    AVL_Node* LL(AVL_Node* p);
    AVL_Node* LR(AVL_Node* p);
    AVL_Node* RR(AVL_Node* p);
    AVL_Node* RL(AVL_Node* p);
    
    AVL_Node* balance(AVL_Node* p);
    
    AVL_Node* insert(int newData);
    
    void print(AVL_Node* p, int value);
    
    void inorder(AVL_Node* p);
    void preorder(AVL_Node* p);
    void postorder(AVL_Node* p);
    
    AVL_Node* getNode();
    void setNode(AVL_Node* p);
private:
    AVL_Node* insertHelper(AVL_Node* p, int newData);
    
    AVL_Node* root;
    
    
};


#endif /* AVL_h */
