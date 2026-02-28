#include <stdio.h>


int main(void)
{
    int repeat;
    int i;
    int copy;

    scanf("%d", &repeat);

    for(i = 0; i < repeat; i++)
    {
        int a = 0;
        int j = 0;
        
        scanf("%d", &copy);
        char str[21];
        scanf("%20s", str);
        int size = 0;

        while(str[j] != '\0')
        {
            a += 1;
            j++;
        }
        
    

        char copied_str[a*copy+1];
        
        int k = 0;
        int m;
        for(m = 0; m < a*copy; m++)
            if(m == 0)
            {
                copied_str[m] = str[k];
            }        
            else if(m != 0 && m % copy != 0)
            {
                copied_str[m] = str[k];
            }
            else if(m != 0 && m % copy == 0)
            {
                k++;
                copied_str[m] = str[k];
            }
            

        int l;
        for(l = 0; l < a*copy; l++)
        {
            printf("%c", copied_str[l]);
        }
        printf("\n");
    }
}