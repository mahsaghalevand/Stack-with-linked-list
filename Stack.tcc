
/**
 * @file Stack.h
 *
 * @author <a href="mailto:mahsa081997@gmail.com">Mahsa Ghalevand</a>
 * @date Oct 30 , 2018
 */

template <typename T>
Stack<T>::Stack() :
        head_(NULL),
        top_(-1)
{ }

template <typename T>
Stack<T>::~Stack()
{
  while (head_ != NULL)
    pop();
}

template <typename T>
Stack<T>::Stack(const Stack &p2) :
        head_(p2.head_),
        top_(p2.top_)
{ }


template <typename T>
bool Stack<T>::empty() const
{
  return head_ == NULL;
}

template <typename T>
void Stack<T>::push(T num)
{
  Node<T> *temp = new Node<T>;
  temp->data_ = num;
  temp->previous_ = head_;
  head_ = temp;
  top_++;
}

template <typename T>
T Stack<T>::top() const
{
  return head_->data_;
}

template <typename T>
void Stack<T>::pop()
{
  Node<T> *temp = head_;
  head_ = head_->previous_;
  delete temp;
  top_ --;
}

template <typename T>
int Stack<T>::size() const
{
  return top_ + 1;
}

