#include<iostream>
using namespace std ;
const int maxSize = 1000 ;


int array[maxSize] ;
int top = -1 , sizeOfStack = 0 ;

bool isFull(){
     if(top == maxSize - 1) return true ;
     else return false ;
}

bool isEmpty(){
     if(top  == -1) return true ;
     else return false ;
}

int getTop(){
      return array[top] ;
}

void push(int item){
       top = top + 1 ;
       array[top ] = item ;
      
}
void pop(){
     top = top - 1 ;
}
void printStack(){
      for(int i = 0 ; i <= top ; i += 1){
            cout << array[i] << ' ' ;
      }
      cout << '\n' ;
}
int main(){
       cout << "--------------- Stack ---------------\n" ;
       for(     ;        ;    ){
              cout << "\n" ;
              cout << "Your stack is : " ;
              printStack() ;

              cout << "To exit type 4 ! \n" ;
              cout << "Top pop an element type 1 \n"  ;
              cout << "To push  element type 2 and value \n" ;
              cout << "To get top element type 3 \n" ;

              int operation ;
              cin >> operation ;

              if(operation ==  4 ){
                     break ;
              }

              if(operation == 1){
                     if(isEmpty()){
                           cout << "Your stack is empty !\n" ;
                     }else{
                           pop() ;
                     }
                     continue ;
              }

              if(operation == 2){
                    int value ;
                    cin >> value ;
                    if(top == maxSize){
                         cout << "Your stack is full !\n" ;
                    }else{
                          push(value) ;
                    }
                    continue ;
              }

              if(operation == 3 ){
                    if(isEmpty()){
                           cout << "Your stack is empty !\n" ;
                    }else{
                           cout << "Top element is : " << getTop() << '\n' ;
                    }
                    continue ;
              }

              cout << "Your operation is invalid !\n" ;
       }

       return 0 ;
}