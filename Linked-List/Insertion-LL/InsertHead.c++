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

void printLL (Node*  head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next ;
    }
    cout << endl ;
}

Node* insertHead(Node*  head , int val){
    Node* temp = new Node(val , head);
    return  temp ;
}

// Another Method is :- 
/*
   Node* insertHead(Node*  head , int val){
   return new Node(val , head) ;
   
   }

*/

int main (){
    vector<int> arr = { 16 , 15 ,49, 16 ,48,56,23,89};
    Node* head = convertArrayToLL(arr);
    head = insertHead(head , 18);

    // head = new Node( 100 , head);
    printLL(head);
}
