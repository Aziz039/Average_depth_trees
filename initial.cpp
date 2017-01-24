#include "initial.h"



//////////////////////////////////////////////////////////////////
//**************************************************************//
//                        AVL TREE                              //
//**************************************************************//
//////////////////////////////////////////////////////////////////

AVL_depth::AVL_depth() {
    depth_AVL_accumulator = 0.0;
    avgDepth_AVL = 0;
    counter_AVL = 0;
}

void AVL_depth::initial_AVL(int nodes, int trees) {
    int nodeCounter = nodes;
    int treeCounter = trees;
    while (treeCounter > 0) {
        
        AVL_Tree tree = *new AVL_Tree;
        nodeCounter = nodes;
        while (nodeCounter > 0) {
   
            srand(time(NULL));
            int randomNum = rand() % 1000;
            
            tree.insert(randomNum);
  
            nodeCounter--;
        }
        depth_AVL_accumulator += tree.getHeight();
        counter_AVL++;
        treeCounter--;
    }
}


float AVL_depth::get_AVL_avgDepth() {
    return (avgDepth_AVL = (float)depth_AVL_accumulator / counter_AVL);
}

int AVL_depth::get_depth_AVL_accumulator() {
    return depth_AVL_accumulator;
}

//////////////////////////////////////////////////////////////////
//**************************************************************//
//**************************************************************//
//////////////////////////////////////////////////////////////////





//////////////////////////////////////////////////////////////////
//**************************************************************//
//                    BINARY SEARCH TREE                        //
//**************************************************************//
//////////////////////////////////////////////////////////////////

binS_depth::binS_depth() {
    avgDepth_binS = 0.0;
    depth_binS_accumulator = 0;
    counter_binS = 0;
}

void binS_depth::initial_binS(int nodes, int trees) {
    
    int nodeCounter = nodes;
    int treeCounter = trees;
    
    while (treeCounter > 0) {
        
        BinS_Tree tree;
        nodeCounter = nodes;
        while (nodeCounter > 0) {
            
            int randomNum = rand() % 1000;
            
            tree.initilize(randomNum);
            nodeCounter--;
        }
        depth_binS_accumulator += tree.maxDepth();
        counter_binS++;
        treeCounter--;
    }
    
}
float binS_depth::get_binS_avgDepth() {
    return (avgDepth_binS = depth_binS_accumulator / counter_binS);
}
int binS_depth::get_depth_binS_accumulator() {
    return depth_binS_accumulator;
}

//////////////////////////////////////////////////////////////////
//**************************************************************//
//**************************************************************//
//////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////
//**************************************************************//
//                        BINARY TREE                           //
//**************************************************************//
//////////////////////////////////////////////////////////////////

binT_depth::binT_depth() {
    avgDepth_binT = 0.0;
    depth_binT_accumulator = 0;
    counter_binT = 0;
}

void binT_depth::initial_binT(int nodes, int trees) {
    
    int nodeCounter = nodes;
    int treeCounter = trees;
    
    while (treeCounter > 0) {
        
        binTree tree;
        nodeCounter = nodes;
        while (nodeCounter > 0) {
            
            int randomNum = rand() % 1000;
            
            tree.insert(randomNum);
            nodeCounter--;
        }
        depth_binT_accumulator += tree.maxDepth();
        
        counter_binT++;
        treeCounter--;
    }
}

float binT_depth::get_binT_avgDepth() {
    return (avgDepth_binT = (float)depth_binT_accumulator / counter_binT);
}

int binT_depth::get_depth_binT_accumulator() {
    return depth_binT_accumulator;
}

//////////////////////////////////////////////////////////////////
//**************************************************************//
//**************************************************************//
//////////////////////////////////////////////////////////////////
