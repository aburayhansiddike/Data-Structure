#include<iostream>
using namespace std ;

int matrix[100][100] ;

void copy2DTo1D(int array[] , int *numberOfElement , int row , int col){
       int totalElement = 0 ;
       for(int i = 0 ; i < row ; i += 1){
            for(int j = 0 ; j < col ; j += 1){
                   array[totalElement] = matrix[i][j] ;
                   totalElement += 1  ;
            }
       }

       *numberOfElement = totalElement ;
}
int main(){

    int row , col ;
    cout << "Input the row and col : " ;
    cin >> row >> col ;

    for(int i = 0 ; i < row ; i += 1){
        for(int j = 0 ; j < col ; j += 1){
            cin >> matrix[i][j] ;
        }
    }


    int array[10000] , numberOfElement = 0 ;
    copy2DTo1D(array , &numberOfElement , row , col) ;

    /*
    print the k the row
    int k ;
    cin >> k ;

    for(int i = (k - 1) * col ; i < k * col ; i += 1){
          cout << array[i] << ' ' ;
    }
    cout << '\n' ;
    */

    return 0 ;

}  for(int i = 2 * col ;  i < 3 * col ; i += 1 ){
           cout << array[i] << ' ' ;
    }
    cout  << '\n' ;