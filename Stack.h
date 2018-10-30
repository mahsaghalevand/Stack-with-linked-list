/**
 * @file Stack.h
 *
 * @author <a href="mailto:mahsa081997@gmail.com">Mahsa Ghalevand</a>
 * @date Oct 30 , 2018
 */

#pragma once

#include <iostream>

template <typename T>
class Node
{
public:
  Node *previous_;
  T data_;
};

template <typename T>
class Stack
{
public:
  Stack();
  ~Stack();
  bool empty();
  void push(T num);
  T top();
  void pop();
  int size();

private:
  Node<T> *head_;
  int top_;
  Stack(const Stack &p2) :
          head_(p2.head_),
          top_(p2.top_)
  { }
};

#include "Stack.tcc"