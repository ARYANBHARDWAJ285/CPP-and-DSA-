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

    /*

    node*  tail =  head ;
    while (tail->next != NULL ){

        tail = tail->next ;

    }

    node*  newTail =  tail->back ;
    tail->back =  nullpts ;
    newTail -> next =  nullptr ;
    delete tail ;
    return head ;

    */
}

int main()
{
    vector<int> arr = {10, 12, 14, 15};
    Node *head = convertArraytoDLL(arr);
    head = deleteTail(head);
    printDLL(head);
    return 0;
}