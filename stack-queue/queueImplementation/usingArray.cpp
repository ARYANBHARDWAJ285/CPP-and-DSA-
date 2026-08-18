#include<iostream>
using namespace  std ;

class  queueArray{
   private:
    static const int size = 10;
    int arr[size];
    int front = -1;
    int back = -1;
    int currsize = 0;

    public :

    void push (int x ){
        if(currsize == size){
            cout << "Queue is Full " << endl;
            return ;
        }
        if( currsize  == 0 ){
            front = 0 ;
            back = 0 ;

        }else{
            back = (back +1 )% size ;
        }
        arr[back] = x ;
        currsize += 1 ;
        cout << x << " added to Queue." << endl;
    }

    void pop(){
        if( currsize == 0) {
            cout << "Queue is Empty  : " << endl ;
            return  ;
        }
        
        if( currsize == 1){
            front = -1 ;
            back = -1 ;
        }else {
            front = (front +1 )% size ;
        }
        currsize -= 1 ;
        cout << arr[front] << " removed from Queue." << endl;
    }

    int getFront(){
        if(currsize == 0 ){
            cout << "Queue is Empty!" << endl;
            return -1 ;
            
        }
        return arr[front];
    }
    int getSize(){
        return  currsize ;
    }
    void printElement() {
        if (currsize == 0) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue Elements (Front -> Back): ";
        for (int i = 0; i < currsize; i++) {
            int index = (front + i) % size;
            cout << arr[index] << " ";
        }
        cout << endl;
    }
};

int main (){
    queueArray obj ;
    int x;
    int choice;
    while (true)
    {
        cout << "\n -----> Menu <---------" << endl;
        cout << "1 ----> Add an Element into the stack <--- " << endl;
        cout << "2 -----> Remove an element from the stact <--- " << endl;
        cout << "3 ----> To see the front element in the stack <----" << endl;
        cout << "4 ---> To see the  Element <--- " << endl;
        cout << "5 ---> To see the size <---- " << endl;
        cout << "6 ----> Exit <---- " << endl;
        cout << "Enter your choices " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the Element : ";
            cin >> x;
            obj.push(x);
            break;

        case 2:
            obj.pop();
            break;

        case 3:
            cout << "front Element is : " << obj.getFront() << endl;
            break;

        case 4:
            obj.printElement();
            break;

        case 5:
            cout << "Size of Queue: " << obj.getSize() << endl;
            break;
        case 6:
            cout << "Exit ";
            return 0;
            break;

        default:
            cout << "Please Enter the valid input : " << endl;
            break;
        }
    }
    return 0 ;
}

