#include<iostream>
using namespace std ;


int findMinValueOfArray(int array[] , int numberOfElement){

      int minValue = 10000 ;
      for(int index = 0 ; index < numberOfElement ; index += 1){
             if(array[index] < minValue){
                   minValue = array[index] ;
             }
      }

      return minValue  ;
}
int main(){
      int numberOfElement  ;
      cout << "Enter the number of element of an array : " ;
      cin >> numberOfElement ;

      int array[1000] ;

      for(int index = 0 ; index < numberOfElement ; index += 1){
              cin >> array[index] ;
      }

      int minimumValue = findMinValueOfArray(array  , numberOfElement) ;
      cout << "The minimum value of the array is : " << minimumValue << '\n' ;

      return 0 ;
}