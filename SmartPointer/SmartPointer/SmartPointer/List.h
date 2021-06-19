#pragma once

#include <memory> // To use smart pointer

template <typename T>
class List
{
private:
    struct Node
    {
        std::shared_ptr<Node> pNext;
        T value;
        Node(T value);
        Node(T value, std::shared_ptr<Node>& next);
    };
    std::shared_ptr<Node> pHead;
    std::shared_ptr<Node> pTail;
public:
    void Push_Back(T value);
    void Push_Front(T value);
    List();
    ~List();
};

#include "List.hpp"
