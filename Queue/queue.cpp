#include<iostream>
using namespace std ;
#define maxSize 4


class queue{
       int* array ;
       int front ; 
       int back ;
       int queueSize ;

       public :
       queue(){
              array = new int[maxSize] ;
              front = -1 ;
              back = -1 ;
              queueSize = 0 ;
       }

       void push(int item){
              if((front == 0 and back == maxSize - 1) or (front == back + 1)){
                     cout << "Queue is full \n" ;
                     return ;
              }

              if(front == -1) front = 0 ;
              back = back + 1 ;
              if(back == maxSize) back = 0 ;

              array[back] = item ;
       }

       void pop(){
             if(front == -1){
                   cout << "Queue is underflow !\n" ;
                   return ;
             }
             if(front == back){
                    front = -1 ;
                    back  = -1 ;
             }else{
                   if(front == maxSize - 1) front = 0 ;
                   else front = front + 1 ;
             }
       }
       void printQueue(){
             int firstIndex = front , backIndex = back ;
             if(firstIndex <= backIndex){
                    while(firstIndex <= backIndex){
                           cout << array[firstIndex] << ' ' ;
                           firstIndex = firstIndex + 1 ;
                    }
             }else {
                    while(firstIndex < maxSize){
                           cout << array[firstIndex] << ' ' ;
                           firstIndex = firstIndex + 1 ;
                    }
                    firstIndex = 0 ;
                    while(firstIndex <= backIndex){
                           cout << array[firstIndex] << ' ' ;
                           firstIndex = firstIndex + 1 ;
                    }
             }
             cout << '\n' ;
       }
} ;


int main(){
       cout << "----------------Welcome----------------\n" ;
       queue q ;
       for(    ;     ;   ){
              cout << "Your queue is : " ;
              q.printQueue() ;
              cout << "To push element type 1 and value : " << '\n' ;
              cout << "To pop element type 2 \n" ;
              cout << "To exit type 4 \n" ;

              int operation ;
              cin >> operation ;

              if(operation == 4){ 
                    exit(0) ;
              }

              if(operation == 1){
                    int item ;
                    cin >> item  ;
                    q.push(item) ;
                    continue ;
              }

              if(operation == 2){
                     q.pop() ;
                     continue;
              }
       }

       return 0 ;
}