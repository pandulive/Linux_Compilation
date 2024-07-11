#include<stdio.h>

int main(){
    int intgr = 29;
    int uintgr = 89U;
    long int lintgr = 99998L;

    float fl = intgr / 10;

    double dbla = 123123123.00;
    double dblb = 12.293123;
    double dblc = 2312312312.123123;


    char ch = 'P';
    char charr[20] = "Panduranga";
    char charry[20] = {'P','a','n','d','u'}; // '\0'};
    char charry1[20] = {'P','a','n','d','u','r','a','n','g','a','\0'};


    printf("Hello world \n");
    printf(" \n");

    printf("I am Printing in same line %d", intgr); // Integer Print
    printf("I am Printing in same line %d \n", intgr);
    printf(" \nI am Printing in next line %d \n", intgr);
    printf("I am Printing unsigned int %u \n", uintgr);
    printf("I am Printing long int data: %ld \n", lintgr);
    printf(" \n");

    printf("I am printing Float %f \n", fl);
    printf(" \n");

    printf("I am Printing double %lf \n", dbla);
    printf("I am Printing double %lf \n", dblb);
    printf("I am Printing double %lf \n", dblc);
    printf(" \n");

    printf("Charactor print %c \n", ch);
    printf("Charactor print %s \n", charr);
    printf("Charactor print %s \n", charry);
    printf("Charactor print %s \n", charry1);

    return 0;
    
}