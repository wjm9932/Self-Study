#pragma once
#include <iostream>
#include "List.h"

template <typename T>
List<T>::Node::Node(T value) : value(value), pNext(nullptr) {}

template <typename T>
List<T>::Node::Node(T _value, std::shared_ptr<Node>&next)
{
    value = _value;
    pNext = next;
}

template <typename T>
List<T>::List() : pHead(nullptr), pTail(nullptr) {}

template <typename T>
List<T>::~List()
{
}

template <typename T>
void List<T>::Push_Back(T value)
{
    if (pHead == nullptr)
    {
        pHead = std::make_shared<Node>(value);
        pTail = pHead;
    }
    else
    {
        std::shared_ptr<Node> temp = pTail;
        pTail = std::make_shared<Node>(value);
        temp->pNext = pTail;
    }
}

template <typename T>
void List<T>::Push_Front(T value)
{
    if (pHead == nullptr)
    {
        pHead = std::make_shared<Node>(value);
        pTail = pHead;
    }
    else
    {
        std::shared_ptr<Node> temp = pHead;
        pHead = std::make_shared<Node>(value, temp);
    }
}

