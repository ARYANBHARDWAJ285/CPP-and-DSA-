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

Node *convertArryatoLL(vector<int> &arr)
{
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

int main()
{
    vector<int> arr = {11, 6, 49, 48, 46};
    Node *headLL = convertArryatoLL(arr);

    // Traversal  Of Linked List 
    
    Node *tempLL = headLL;
    while (tempLL)
    {
        cout << tempLL->data << " ";
        tempLL = tempLL->next;
    }
}
