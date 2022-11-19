#include<bits/stdc++.h>
using namespace std ;

const int arrayMaxSize = 1000 ;

void bubbleSort(int array[] , int numberOfelement){
       for(int i = 0 ; i < numberOfelement - 1 ; i += 1){
            for(int j = 0 ; j < numberOfelement - i - 1 ; j += 1){
                   if(array[j ] > array[j + 1]){
                         int temp = array[j] ;
                         array[j] = array[j + 1] ;
                         array[j + 1] = temp ;
                   }
            }
       }
}
int main(){
       int numberOfElement  ;
       int array[arrayMaxSize] ;
       cout << "Input the number of element : " ;
       cin >> numberOfElement ;

       for(int i = 0 ; i < numberOfElement ; i += 1){
             cin >> array[i] ;
       }


       bubbleSort(array , numberOfElement) ;

       for(int i = 0 ; i < numberOfElement ; i += 1){
             cout << array[i] << ' ' ;
       }
       cout << '\n' ;

       return 0 ;
}