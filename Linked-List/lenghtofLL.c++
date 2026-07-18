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
};

Node* ConvertArrayLL (vector<int> &arr){
    Node*  head =  new Node (arr[0] );
    Node*  current = head ;
    for( int i = 1 ; i < arr.size() ; i++){
        Node* temp =  new Node(arr[i]);
        current->next =  temp ;
        current =  temp ;
    }
    return  head ;
}
int lengthLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    
    while (temp)
    {
        temp = temp->next;
        count++;
        
    }
    return count;
}

int main()
{
    vector<int> arr = {10, 16, 13, 16, 49};
    Node *headLL = ConvertArrayLL(arr);
    Node*  temp = headLL ;
    cout << lengthLL(headLL);
}
