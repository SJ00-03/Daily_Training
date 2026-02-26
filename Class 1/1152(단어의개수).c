#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10000001];
    fgets(str, sizeof(str), stdin);
    int i = 0, cnt = 0;

    while(str[i] != '\0' && str[i+1] != '\0')
    {
        
        if(str[i] == '\0')
        {
            cnt += 1;
        }
        i++;
    }

    printf("%d", cnt);
    
    return 0;
}