//
//  Graph.hpp
//  Function
//
//  Created by Harry Lesak on 5/8/23.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>
#include <vector>
#include "function.hpp"

using namespace std;

class Graph : public Function
{
public:
    Graph();
    void displayGraph();
    Graph editGraph(Function f1);
    
private:
    vector<vector<char>> yaxis;
    vector<char> line;
    vector<char> axis;
};

#endif /* Graph_hpp */
