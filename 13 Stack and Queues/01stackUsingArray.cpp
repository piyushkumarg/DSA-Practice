#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    // behavior
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // function to push an element
    void push(int ele)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = ele;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    // function to pop element
    void pop()
    {
        if (top > 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    // function to find top element
    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    // function to check stack is empty or not
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(55);
    st.push(22);
    st.push(44); // stack overflow

    cout << st.peek() << endl; // outoput 22

    st.pop();

    cout << st.peek() << endl; // outoput 55

    st.pop();

    cout << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "Stack is Empty  " << endl;
    }
    else
    {
        cout << "Stack is not Empty " << endl;
    }

    /********* Stack Using STL ****************

   stack<int> s;
   // push operation
   s.push(5);
   s.push(10);
   s.push(25);
   s.push(26);
   cout << "Printing top element " << s.top() << endl;
   if (s.empty())
   {
       cout << "Stack is empty " << endl;
   }
   else
   {
       cout << "stack is not empty " << endl;
   }
   cout << "size of stack is " << s.size() << endl;

   *****************************************/
    return 0;
}