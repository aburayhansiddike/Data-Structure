#include<iostream>
using namespace std ;
#define M 1000 

int maxHeapArray[M] , maxHeapSize = 0 ;

void insert(int item){
        int index = maxHeapSize ;
        maxHeapArray[index] = item ;

        if(maxHeapSize == 0){
               maxHeapArray[0] = item ;
               maxHeapSize = maxHeapSize + 1 ;
               return ;
        }


        while(index != 0 ){
              if(item > maxHeapArray[index / 2]){
                    swap(maxHeapArray[index] , maxHeapArray[index / 2]) ;
                    index = index / 2 ;
              }else break ;
        }
        maxHeapSize = maxHeapSize + 1 ;
}
void deletionAnElement(){
         maxHeapSize = maxHeapSize - 1 ;
         swap(maxHeapArray[0] , maxHeapArray[maxHeapSize]) ;

         
         int  root = 0 ;
         while(true){
                int greatest = root ;
                int left = 2 * root + 1 ;
                int right = 2 * root + 2 ;

                if(left < maxHeapSize and right < maxHeapSize){
                         int mxValue = max(maxHeapArray[left] , maxHeapArray[right]) ;
                         if(mxValue == maxHeapArray[left] and maxHeapArray[left] > maxHeapArray[root]){
                                greatest = left ;
                         }else {
                                if(maxHeapArray[right] > maxHeapArray[root]){
                                      greatest = right ;
                                }
                         }
                }else if(left < maxHeapSize){
                         if(maxHeapArray[left] > maxHeapArray[root]){
                                greatest = left ;
                         }
                }else {
                       if(right < maxHeapSize){
                             if(maxHeapArray[right] > maxHeapArray[root]){
                                    greatest =  right ;
                             }
                       }
                }
                if(greatest != root) {
                       swap(maxHeapArray[greatest] , maxHeapArray[root]) ;
                       root = greatest ;
                }else break ;

         }
}
int main(){
      cout << "Number of element : " ;
      int numberOfElement ;
      cin >> numberOfElement ;

      for(int i = 0 ; i < numberOfElement ; i += 1){
              int item ;
              cin >> item ;
              insert(item) ;
      }

      for(int i = 0 ; i < maxHeapSize ; i += 1){
            cout << maxHeapArray[i] << ' ' ;
      }
      cout << '\n' ;

      deletionAnElement() ;
      deletionAnElement() ;
      for(int i = 0 ; i < maxHeapSize ; i += 1){
            cout << maxHeapArray[i] << ' ' ;
      }
      cout << '\n' ;
      return 0 ;
}