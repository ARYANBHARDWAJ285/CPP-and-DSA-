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

Node* insertPositon(Node*  head , int val , int value){
    if(head == NULL ){
         return  NULL ;
    }
    if(head->data == value ){
        return  new Node(val , head );
    }
    Node* temp =  head ;
    while(temp->next != NULL){
        if(temp->next->data == value){
            Node*  newNode =  new Node(val);
            newNode->next = temp->next ;
            temp->next  = newNode ;
            break ;
        }
        temp = temp->next ;
    }
    return head ;
}

// Another Method is :- 
/*
   Node* insertPositon(Node*  head , int val){
   return new Node(val , head) ;
   
   }

*/

int main (){
    vector<int> arr = { 10 ,11,12,14,15,16,17,18,19};
    Node* head = convertArrayToLL(arr);
    head = insertPositon(head , 8 , 20 );

    // head = new Node( 100 , head);
    printLL(head);
}

/*
  if the value is  not there 
  then 
  bool  found =  false  ;
loop ->  found = 1 ;

before  return head  
if(found ==  false){
    value not there 
}
*/
