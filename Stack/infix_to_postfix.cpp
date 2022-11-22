#include<iostream>
#include<stack>

using namespace std ;

int getPrecedence(char sign){
      if(sign == '^') return 3 ;
      else if(sign == '/' or sign == '*') return 2 ;
      else if(sign == '+' or sign == '-') return 1 ;
      return 0 ;
}
string getInfixToPostfix(string infix){
        stack<char > valueStack ;
        string postfix = "" ;

        for(int i = 0 ; i < infix.size() ; i += 1){
                char character = infix[i] ;

                if(character == '(') valueStack.push(character) ;
                else if(character == ')'){
                        while(!valueStack.empty() and valueStack.top() != '('){
                               postfix += valueStack.top() ;
                               valueStack.pop() ;
                        }
                        valueStack.pop() ;
                }else if((character >= '0' and character <= '9') or (character >= 'A' and character <= 'Z') or (character >= 'a' and character <= 'z')){
                        postfix += character ;
                }else{
                      while(!valueStack.empty() and getPrecedence(character) <= getPrecedence(valueStack.top())){
                           postfix += valueStack.top() ;
                           valueStack.pop() ;
                      }

                      valueStack.push(character) ;
                }
        }

        while(!valueStack.empty()){
               postfix += valueStack.top() ;
               valueStack.pop() ;
        }

        return postfix ;
}
int main(){
      string infix = "K+L-M*N+(O^P)*W/U/V*T+Q" ;
      string postfix = getInfixToPostfix(infix) ;
      cout << postfix << '\n' ;
      return 0 ;
}