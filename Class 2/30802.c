#include <stdio.h>

int main(void)
{    
    int N;
    scanf("%d", &N);

    int nums_for_size[6];

    int i;
    for(i = 0; i < 6; i++)
    {
        scanf("%d", &nums_for_size[i]);
    }

    int check_nums = 0;
    for(i = 0; i < 6; i++)
    {
        check_nums += nums_for_size[i];
    }

    if(check_nums == N)
    {
        int T, P;
        scanf("%d", &T);
        scanf("%d", &P);

        int count = 0;
        for(i = 0; i < 6; i++)
        {
            if(nums_for_size[i] % T == 0)
            {
                count += nums_for_size[i] / T;
            }
            else if(nums_for_size[i] % T != 0)
            {
                count += nums_for_size[i] / T + 1;
            }
        }
        printf("%d\n", count);
        printf("%d %d\n", N/P, N%P);
    }
    

}

