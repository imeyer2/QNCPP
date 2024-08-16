#include<stdio.h>


int main(void){

    int zero_counter = 0;
    int one_counter = 0;
    int two_counter = 0;
    int three_counter = 0;
    int four_counter = 0;

    char c;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '0':
                zero_counter += 1;
                break;
            case '1':
                one_counter += 1;
                break;
            case '2':
                two_counter += 1;
                break;
            case '3':
                three_counter += 1;
                break;
            case '4':
                four_counter += 1;
                break;
            default:
                ;
        };
    }

    printf("\n\nThere were %d zeros\n", zero_counter);
    printf("There were %d ones\n", one_counter);
    printf("There were %d twos\n", two_counter);
    switch (three_counter){
    case 0:
        printf("There were zero threes\n");
        break;
    case 1:
        printf("There was one three\n");
        break;
    case 2:
        printf("There were two threes\n");
        break;
    default:
        printf("There were %d threes\n", three_counter);
    }



    printf("There were %d fours\n", four_counter);

}