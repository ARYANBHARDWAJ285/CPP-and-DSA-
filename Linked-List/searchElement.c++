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
bool searchElement(Node *head, int val)
{

    Node *temp = head;
    while (temp)
    {
        if (temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    vector<int> arr = {11, 6, 49, 48, 46};
    Node *headLL = convertArryatoLL(arr);
    cout << searchElement(headLL, 5);
}
