////////////////////////////////////////////////////////////////////////
// Name: Abdulaziz Alghamdi                                           //
// Cource: CS340-001                                                  //
// SID: 200332681                                                     //
//                                                                    //
//                                                                    //
//                                                                    //
//                         ***************                            //
////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "initial.h"

int main() {
    cout << fixed << showpoint;
    int nodes;
    int trees;
    
    AVL_depth();
    AVL_depth avl_tree;
    
    binS_depth();
    binS_depth binS_tree;
    
    binT_depth();
    binT_depth binT_tree;
    
    
    cout << "BINARY TREES:" << endl;
    
    nodes = 8;
    trees = 16;
    
    cout << "Enter number of nodes: 8 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 16 \n";
    //cin >> trees;
    
    binT_tree.initial_binT(nodes, trees);
    cout << "Total depth accumulator: " << binT_tree.get_depth_binT_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: "  << setprecision(1) << (float)binT_tree.get_binT_avgDepth() << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    
    nodes = 64;
    trees = 128;
    
    cout << "Enter number of nodes: 64 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 128 \n";
    //cin >> trees;
    
    binT_tree.initial_binT(nodes, trees);
    cout << "Total depth accumulator: " << binT_tree.get_depth_binT_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: "  << setprecision(1) << (float)binT_tree.get_binT_avgDepth() << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    
    nodes = 512;
    trees = 1024;
    
    cout << "Enter number of nodes: 512 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 1024 \n";
    //cin >> trees;
    
    binT_tree.initial_binT(nodes, trees);
    cout << "Total depth accumulator: " << binT_tree.get_depth_binT_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: "  << setprecision(1) << (float)binT_tree.get_binT_avgDepth() << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    
    nodes = 4096;
    trees = 8192;
    
    
    cout << "Enter number of nodes: 4096 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 8192 \n";
    //cin >> trees;
    
    binT_tree.initial_binT(nodes, trees);
    cout << "Total depth accumulator: " << binT_tree.get_depth_binT_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: "  << setprecision(1) << (float)binT_tree.get_binT_avgDepth() << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    cout << '\n' << '\n';
    ////////////////////////////////////////////////
    
    
    cout << "BINARY SEARCH TREES:" << endl;
    
    nodes = 8;
    trees = 16;
    
    cout << "Enter number of nodes: 8 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 16 \n";
    //cin >> trees;
    
    binS_tree.initial_binS(nodes, trees);
    cout << "Total depth accumulator: " << binS_tree.get_depth_binS_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: " << (float)binS_tree.get_binS_avgDepth() << setprecision(1) << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    nodes = 64;
    trees = 128;
    
    cout << "Enter number of nodes: 64 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 128 \n";
    //cin >> trees;
    
    binS_tree.initial_binS(nodes, trees);
    cout << "Total depth accumulator: " << binS_tree.get_depth_binS_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: " << (float)binS_tree.get_binS_avgDepth() << setprecision(1) << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    nodes = 512;
    trees = 1024;
    
    cout << "Enter number of nodes: 512 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 1024 \n";
    //cin >> trees;
    
    binS_tree.initial_binS(nodes, trees);
    cout << "Total depth accumulator: " << binS_tree.get_depth_binS_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: " << (float)binS_tree.get_binS_avgDepth() << setprecision(1) << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    nodes = 4096;
    trees = 8192;
    
    cout << "Enter number of nodes: 4096 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 8192 \n";
    //cin >> trees;
    
    binS_tree.initial_binS(nodes, trees);
    cout << "Total depth accumulator: " << binS_tree.get_depth_binS_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: " << (float)binS_tree.get_binS_avgDepth() << setprecision(1) << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    
    cout << '\n' << '\n';
    //////////////////////////////////////////////////
    
    cout << "AVL TREES:" << endl;
    
    nodes = 8;
    trees = 16;
    
    cout << "Enter number of nodes: 8 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 16 \n";
    //cin >> trees;
    
    avl_tree.initial_AVL(nodes, trees);
    cout << "Total depth accumulator: " << avl_tree.get_depth_AVL_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: " << setprecision(1) << (float)avl_tree.get_AVL_avgDepth() << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    
    
    nodes = 64;
    trees = 128;
    
    cout << "Enter number of nodes: 64 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 128 \n";
    //cin >> trees;
    
    avl_tree.initial_AVL(nodes, trees);
    cout << "Total depth accumulator: " << avl_tree.get_depth_AVL_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: " << setprecision(1) << (float)avl_tree.get_AVL_avgDepth() << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    
    
    nodes = 512;
    trees = 1024;
    
    cout << "Enter number of nodes: 512 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 1024 \n";
    //cin >> trees;
    
    avl_tree.initial_AVL(nodes, trees);
    cout << "Total depth accumulator: " << avl_tree.get_depth_AVL_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: " << setprecision(1) << (float)avl_tree.get_AVL_avgDepth() << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    
    
    nodes = 4096;
    trees = 8192;
    
    cout << "Enter number of nodes: 4096 \n";
    //cin >> nodes;
    cout << "Enter number of trees: 8192 \n";
    //cin >> trees;
    
    avl_tree.initial_AVL(nodes, trees);
    cout << "Total depth accumulator: " << avl_tree.get_depth_AVL_accumulator() << endl;
    cout << "Total number of nodes: " << nodes << endl;
    cout << "Average depth: " << setprecision(1) << (float)avl_tree.get_AVL_avgDepth() << endl;
    cout << "Log " << nodes << ": " << setprecision(1) << log2(nodes)  << endl;
    
    
    
    
    
    
    return 0;
}
