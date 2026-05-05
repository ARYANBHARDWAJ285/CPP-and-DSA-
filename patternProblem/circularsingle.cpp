#include<iostream>
using namespace std ;
class Node {
    public :
    int data ;
    Node* next  ;
};
class CircularLinkedList 
{
public  :
   Node*  head ;
   CircularLinkedList()
   {
    head =  NULL ;
   }
   //  inster first 
void insterFirst(int value)  
{
    Node* newNode =  new Node();
    newNode->data = value ;
    if(head==NULL)
    {
        head = newNode ;
        newNode->next =  head ;

    }
    else{

        Node*  temp ;
        temp =  head ;
        while(temp ->next!=head)
        {
            temp =  temp -> next ;
            

        }
        newNode  ->next =  head ;
        head =  newNode ;
        temp-> next =  head ;
        
    }
    cout<<"node insert at first"<<endl ;


}
//insert At the last 
void insertAtLast() 
{
    
}
// Display 
void Display()
{
    if(head == NULL )
    {
        cout<<"Lis is Empty "<<endl ;
    }
    else{
        Node* temp =  head ;
        while (temp -> next!= head)
        {
            cout<<temp->data<<"-->" ;
            temp = temp ->next ;

        }
        cout<<temp->data <<endl ;

    }
}
};
int main ()
{
    CircularLinkedList obj ;
    int choice , value ;
    do {
        cout<<"1. Inster first "<<endl ;
        cout<<"2.Display "<<endl ;
        cout<<"3.Enter Your Choice : " ;
        cin>>choice ;
        switch (choice)
        {
        case 1 : 
            cout<<"Enter the Value : " ;
            cin>>value ;
            obj.insterFirst(value) ;
            break ;
        case 2 : 
           obj.Display() ;
           break ;
            
        }
    }while (choice != 3);

}