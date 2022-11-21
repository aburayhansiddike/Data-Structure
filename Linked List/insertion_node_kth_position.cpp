#include<iostream>
using namespace std ;


int listSize = 0 ;
struct Node{
      int data  ;
      struct Node* nextNodePointer ;
} ;
struct Node* head = NULL ;
struct Node* getNewNode(){
      struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)) ;
      
      return newNode ;
}
void insertInLinkList(int item , int position){
       struct Node* newNode = getNewNode() ;
       newNode -> data = item ;
       newNode -> nextNodePointer = NULL ;

       if(head == NULL){
             head = newNode ;
       }else if(position == 1){
               newNode -> nextNodePointer = head ;
               head = newNode ;
       }else{
             struct Node* traverse = head ;
             int currentPosition = 1 ;
             while(currentPosition < (position - 1)){
                   currentPosition = currentPosition + 1 ;
                   traverse = traverse -> nextNodePointer ;
             }
             newNode -> nextNodePointer = traverse -> nextNodePointer;
             traverse -> nextNodePointer = newNode ;

       }
       listSize += 1 ;
}

void printLinkList(){
       struct Node* traverse = head ;
       while(traverse != NULL){
             cout << traverse -> data  << ' ' ;
             traverse = traverse -> nextNodePointer ;
       }
       cout << '\n' ;
}
int main(){

       cout << "Please read the operation carefully !\n" ;
       
       while(1){
              cout << "Your list is : " ;
              printLinkList() ;
              cout << "Your list size is : " << listSize << '\n' ;
              cout << "Press I and data and k to insert a node in k position\n" ;
              cout << "Press E to exit the program \n" ;

              char operation ;
              cin >> operation ;

              if(operation == 'I'){
                    int data  , k ;
                    cin  >> data >> k ;
                    if(k - 1 > listSize){
                          cout << "Your position is invalid !\n" ;
                          continue ;
                    }
                    insertInLinkList(data , k) ;
              }else {
                     return 0 ;
              }
       }
       return 0 ;
}