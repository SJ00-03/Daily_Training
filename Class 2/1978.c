#include <stdio.h>


int main(void)
{    
    int A;
    scanf("%d", &A);
    int nums[A];


    int i;
    int prime_numbers = 0;
    for(i = 0; i < A; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    int j;
    int k;
    for(j = 0; j < A; j++)
    {
        int cnt = 0;
        int check_number = nums[j];
        for(k = 1; k < check_number + 1; k++)
        {            
            if(check_number % k == 0)
            {
                cnt++;
            }
        }
        if(cnt == 2)
        {
            prime_numbers++;
        }
    }
    
    printf("%d", prime_numbers);

}

