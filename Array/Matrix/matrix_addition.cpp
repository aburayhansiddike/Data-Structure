#include<iostream>
using namespace std ;

int matrix1[100][100] , matrix2[100][100] ;

int main(){

    int row1 , col1 , row2 , col2 ;
    int newMatrix[100][100] ;

    cout << "Enter the first matrix : \n" ;
    cin >> row1 >> col1  ;
    for(int i = 0 ; i < row1 ; i += 1){
        for(int j = 0 ; j < col1 ; j += 1){
            cin >> matrix1[i][j] ;
        }
    }

    cout << "Enter the second matrix : \n" ;
    cin >> row2 >> col2 ;

    for(int i = 0 ; i < row2 ; i += 1){
        for(int j = 0 ; j < col2 ; j += 1){
             cin >> matrix2[i][j] ;
        }
    }

    for(int i = 0 ; i < row1 ; i += 1){
        for(int j = 0 ; j < col1 ; j += 1){
            newMatrix[i][j] = matrix1[i][j] + matrix2[i][j] ;
        }
    
    }

    cout << "New matrix is : \n" ;

    for(int i = 0 ; i < row1 ; i += 1){
        for(int j = 0 ; j < col1 ; j += 1){
            cout << newMatrix[i][j] << ' ' ;
        }
        cout << '\n' ;
    }
    return 0 ;

}  