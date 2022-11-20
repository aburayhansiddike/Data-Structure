#include<iostream>
using namespace std ;

const int maxArraySize = 100 ;

void margeTowArray(char newArray[] , int *numberOfElementOfNewArray , char firstArray[] , int numberOfElementOfFirstArray , char secondArray[] , int numberOfElementOfSecondArray){
      for(int i = 0 ; i < numberOfElementOfFirstArray ; i += 1){
            newArray[i] = firstArray[i] ;
      }

      for(int i = numberOfElementOfFirstArray ; i < numberOfElementOfFirstArray + numberOfElementOfSecondArray ; i += 1){
           newArray[i] = secondArray[i - numberOfElementOfFirstArray] ;
      }

      *numberOfElementOfNewArray = numberOfElementOfFirstArray + numberOfElementOfSecondArray ;

}
int main(){
       int numberOfElementOfFirstArray , numberOfElementOfSecondArray ;

       char firstArray[maxArraySize] , secondArray[maxArraySize] ;

       cout << "Enter the number of first array element : " ;
       cin >> numberOfElementOfFirstArray ;

       for(int i = 0 ; i < numberOfElementOfFirstArray ; i += 1){
             cin >> firstArray[i] ;
       }

       cout << "Enter the number of secondArray element : " ;
       cin >> numberOfElementOfSecondArray ;

       for(int i = 0 ; i < numberOfElementOfSecondArray ; i += 1){
             cin >> secondArray[i] ;
       }

       char newArray[10 * maxArraySize] ;
       int  numberOfElementOfNewArray ;

       margeTowArray(newArray , &numberOfElementOfNewArray , firstArray , numberOfElementOfFirstArray , secondArray , numberOfElementOfSecondArray) ;
       
       for(int i = 0 ; i < numberOfElementOfNewArray ; i += 1){
             cout << newArray[i] << ' ' ;
       }

       cout << '\n' ;
}