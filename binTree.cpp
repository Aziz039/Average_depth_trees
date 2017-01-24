//
//  binTree.cpp
//  trees
//
//  Created by Abdulaziz Alghamdi on 2017-01-22.
//  Copyright © 2017 app. All rights reserved.
//

#include "binTree.h"


binTree::binTree() {
    
    tree = new node[size];
    pos = 1;
    size = 0;
}


void binTree::insert(int newData) {
    node temp;
    temp.data = newData;
    temp.lChild = &tree[pos * 2];
    temp.rChild = &tree[(pos * 2) + 1];
    tree[pos] = temp;
    pos++;
    size++;
}

void binTree::print() {
    cout << "Tree: { ";
    for (int i = 1; i < size; i++) {
        cout << tree[i].data << ", ";
    }
    cout << tree[size].data << " }" << '\n';
    
}

int binTree::maxDepth() {
    int temp = log2(size);
    return temp;
}

