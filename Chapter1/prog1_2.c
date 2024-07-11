#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(){

time_t t;
srand( (unsigned) time(&t));
int num =rand();

double rnum = sqrt(num);

printf(" Square root of %d is : %f \n", num, rnum);

return 0;

}