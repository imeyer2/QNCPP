#include<stdio.h>


int main(void){
    double cel_max = 19;

    int delta_deg = 1;
    double far = 0;

    printf("-----------Celcius----------|---------Fahrenheit---------\n");


    for (double cel = 0.0; cel <= cel_max; ++cel){
        // cel  = (5.0/9.0) * (far-32);
        far = ((9.0/5.0)*cel) + 32;

        printf("        %10.1f          |        %10.1f        \n", cel, far);

        // cel += delta_deg;
    }

    return 0;
}