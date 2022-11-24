#include<iostream>
#include<queue>
using namespace std ;

#define M  10000
int binaryTree[M] ;

void makeTree(int item){
       queue<int > nodes ;
       int root = 0 ;

       if(binaryTree[root] == -1){
             binaryTree[root] = item ;
             return ;
       }

       nodes.push(root) ;
       while(nodes.size() != 0){
             int currnetNode = nodes.front() ;
             nodes.pop() ;

             int left = 2 * currnetNode + 1 , right = 2 * currnetNode + 2 ;
             if(binaryTree[left] == -1){
                    binaryTree[left] = item ;
                    break ;
             }else if(binaryTree[right] == -1){
                    binaryTree[right] = item ;
                    break ;
             }else{
                   nodes.push(left) ;
                   nodes.push(right) ;
             }
       }
}

void printTreePreOrder(int currentRoot){
        if(binaryTree[currentRoot] == -1){
              return  ;
        }
        cout << binaryTree[currentRoot] << ' ' ;
        printTreePreOrder(2 * currentRoot + 1) ;
        printTreePreOrder(2 * currentRoot + 2) ;
}

void printTreeInOrder(int currentRoot){
        if(binaryTree[currentRoot] == -1){
              return  ;
        }
        printTreeInOrder(2 * currentRoot + 1) ;
        cout << binaryTree[currentRoot] << ' ' ;
        printTreeInOrder(2 * currentRoot + 2) ;
}

void printTreePostOrder(int currentRoot){
        if(binaryTree[currentRoot] == -1){
               return  ;
        }

        printTreePostOrder(2 * currentRoot + 1) ;
        printTreePostOrder(2 * currentRoot + 2) ;
        cout << binaryTree[currentRoot] << ' ' ;

}
int main(){
        for(int i = 0 ; i < M ; i += 1){
               binaryTree[i] = -1 ;
               //very indeies contains null 
        }

        int numberOfElement = 6 ;

        int a[] = {5 , 6 , 1 , 2 , 4 , 3} ;
        for(int i = 0 ; i < numberOfElement ; i += 1){
              makeTree(a[i]) ;
        }

        int root = 0 ;
        cout << "Pre-order : " ;
        printTreePreOrder(root) ;
        cout << '\n' ;

        cout << "In-order : " ;
        printTreeInOrder(root) ;
        cout << '\n' ;

        cout << "Pos-order : " ;
        printTreePostOrder(root) ;
        cout << '\n' ;

        return 0 ;
}