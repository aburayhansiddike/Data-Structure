#include<iostream>
using namespace std ;


int findMaxValueOfArray(int array[] , int numberOfElement){

      int maxValue = -10000 ;
      for(int index = 0 ; index < numberOfElement ; index += 1){
             if(array[index] > maxValue){
                   maxValue = array[index] ;
             }
      }

      return maxValue  ;
}
int main(){
      int numberOfElement  ;
      cout << "Enter the number of element of an array : " ;
      cin >> numberOfElement ;

      int array[1000] ;

      for(int index = 0 ; index < numberOfElement ; index += 1){
              cin >> array[index] ;
      }

      int maximumValue = findMaxValueOfArray(array  , numberOfElement) ;
      cout << "The maximum value of the array is : " << maximumValue << '\n' ;

      return 0 ;
}