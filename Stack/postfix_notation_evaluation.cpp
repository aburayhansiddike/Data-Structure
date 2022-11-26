#include<iostream>
#include<stack>
using namespace std ;


int exponent(int base , int power){
      int value = 1 ;
      for(int i = 1 ; i <= power ; i += 1){
           value = value * base ;
      }
      return value ;
}
int getCalculatedValue(int firstOperator , int secondOperator , char sign){
      if(sign == '+') return (firstOperator + secondOperator) ;
      if(sign == '-') return (firstOperator - secondOperator ) ;
      if(sign == '*') return (firstOperator * secondOperator ) ;
      if(sign == '/') return (firstOperator / secondOperator) ;
      if(sign == '^') return exponent(firstOperator , secondOperator) ;
      return 0 ;
}

int posfixEvaluation(string expression){
       stack<int > answer ;
       for(int i = 0 ; i < expression.size() ; i += 1){

             if(expression[i] >= '0' and expression[i] <= '9'){
                  answer.push(expression[i] - '0') ;
             }else{
                   int firsOperand = answer.top() ;
                   answer.pop() ;
                   int secondOperand = answer.top() ;
                   answer.pop() ;

                   int calculatedValue = getCalculatedValue(secondOperand , firsOperand , expression[i] ) ;
                   answer.push(calculatedValue) ;
             }
       }

       return answer.top() ;
}
int main(){
       cout << posfixEvaluation("46+2/5*7+") << '\n' ;
       return 0 ;
}