#include <iostream>
#include "Stack.h"
using namespace std;

void showStack(Stack<int> &s)
{
  while (!s.empty())
  {
    cout << '\t' << s.top();
    s.pop();

  }
  cout << '\n';
}

int main ()
{
  Stack <int> s;
  s.push(10);
  s.push(30);
  s.push(20);
  s.push(5);
  s.push(1);
  cout << s.top() << endl;
  cout << "The stack is : ";
  showStack(s);

  if(s.empty())
    cout << "Stack is empty" << endl;

  cout << "\ns.size() : " << s.size();
  return 0;
}