//
//  binSearchTree.h
//  trees
//
//  Created by Abdulaziz Alghamdi on 2017-01-22.
//  Copyright © 2017 app. All rights reserved.
//

#ifndef binSearchTree_h
#define binSearchTree_h


#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct BinNode {
    int data; //data in the node
    BinNode* lChild; // left child
    BinNode* rChild; // right child
};

class BinS_Tree {
    
public:
    BinS_Tree();
    
    bool isFull();
    bool isEmpty();
    
    BinNode* createLeaf(int newKey);
    
    void initilize(int count) ;
    
    void print();
    void clear();
    
    int maxDepth();
    
    //int height(BinNode* T);
    
private:
    BinNode* root;
    int maxDepthHelper(BinNode*& ptr);
    void initilizeHelper(int newVal, BinNode* ptr);
    void printHelper(BinNode* tree);
    void clearHelper(BinNode*& ptr);
    
};


#endif /* binSearchTree_h */
