#include <iostream>
#include <stack>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

class Stack
{
    node *top;

public:
    // function to push element in stack
    void push(int data)
    {
        node *temp = new node(data);

        if (!temp)
        {
            cout << "\nStack Overflow";
            exit(1);
        }

        temp->data = data;
        temp->next = top;
        top = temp;
    }

    // function to check ifthe stack is empty or not
    bool isEmpty()
    {
        return top == NULL;
    }

    // function to return top element in a stack
    int peek()
    {
        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }

    // Function to remove a key from given queue q
    void pop()
    {
        node *temp;
        if (top == NULL)
        {
            cout << "\nStack Underflow" << endl;
            exit(1);
        }
        else
        {
            temp = top;
            top = top->next;
            free(temp);
        }
    }
};

int main()
{

    Stack st;

    // Push the elements of stack
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);

    cout << "\nTop element is " << st.peek() << endl;

    st.pop();
    st.pop();

    cout << "\nTop element is " << st.peek() << endl;

    return 0;
}