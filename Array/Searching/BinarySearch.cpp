// The array must be sorted 

#include<iostream>
using namespace std ;

const int maxArraySize = 1000 ;

int binarySearch(int array[] , int numberOfElement , int item ){
       int position = -1  ;

       int left = 0 , right = numberOfElement - 1 ;
       while(left <= right){
              int middle = (left + right) / 2 ;

              if(array[middle] == item){
                   position = middle ;
                   break ;
              }else if(array[middle] > item){
                    right = middle - 1 ;
              }else{
                    left = middle + 1 ;
              }
       }

       return position ;
}
int main(){
        int numberOfElement ;
        cout << "Enter the number of element : " ;
        cin >> numberOfElement ;

        int array[maxArraySize] ;
        
        for(int i = 0 ; i < numberOfElement ; i += 1){
              cin >> array[i] ;
        }

        int searchValue ;
        cout << "Enter the search value : " ;
        cin >> searchValue ;

        int positionOfSearchedValue = binarySearch(array , numberOfElement, searchValue ) ;

        if(positionOfSearchedValue == -1){
               cout << "The value is not found !\n" ;
        }else{
             cout << "The value is founded and its position is : " << positionOfSearchedValue << '\n' ;
        }

        return 0 ;
}