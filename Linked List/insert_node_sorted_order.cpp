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
void insertNodeSortedOrder(int item){
       struct Node* newNode = getNewNode() ;
       newNode -> data = item ;
       newNode -> nextNodePointer = NULL ;

       if(head == NULL or newNode -> data < head -> data){
              newNode -> nextNodePointer = head ;
              head = newNode ;
       }else{
            struct Node* previous = head ;
            struct Node* traverse = previous -> nextNodePointer ;

            while(traverse != NULL and  newNode -> data > traverse -> data){
                  previous = traverse ;
                  traverse = traverse -> nextNodePointer ;
            }
            previous -> nextNodePointer = newNode ;
            newNode -> nextNodePointer = traverse ;
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
       cout << "------------Welcome------------\n" ;
       for(   ;     ;   ){
             cout << "Your list is : " ;
             printLinkList() ;
             cout << "Your list size is : " << listSize << '\n' ;
             cout << "To insert a value sorted list press 'I' and value \n" ;
             cout << "To exit press 'E'\n" ;
             char operation ;
             cin >> operation ;
             if(operation == 'E'){
                   free(head) ;
                   break ;
             }
             int data ;
             cin >> data ;
             insertNodeSortedOrder(data) ;
       }
       return 0 ;
}