#include<iostream>
using namespace std ;

struct Node{
      int data  ;
      struct Node* nextNodePointer ;
} ;
struct Node* head = NULL ;
struct Node* getNewNode(){
      struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)) ;
      
      return newNode ;
}
void insertInLinkList(int item){
       struct Node* newNode = getNewNode() ;
       newNode -> data = item ;
       newNode -> nextNodePointer = NULL ;

       if(head == NULL){
             head = newNode ;
       }else{
            struct Node* traverse = head ;
            while(traverse -> nextNodePointer != NULL){
                   traverse = traverse -> nextNodePointer ;
            }
            traverse -> nextNodePointer = newNode ;
       }
}

void printLinkList(){
       struct Node* traverse = head ;
       while(traverse != NULL){
             cout << traverse -> data  << ' ' ;
             traverse = traverse -> nextNodePointer ;
       }
       cout << '\n' ;
}
void deleteLastNode(){
       if(head == NULL){
             cout << "Your list is empty !" ;
             return  ;
       }

       if(head -> nextNodePointer == NULL){
             struct Node* temporary = head ;
             head = NULL ;
             free(temporary) ;
             return ;
       }

       struct Node* previous = head ;
       struct Node* temporary = previous -> nextNodePointer ;
       while(temporary -> nextNodePointer != NULL){
              temporary = temporary -> nextNodePointer ;
              previous = previous -> nextNodePointer ;
       }
       previous -> nextNodePointer = NULL ;
       free(temporary) ;
}
int main(){
       int numberOfElement ;
       cout << "Enter the number of element to insert : " ;
       cin >> numberOfElement ;

       for(int i = 0 ; i < numberOfElement ; i += 1){
             int item ;
             cin >> item ;
             insertInLinkList(item) ;
       }

       printLinkList() ;
       deleteLastNode() ;
       printLinkList() ;

       return 0 ;
}