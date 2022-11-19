#include<iostream>
using namespace std ;
const int maxArraySize = 1000 ;

int array[maxArraySize] ;
int numberOfElement ;
void bubbleSort(){
        for(int i = 0 ; i < numberOfElement - 1 ; i += 1){
               for(int j = 0 ; j < numberOfElement - i - 1 ; j += 1){
                      if(array[j] > array[j + 1]){
                             int temporary = array[j] ;
                             array[j] = array[j + 1]  ;
                             array[j + 1] = temporary ;
                      }
               }
        }
}
void insertionInSortedArray(int item){
       int position = -1 ;
       for(int i = 0 ; i < numberOfElement ; i += 1){
              if(array[i] > item){
                     position = i ;
                     break ;
              }
       }

       if(position == - 1){
            if(array[numberOfElement - 1] <= item){
                 position = numberOfElement ;
            }
       }

       if(position == -1){
               for(int i = numberOfElement ; i >= 1 ; i -= 1){
                      array[i] = array[i - 1] ;
               }
               array[0] = item ;
       }else if(position == numberOfElement){
             array[numberOfElement] = item ;
       }else{

             for(int i = numberOfElement ; i >= position + 1 ; i -= 1){
                   array[i] = array[i - 1] ;
             }
             array[position] = item ;
       }

       numberOfElement = numberOfElement +  1 ;
}
int main(){
      cout << "Enter the number of element : " ;
      cin >> numberOfElement ;

      for(int index = 0 ; index < numberOfElement ; index += 1){
            cin >> array[index] ;
      }

      bubbleSort() ;
      int insertedValue ;
      cin >> insertedValue ;

      insertionInSortedArray(insertedValue) ;
      for(int i = 0 ;i < numberOfElement ; i += 1){
            cout << array[i] << ' ' ;
      }
      cout << '\n' ;

      
      return 0 ;
}