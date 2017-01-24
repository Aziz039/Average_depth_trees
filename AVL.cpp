//
//  AVL.cpp
//  AVL 2
//
//  Created by Abdulaziz Alghamdi on 2017-01-21.
//  Copyright © 2017 app. All rights reserved.
//

#include "AVL.h"

AVL_Tree::AVL_Tree() {
    root = NULL;
}

AVL_Tree::~AVL_Tree() {
    root = NULL;
}

void AVL_Tree::setNode(AVL_Node* p) {
    root = p;
}


int AVL_Tree::getHeight() {
    
    return height(root);
    
}

int AVL_Tree::height(AVL_Node* p) {
    int h = 0;
    
    if (p != NULL) {
        int lHeight = height(p->lChild);
        int rHeight = height(p->rChild);
        
        int MAX_HEIGHT = max(lHeight, rHeight);
        h = MAX_HEIGHT + 1;
    }
    
    return h;
}


int AVL_Tree::diff(AVL_Node* p) {
    
    int lHeight = height(p->lChild);
    int rHeight = height(p->rChild);
    
    int diff = lHeight - rHeight;
    
    return diff;
}


AVL_Node* AVL_Tree::LL(AVL_Node* p) {
    // assumes p is passed-by-reference
    AVL_Node* q;
    q = p->lChild;
    p->lChild = q->rChild;
    q->rChild = p;
    
    return q;
}

AVL_Node* AVL_Tree::LR(AVL_Node* p) {
    // assumes p is passed-by-reference
    AVL_Node* q;
    q = p->lChild;
    p->lChild = RR(q);
    
    return LL(p);
}

AVL_Node* AVL_Tree::RR(AVL_Node* p) {
    AVL_Node* q;
    q = p->rChild;
    p->rChild = q->lChild;
    q->lChild = p;
    
    return q;
}

AVL_Node* AVL_Tree::RL(AVL_Node* p) {
    // assumes p is passed-by-reference
    AVL_Node* q;
    q = p->rChild;
    p->rChild = LL(q);
    
    return RR(p);
}

AVL_Node* AVL_Tree::balance(AVL_Node* p) {
    
    int bal = diff(p);
    
    if (bal > 1) {
        
        if (diff(p->lChild) > 0) {
            p = LL(p);
        }
        else
            p = LR(p);
    }
    else if (bal < -1) {
        
        if (diff(p->rChild) > 0) {
            p = RL(p);
        }
        else
            p = RR(p);
    }
    
    return p;
}

AVL_Node* AVL_Tree::insert(int newData) {
    root = insertHelper(root, newData);
    return root;
    
}

AVL_Node* AVL_Tree::insertHelper(AVL_Node* p, int newData) {
    if (p == NULL) {
        p = new AVL_Node;
        p->data = newData;
        p->lChild = NULL;
        p->rChild = NULL;
        
        return p;
    }
    else if (newData < p->data) {
        p->lChild = insertHelper(p->lChild, newData);
        
        p = balance(p);
    }
    else if (newData >= p->data) {
        p->rChild = insertHelper(p->rChild, newData);
        
        p = balance(p);
    }
    
    return p;
}

void AVL_Tree::print(AVL_Node* p, int value) {
    
    int i;
    
    if (p != NULL) {
        print(p->rChild, value + 1);
        cout << '\n';
        
        if (p == root) {
            cout << "root-> ";
        }
        
        for (int i = 0; i < value && p != root; i++) {
            cout << "        ";
        }
        cout << p->data;
        
        print(p->lChild, value + 1);
    }
}

void AVL_Tree::inorder(AVL_Node* p) {
    
    if (p == NULL) {
        return;
    }
    
    inorder(p->lChild);
    
    cout << p->data << " ";
    
    inorder(p->rChild);
}
void AVL_Tree::preorder(AVL_Node* p) {
    
    if (p == NULL) {
        return;
    }
    
    cout << p->data << " ";
    
    preorder(p->lChild);
    preorder(p->rChild);
    
}
void AVL_Tree::postorder(AVL_Node* p) {
    
    if (p == NULL) {
        return;
    }
    
    postorder(p->lChild);
    postorder(p->rChild);
    
    cout << p->data << " ";
    
}

AVL_Node* AVL_Tree::getNode() {
    return root;
}


