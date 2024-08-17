//The following 2 macros are for the first exercise
#define PRINT1(a) printf("%d\n", a)

#define PRINT2(b) printf("%d\n", b)

//The follwing 2 macros are for the second exercise

#define MAX2(x,y) (x>y ? x : y)
#define MAX3(x,y,z) MAX2(x,MAX2(y,z))
// #define MAX3(x,y,z) (x>y ? (x>z ? x : z) : (y>z ? y : z))
