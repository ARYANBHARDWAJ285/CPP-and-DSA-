#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class stackUsingLL
{
private:
    Node *top = NULL;
    int size = 0;

public:
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
        size += 1;
        cout << "Element is Pushed : "<< temp->data << endl ; 
    }

    void pop( ) {
        if (isEmpty()) {
            cout << "Stack Underflow! Stack is empty." << endl;
            return;
        } 

        Node *temp = top;
        top = top->next;
        cout << "Element is removed : " << temp->data << endl ;
        delete temp;
        size -= 1 ;
        
    }
    int getTop() {
        if (isEmpty()) return -1;
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
    int getSize(){
        return  size ;
    }

    void  getPrint (){
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return ;
        }
        cout << "Stack (Top -> Bottom): ";
        Node* temp =  top ;
        while( temp != NULL ){
            cout << temp->data << " --> " ;
            temp = temp->next ;
        }
        cout << endl ; 
    }
};
int main (){
   stackUsingLL obj ;
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
