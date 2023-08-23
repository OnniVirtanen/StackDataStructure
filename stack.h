//
// Created by onni on 23.8.2023.
//

#pragma once

#include <iostream>

template<typename T, size_t S>
class Stack
{
public:
    void Push(T item);
    T Pop();
    bool IsEmpty() const;
    bool IsFull() const;
    T Peek() const;
    Stack();
private:
    T items[S];
    int top;
};

template<typename T, size_t S>
Stack<T, S>::Stack() { top = -1; }

template<typename T, size_t S>
void Stack<T, S>::Push(T item)
{
    if (!IsFull())
    {
        items[++top] = item;
    }
    else
    {
        throw std::overflow_error("Stack is full");
    }
}

template<typename T, size_t S>
T Stack<T, S>::Pop()
{
    if (!IsEmpty())
    {
        return items[top--];
    }
    else
    {
        throw std::underflow_error("Stack is empty");
    }
}

template<typename T, size_t S>
bool Stack<T, S>::IsEmpty() const
{
    return (top == -1);
}

template<typename T, size_t S>
bool Stack<T, S>::IsFull() const
{
    return (top == S - 1);
}

template<typename T, size_t S>
T Stack<T, S>::Peek() const
{
    if (!IsEmpty())
    {
        return items[top];
    }
    else
    {
        throw std::underflow_error("Stack is empty");
    }
}