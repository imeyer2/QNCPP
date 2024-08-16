#include <stdio.h>

void printnumber(int input) {
    // Handle negative numbers
    if (input < 0) {
        putchar('-');
        input = -input;
    }
//using /
    if (input/10 != 0) {
        printnumber(input / 10);
    }

    //eventually the breakout condition is when the if loop above doesn't run
    putchar((input % 10) + '0'); //learned this from hackerrank practice, use the +'0'
}

int main(void) {
    int num_to_print;

    printf("Enter the number to print: ");
    scanf("%d", &num_to_print);

    printnumber(num_to_print);
    putchar('\n'); 

    return 0;
}
