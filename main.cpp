#include "node.hpp"
#include <iostream>

int main()
{
    Squirrel tippy_toe("Tippy-Toe");
    Squirrel monkey_joe("Monkey Joe");
    Squirrel sir_lora("Sir Lora");

    Node node1(tippy_toe);
    Node node2(monkey_joe);
    Node node3(sir_lora);

    node1.setLeft(&node2);
    node1.setRight(&node3);

    Node *retrievedNode = &node1;
    std::cout << retrievedNode->getValue().get_name() << std::endl;

    retrievedNode = node1.left();
    std::cout << retrievedNode->getValue().get_name() << std::endl;

    retrievedNode = node1.right();
    std::cout << retrievedNode->getValue().get_name() << std::endl;
}