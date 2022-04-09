#include<stdio.h>


int FindSecondSmallestElement(int a[] , int n){

       if(n < 2){
             return -1 ;
       }
       int firstSmallElement = 10000000 , secondSmallElement = 10000000 ;

       for(int i = 0 ;i < n ; i += 1){
             if(a[i] < firstSmallElement){
                   firstSmallElement = a[i];
             }
       }

       for(int i = 0 ; i < n ; i += 1){
            if(a[i] > firstSmallElement && a[i] < secondSmallElement){
                 secondSmallElement = a[i];
            }
       }
       
       return secondSmallElement ;
       
}
int main(){
      int n , a[1000] ;
      printf("Number of elements of the array : ");

      scanf("%d" , &n);

      printf("Elements of the array : ");
      
      for(int  i = 0 ; i < n ; i += 1){
            scanf("%d" , &a[i]);
      }

      int secondSmallestElement = FindSecondSmallestElement(a , n);

      if(secondSmallestElement == -1){
           printf("The input is not valid\n");
      }else{
            printf("The second smallest element is : %d\n" , secondSmallestElement);
      }

      return 0 ;
}