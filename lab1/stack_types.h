/**
@file stack_types.h
@author Tadeparti, Srikar. SE20UCSE186
@version 1.0
@brief Implementation of stack data structure
@details
This file contains the implementation of the stack data structure using vectors, arrays, and strings.
@date 2022-02-12
*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
@class Stack
@brief Stack data structure using vectors to store data.
*/
class Stack
{
    public:
    /**
    pushes an element into the stack.
    @param a The element to be pushed into the stack.
    */
    void push(int a)
    {
        stack.push_back(a);
    }
    /**
    Pops (removes) the topmost element from the stack.
    */
    void pop()
    {
        stack.pop_back();
    }
    /**
    Prints the current contents of the stack.
    */
    void print()
    {
        for (auto it = stack.rbegin(); it != stack.rend(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    /**
    @return The topmost element of the stack.
    */
    int peep()
    {
        return *stack.rbegin();
    }

    private:
    vector<int> stack;
};

// Using arrays
class Stack2
{
    public:
    Stack2()
    {
        stack = new int[10];
        top = -1;
    }
    ~Stack2()
    {
        delete stack;
    }
    void push(int a)
    {
        // Overflow
        if (top==9)
            return;
        stack[++top] = a;
    }
    void pop()
    {
        // Underflow
        if (top == -1)
            return;
        stack[top--] = 0;
    }
    int peep()
    {
        // Underflow
        if (top == -1)
            return -999;
        return stack[top];
    }
    void print()
    {
        for (int i = top; i >= 0; i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
    private:
    int * stack;
    int top;
};

class StringStack
{
    public:
    StringStack()
    {
        stack = new char*[10];
        top = -1;
    }
    void push()
    {
        // Overflow
        if (top==9)
            return;
        char * str = new char[20];
        cin.getline(str, 20);
        stack[++top] = str;
    }
    void pop()
    {
        // Underflow
        if (top == -1)
            return;
        delete stack[top];
        stack[top--] = 0;
    }
    void print()
    {
        for (int i = top; i >= 0; --i)
        {
            cout<<stack[i]<<endl;
        }
    }
    private:
    char ** stack;
    int top;
};