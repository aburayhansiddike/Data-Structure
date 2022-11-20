

#include<iostream>
using namespace std ;

const int maxArraySize = 1000 ;

int linearSearch(int array[] , int numberOfElement , int item){
       int position = -1 ;

       for(int i = 0  ;  i < numberOfElement ; i += 1){
             if(array[i] == item){
                   position = i ;
                   break ;
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

        int positionOfSearchedValue = linearSearch(array , numberOfElement, searchValue ) ;

        if(positionOfSearchedValue == -1){
               cout << "The value is not found !\n" ;
        }else{
             cout << "The value is founded and its position is : " << positionOfSearchedValue << '\n' ;
        }

        return 0 ;
}