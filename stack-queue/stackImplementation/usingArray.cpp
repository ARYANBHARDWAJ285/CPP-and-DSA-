//  Stack Using Array

#include <iostream>
using namespace std;

class stImplement
{
public:
   int top = -1;
   int size = 0;
   int st[10];
   void push(int x)
   {

      if (top >= 9)
      {
         cout << "Stack Overflow" << endl;
         return;
      }
      top += 1;
      st[top] = x;
      cout << x << " pushed to stack." << endl;
   }

   void pop()
   {
      if (top == -1)
      {
         cout << "Stack Underflow! There is no value in the stack." << endl;
         return;
      }
      top -= 1;
   }

   int getTop()
   {
      if (top == -1)
         return -1;
      return st[top];
   }
   int getSize()
   {
      return top + 1;
     
   }
   bool isEmpty() {
    return top == -1;
   }
   void getPrint() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements (Top -> Bottom): ";
    for (int i = top; i >= 0; i--) {
        cout << st[i] << " ";
    }
    cout << endl;
   }
};

int main()
{
   stImplement obj;
   int x;
   int choice;

   while (true)
   {
      cout << "/n--------- Select From the Below ---------" << endl;
      cout << "1. --- Push  Element --- " << endl;
      cout << "2. --- POP Element --- " << endl;
      cout << "3. --- See TOP Element ---" << endl;
      cout << "4. --- See the size of the Stack ---" << endl;
      cout << "5. --- Print Whole Stack --- "<< endl;
      cout << "6. ---- Exit --- " << endl;
      cout << "---- Enter Your choice ---- " << endl;
      cin >> choice;

      switch (choice)
      {
      case 1:
         cout << "Enter the element to push: ";
         cin >> x;
         obj.push(x);
         break;

      case 2:
         obj.pop();
         break;

      case 3:
         if (obj.isEmpty())
            cout << "Stack is Empty " << endl;
         else
            cout << "The Top Element is : " << obj.getTop()<< endl;
         break;
      case 4:
         cout << "Current stack size is: " << obj.getSize() << endl;
         break;
      case 5 :
         obj.getPrint();
          break ;
      case 6:
         cout << "Exiting program..." << endl;
         return 0;
      default:
         cout << "Invalid choice! Please try again." << endl;
      }
   }
   return 0;
}
