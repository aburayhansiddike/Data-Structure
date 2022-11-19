#include<stdio.h>



void deleteDuplicateElements(int array[] , int *n){
       for(int i = 0 ; i < *n ; i += 1){
              for(int j = i + 1; j < *n ; j += 1){
                    if(array[i] == array[j]){
                          for(int k = j ; k < *n - 1 ; k += 1){
                                 array[k] = array[k + 1];
                          }

                          *n -= 1;
                           j -= 1;
                    }
              }
       }
}
int main(){

    int n , array[10000];
    printf("Number of element of an array : ");
    scanf("%d" , &n);

    printf("Elements of the array : ");
    for(int i = 0 ; i < n ; i += 1){
          scanf("%d" , &array[i]);
    }

    deleteDuplicateElements(array , &n);

    printf("After deleting the duplicates elements : ");
    for(int i = 0 ; i < n ; i += 1){
        printf("%d " , array[i]);
    }
    printf("\n");

    return 0 ;
}