#include<iostream>
using namespace std ;

#define maxSize 10000 
int bstArray[maxSize] ;


void insert(int item){
       int index = 1 ;
       while(bstArray[index] != -maxSize){
              if(item > bstArray[index]){
                   index = 2 * index +  1 ;
              }else{
                    index = 2 * index ;
              }
       }
       bstArray[index] = item ;

}
bool isFound(int item){
      int index = 1 ;
      while(bstArray[index] != -maxSize){
             if(bstArray[index] == item){
                  return true ;
             }else if(item > bstArray[index]){
                   index = 2 * index + 1 ;
             }else {
                    index = 2 * index ;

             }
      }

      return false ;
}
int getPosition(int item){
       int index = 1  , position = -1 ;
       while(bstArray[index] != -maxSize){
              if(item == bstArray[index]){
                    position = index ;
                    break ;
              }else if(item > bstArray[index]){
                    index = 2 * index + 1 ;
              }else {
                     index = 2 * index ;
              }
       }
       return position ;
}
int main(){
        for(int i = 0 ; i < maxSize ; i += 1 ){
               bstArray[i] = -maxSize ;
        }

        int n ;
        cout << "Number of element : " ;
        cin >> n ;
        for(int i = 0 ; i < n ; i += 1){
              int item ;
              cin >> item ;
              if(isFound(item)){
                    cout << item << " is already inserted and its postion is : " << getPosition(item) << '\n' ;
              }else{
                   insert(item) ;
              }
        }

        // for(int i = 1 ;  i < maxSize ; i += 1){
        //        if(bstArray[i] != -maxSize){
        //              cout << i << ' ' << bstArray[i] << '\n' ;
        //        }
        // }

        return 0 ;
}