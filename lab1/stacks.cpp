/**
@file stacks.cpp
@author Tadeparti, Srikar. SE20UCSE186
@version 1.0
@brief Illustrates the use of a stack data structure
@details
This program creates a stack using a vector, a stack using an array, 
and a stack using a string. It performs elementary operations on these stacks.
Operations include: 
- push, 
- pop, and 
- print

@date 2022-02-12
*/

#include "stack_types.h"

using namespace std;

int main(void)
{
    Stack s;
    s.push(4);
    s.push(6);
    s.push(9);
    s.pop();
    s.print();
    cout<<s.peep()<<endl;

    Stack2 t;
    t.push(8);
    t.push(3);
    t.push(44);
    cout<<t.peep()<<endl;
    t.pop();
    t.print();

    cout<<"String stack:"<<endl;
    StringStack p;
    p.push();
    p.push();
    p.push();
    p.pop();
    p.print();

    return 0;
}