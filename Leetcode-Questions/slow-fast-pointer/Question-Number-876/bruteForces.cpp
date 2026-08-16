#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
  
    Node* middleOfLinkedList(Node*  head){

        if(head ==  NULL || head->next == NULL ) return head  ;
        int count  = 0  ;
        Node*  temp =  head  ;
        while( temp != NULL ){
            count++;
            temp = temp->next ;
        }

        int middle = count / 2 ;
        temp  = head  ;
        count = -1 ;
        while ( temp != NULL){
            count++ ;
            if( count ==  middle){
                break;
            }
            temp =  temp->next ;
        }
        return  temp ;
    }
    
};


Node *convertArrayToLinkedList(vector<int> &arr)
{
    if (arr.empty())  return NULL;
    Node *head = new Node(arr[0]);
    Node *current = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        current->next = temp;
        current = temp;
    }
    return head;
}

void  printLinkedList(Node*  head){
    Node* temp = head ;
    while (temp != NULL ){
        cout <<temp->data <<" ";
        temp = temp->next ;
    }
    cout << endl ;
}

int main()
{
    vector<int> arr{};
    cout << "Enter the Number of NOde of Linked List : - ";
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    Node *head = convertArrayToLinkedList(arr);
    Node* middle = head->middleOfLinkedList(head);
    printLinkedList(middle);
}
