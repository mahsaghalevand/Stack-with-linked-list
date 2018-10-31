
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
  bool empty() const;
  void push(T num);
  T top() const;
  void pop();
  int size() const;

private:
  Node<T> *head_;
  int top_;
  Stack(const Stack &p2);
};

#include "Stack.tcc"