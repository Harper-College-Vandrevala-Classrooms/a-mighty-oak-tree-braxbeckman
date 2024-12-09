#pragma once
#include "squirrel.hpp"

class Node {
    private:
    Squirrel *value = nullptr;
    Node *leftNode;
    Node *rightNode;

    public:
    Node(Squirrel &s)
    {
        value = new Squirrel(s);
        leftNode = nullptr;
        rightNode = nullptr;
    }

    void setLeft(Node *node)
    {
        leftNode = node;
    }

    void setRight(Node *node)
    {
        rightNode = node;
    }

    Node *left()
    {
        return leftNode;
    }

    Node *right()
    {
        return rightNode;
    }

   Squirrel getValue()
    {
        return *value;
    }
    
    ~Node()
    {
        delete value;
    }
};