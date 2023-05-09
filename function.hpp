//
//  function.hpp
//  Function
//
//  Created by Harry Lesak on 5/8/23.
//

#ifndef function_hpp
#define function_hpp

#include <stdio.h>

class Function
{
public:
    Function();
    Function(int x3, int x2, int x, int c);
    Function(int m, int b);
    
    void inputFunct();
    void inputSimpleFunct();
    void displayFunct();
    void displaySimpleFunct();
    int getM();
    int getB();
    Function derivative(Function f1);
    
    
private:
    int x3, x2, x, c, m, b;
    
};

#endif /* function_hpp */
