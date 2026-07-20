#include<iostream>
#include<vector>
using namespace std  ;

class Node {
    public :
    int data  ;
    Node* next ;
    
    Node(int data1 , Node* next1){
        data =  data1 ;
        next =  next1 ;
    }

    Node (int data1){
        data  = data1 ;
        next =  nullptr ;
    }

};

Node* convertArrayToLL(vector<int> &arr){
    Node* head = new Node (arr[0]);
    Node* current = head ;

    for(int i = 1  ; i < arr.size() ; i++){
        Node*  temp = new Node (arr[i], nullptr );
        current->next  = temp  ;
        current  =  temp ;
    }
    return  head ;
}

Node* deleteAtPosition(Node* head , int  value ){
    if(head == NULL ) return  head ;

    if(head->data == value ){
        Node*  temp =  head ;
        head = head->next ;
        free(temp);
        return head ;
    }

    Node* temp =  head ;
    Node* prev = nullptr ;

    while (temp != NULL ){
        if(temp->data == value ){
            prev->next = prev->next->next ;
            free(temp);
            break ;
        }
        prev = temp ;
        temp = temp->next ;
    }
    return head  ;
}

void printLL (Node*  head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next ;
    }
    cout << endl ;
}

int main (){
    vector<int> arr = { 1,2,3,4,5};
    Node* head = convertArrayToLL(arr);
    head = deleteAtPosition(head , 1);
    printLL(head);
}
