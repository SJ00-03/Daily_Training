#include <stdio.h>

int main (void){

    int A, B, C;
    char CA[4], CB[4], CC[4];

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    CA[0] = 'A';
    CB[0] = 'B';
    CC[0] = 'C';

    int result_int = A + B - C;
    int result_char = ((int)CA[0] * 10) + (int)CB[0] - CC[0];
    printf("%d\n%d", result_int, result_char);

    return 0;
}
