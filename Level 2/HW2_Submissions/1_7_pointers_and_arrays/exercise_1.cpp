
#include<stdio.h>

void Swap(int* i, int* j){
    //This function takes pointers as input

    int temp = *i;
    *i = *j;
    *j = temp;
}


int main(void){

    int i = 10;
    int j = 20;

    //Print Numbers
    printf("%d\n", i);
    printf("%d\n\n", j);

    //Swap by passing their location in memory (pointer dtype)
    Swap(&i, &j);

    //Print New Numbers
    printf("%d\n", i);
    printf("%d\n", j);

    
}