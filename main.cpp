//
//  main.cpp
//  Function
//
//  Created by Harry Lesak on 5/8/23.
//

#include <iostream>
#include "function.hpp"
#include "Graph.hpp"
using namespace std;

int main()
{
    Function f1;
    f1.inputSimpleFunct();
    cout << "Your Function: " << endl;
    f1.displaySimpleFunct();
    
    cout << endl;
    
    Graph e1;
    e1.displayGraph();
    
    cout << endl;
    
    e1 = e1.editGraph(f1);
    e1.displayGraph();
    
    
    
}
