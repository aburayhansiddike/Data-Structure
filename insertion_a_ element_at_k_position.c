#include<stdio.h>


int insertion(int array[] , int numberOfelements , int position , int element){
        
         for(int i = numberOfelements - 1  ; i >= position ; i -= 1){
               array[i + 1] = array[i];
               
         }
         array[position] = element ;
         numberOfelements += 1;
         return numberOfelements ;
}
int main(){
       int array[1000] = { 0 };
       int numberOfElements = 5 ;

       for(int i = 0 ; i < 5 ; i += 1){
              array[i] = i ;
       }

       for(int i = 0 ; i < 5;  i += 1){
             printf("%d " , array[i]);
       }
       printf("\n");

       printf("how many element you want to insert : ");

       int numberOfInsertion  ;
       scanf("%d" , &numberOfInsertion);

       for(int i = 0 ; i < numberOfInsertion ; i += 1){
            int position  , element ;
            printf("Give the position and element : " );
            scanf("%d%d" , &position , &element);

            if(position > numberOfElements){
                  printf("Position not belogs to %d and %d\n" , 1 , numberOfElements);
                  continue; 
            }

            if(numberOfElements >= 1000){
                  printf("The array is full \n");
                  break ;
            }

            numberOfElements =  insertion(array , numberOfElements , position - 1 , element );
            printf("After insertion the new array is : ");
            for(int i = 0 ; i < numberOfElements  ; i += 1){
                printf("%d " , array[i]);
            }
            printf("\n");
       }

       printf("\n");
       return 0 ;
}