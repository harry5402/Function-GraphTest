//
//  Graph.cpp
//  Function
//
//  Created by Harry Lesak on 5/8/23.
//

#include "Graph.hpp"
#include <vector>
#include <iostream>
using namespace std;

Graph::Graph()
{
    axis = {'-','-','-','-','-','-','-','-','-','-','|','-','-','-','-','-','-','-','-','-','-'};
    line = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
    yaxis = {line,line,line,line,line,line,line,line,line,line,axis,line,line,line,line,line,line,line,line,line,line};
}

void Graph::displayGraph()
{
    int i = 0;
    do
    {
        int z = 0;
        do
        {
            cout << yaxis[i][z];
            z++;
        }while(z < 20);
        cout << endl;
        i++;
    }while (i < yaxis.size());
}

Graph Graph::editGraph(Function f1)
{
    Graph g1;
    int i = 0;
    int x = -10;
    int m1, b1;
    m1 = f1.getM();
    b1 = f1.getB();
    do
    {
        int yVal = -1*((m1 * x) + b1);
        if((yVal + 10) >= 0 && (yVal + 10) < 21)
        {
            g1.yaxis[(yVal + 10)][i] = '*';
        }
        x++;
        i++;
    } while (i < 21);
    
    return g1;
}

