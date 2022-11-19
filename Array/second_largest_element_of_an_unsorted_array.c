#include<stdio.h>


int FindSecondLargestElement(int a[] , int n){

       if(n < 2){
             return -1 ;
       }
       int firstMaxElement = 0 , secondMaxElement = 0 ;

       for(int i = 0 ;i < n ; i += 1){
              if(a[i] > firstMaxElement){
                    firstMaxElement = a[i];
              }
       }

       for(int i = 0 ; i < n ;  i += 1){
             if(a[i] > secondMaxElement && a[i] <= firstMaxElement){
                    secondMaxElement = a[i];
             }
       }

       return secondMaxElement ;
       
}
int main(){
      int n , a[1000] ;
      printf("Number of elements of the array : ");

      scanf("%d" , &n);

      printf("Elements of the array : ");
      
      for(int  i = 0 ; i < n ; i += 1){
            scanf("%d" , &a[i]);
      }

      int secondLargestElement = FindSecondLargestElement(a , n);

      if(secondLargestElement == -1){
           printf("The input is not valid\n");
      }else{
            printf("The second largest element is : %d\n" , secondLargestElement);
      }

      return 0 ;
}
