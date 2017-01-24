//
//  binTree.h
//  trees
//
//  Created by Abdulaziz Alghamdi on 2017-01-22.
//  Copyright © 2017 app. All rights reserved.
//

#ifndef binTree_h
#define binTree_h


#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

struct node {
    int data;
    node* lChild;
    node* rChild;
};


class binTree {
    
public:
    
    binTree();
    
    void insert(int newData);
    void print();
    
    int maxDepth();
    
private:
    int size;
    int pos;
    node* tree;
    
};



#endif /* binTree_h */
