#include <iostream>
#include <queue>
using namespace std;

class st
{
public:
    queue<int> q;
    int size;
    void push(int x)
    {
        q.push(x);
        int s = q.size();
        for (int i = 0; i < s - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    void pop()
    {
        if (q.empty())
        {
            cout << "Stack is empty :" << endl;
            return;
        }
        cout << q.front() << " popped from stack." << endl;
        q.pop();
    }
    int top()
    {
        if (q.empty())
        {
            cout << "Stack is empty :" << endl;
            return -1;
        }
        return q.front();
    }
    void getSize()
    {
        if (q.empty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << "size of the stack is  : " << size << endl;
    }

    void printElement()
    {
        if (q.empty())
        {
            cout << "Stack is Empty " << endl;
            return;
        }
        cout << "Stack Element is : ";
        queue<int> temp = q;
        while (!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    st obj;
    int x;
    int choice;
    while (true)
    {
        cout << "\n -----> Menu <---------" << endl;
        cout << "1 ----> Add an Element into the stack <--- " << endl;
        cout << "2 -----> Remove an element from the stact <--- " << endl;
        cout << "3 ----> To see the front element in the stack <----" << endl;
        cout << "4 ---> To see the  Element <--- " << endl;
        cout << "5 ---> To see the size <---- " << endl;
        cout << "6 ----> Exit <---- " << endl;
        cout << "Enter your choices " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the Element : ";
            cin >> x;
            obj.push(x);
            break;

        case 2:
            obj.pop();
            break;

        case 3:
            cout << "Top Element is : " << obj.top() << endl;
            break;

        case 4:
            obj.printElement();
            break;

        case 5:
            obj.getSize();
            break;
        case 6:
            cout << "Exit ";
            return 0;
            break;

        default:
            cout << "Please Enter the valid input : " << endl;
            break;
        }
    }
    /*

    st obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);

    cout << "Top element: " << obj.top() << endl; // Prints 30

    obj.pop();
    cout << "Top element after pop: " << obj.top() << endl; // Prints 20

    return 0;

    */
}
