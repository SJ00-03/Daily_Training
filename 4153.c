#include <stdio.h>


int main(void)
{    
    int A, B, C;
    int loop = 1;
    while(loop)
    {
        scanf("%d %d %d", &A, &B, &C);
        int largest;
        int temp;

        if(A>C && A>B)
        {
            temp = A;
            A = C;
            C = temp;
        }
        if(B>C && B>A)
        {
            temp = B;
            B = C;
            C = temp;
        }

        if(A == 0 && B == 0 && C == 0)
        {
            loop = 0;
        }
        else if(A*A + B*B == C*C)
        {
            printf("right\n");
        }
        else if(A*A + B*B != C*C)
        {
            printf("wrong\n");
        }
        
    }
}

