#include<iostream>
using namespace std ;

int getFactorialValue(int value){
       if(value == 0) return 1 ;
       return value * getFactorialValue(value - 1) ;
}
int main(){
      cout << "Enter the value : " ;
      int value ;
      cin >> value ;

      int factorialValue = getFactorialValue(value) ; 
      cout << "Factorial value is : " << factorialValue << '\n' ;

      return 0 ;
}