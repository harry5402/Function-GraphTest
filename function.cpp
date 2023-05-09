//
//  function.cpp
//  Function
//
//  Created by Harry Lesak on 5/8/23.
//

#include "function.hpp"
#include <iostream>

using namespace std;

Function::Function()
{
    x3 = 0;
    x2 = 0;
    x = 0;
    c = 1;
}

Function::Function(int x_3, int x_2, int x_1, int c_1)
{
    x3 = x_3;
    x2 = x_2;
    x = x_1;
    c = c_1;
}

Function::Function(int m1, int b1)
{
    m = m1;
    b = b1;
}

void Function::inputFunct()
{
    cout << "Enter your function" << endl;
    cout << "Y = ___X^3 + ___X^2 + ___X + ___" << endl;
    cout << "Input: ";
    cin >> x3 >> x2 >> x >> c;
    
}

void Function::inputSimpleFunct()
{
    cout << "Input your simple function (y = mx + b): " << endl;
    cout << "Y = ___X + ___" << endl;
    cin >> m >> b;
}

void Function::displayFunct()
{
    cout << "Y = ";
    if(x3 != 0)
    {
        cout << x3 <<"X^3 + ";
    }
    if(x2 != 0)
    {
        if(x2 > 0)
        {
            cout << x2 << "X^2 + ";
        }
        else
        {
            cout << x2 << "X^2 + ";
        }
    }
    if(x != 0)
    {
        if(x > 0)
        {
            cout << x << "X + ";
        }
        else
        {
            cout << x << "X + ";
        }
    }
    if(c != 0)
    {
        if(c > 0)
        {
            cout << c << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
}

void Function::displaySimpleFunct()
{
    cout << "Y = " << m << "X + " << b << endl;
}

int Function::getM()
{
    return m;
}

int Function::getB()
{
    return b;
}

Function Function::derivative(Function f1)
{
    Function deriv;
    deriv = f1;
    deriv.x2 = f1.x3 * 3;
    deriv.x = f1.x2 * 2;
    deriv.c = f1.x * 1;
    deriv.x3 = 0;
    
    
    return deriv;
}
