#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertArraytoDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void printDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "delete tail  successfull";
        return NULL;
    }
    Node *prev = head;
    Node *tail = head->next;

    while (tail->next != NULL)
    {
        prev = tail;
        tail = tail->next;
    }
    tail->back = nullptr;
    prev->next = nullptr;
    delete tail;
    return head;
}

Node* deletePostion(Node*  head  , int k){
    if( head == NULL )return NULL ;
    Node* temp =  head ;
    int count = 0 ;
    while (temp != NULL ){
        count++ ;
        if(count == k )break ;
        temp = temp->next ;

    }

    Node* prev = temp->back ;
    Node* front = temp->next ;

    if(prev == NULL && front == NULL ){
        return NULL ;
    }
    else if (prev == NULL ){
        return  deleteHead(head);
        
    }
    else if (front == NULL){
        return deleteTail(head);
    }

    prev->next = front ;
    front->back = prev ;
    temp->next = NULL ;
    temp->back = NULL ;
    delete temp ;
    return head ;
}

Node* deleteNode(Node* head){
    Node*  temp = head->next;
    Node*  prev = temp->back ;
    Node* front  =  temp->next ;
    if( front == NULL ){
        prev->next  = nullptr;
        front->back =  nullptr ;
        delete temp ;
        return  head ;
    }

    prev->next = front ;
    front->back = prev ;
    temp->next =  nullptr ;
    temp->back = nullptr ;
    delete temp ;
    return head ;
}


int main (){
    vector<int> arr = {10,12,14,16,18};
    Node* head = convertArraytoDLL(arr);
    head = deleteNode(head->next);
    printDLL(head);
    return 0 ;
}
