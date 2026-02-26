#include <stdio.h>
#include <stdlib.h>

int main (void){

    int A, B, C;
    char CAB[8];

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    sprintf(CAB, "%d%d", A, B);
    int AB;
    AB = atoi(CAB);

    int real_cal, java_cal;
    real_cal = A + B - C;
    java_cal = AB - C;

    printf("%d\n%d", real_cal, java_cal);

    return 0;
}

/*sprintf와 atoi에 대해 새롭게 배움*/
