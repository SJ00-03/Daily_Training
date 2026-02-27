#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);
    int num = A * B * C;
    
    char num_char[11];    //처음에 크기 세팅을 잘못했음
    sprintf(num_char, "%d", num);

    int count_numbers[10] = {0};
    int i = 0;
    while(num_char[i] != '\0')
    {
        count_numbers[(int)num_char[i] - '0'] += 1;
        i++;
    }

    for(int j = 0; j < 10; j++)
    {
        printf("%d\n", count_numbers[j]);
    }
    return 0;
}
