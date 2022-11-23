#include<iostream>
using namespace std ;


int getFibonacciValue(int value){
     if(value == 1) return 1 ;
     if(value == 2) return 1 ;

     return getFibonacciValue(value - 1) + getFibonacciValue(value - 2) ;
}
int main(){
      int value ;
      cout << "Enter the value : " ;
      cin >> value ;

      int fibonacciValue = getFibonacciValue(value) ;
      cout << fibonacciValue << '\n' ;
      

      return 0 ;
}