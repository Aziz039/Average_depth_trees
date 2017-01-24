//
//  initial.h
//  trees
//
//  Created by Abdulaziz Alghamdi on 2017-01-22.
//  Copyright © 2017 app. All rights reserved.
//

#ifndef initial_h
#define initial_h

#include "binTree.h"
#include "binSearchTree.h"
#include "AVL.h"
#include <cstdlib>
#include <iomanip>


class AVL_depth {
public:
    AVL_depth();
    void initial_AVL(int nodes, int trees);
    float get_AVL_avgDepth();
    int get_depth_AVL_accumulator();
private:
    int depth_AVL_accumulator;
    float avgDepth_AVL;
    int counter_AVL;
};

class binS_depth {
public:
    binS_depth();
    void initial_binS(int nodes, int trees);
    float get_binS_avgDepth();
    int get_depth_binS_accumulator();
private:
    int depth_binS_accumulator;
    float avgDepth_binS;
    int counter_binS;
};

class binT_depth {
public:
    binT_depth();
    void initial_binT(int nodes, int trees);
    float get_binT_avgDepth();
    int get_depth_binT_accumulator();
private:
    float depth_binT_accumulator;
    float avgDepth_binT;
    int counter_binT;
};


#endif /* initial_h */
