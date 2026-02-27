#include <stdio.h>


int main(void)
{
    char str[81];
    int repeat;
    int i;
    
    int sum = 0;
    
    scanf("%d", &repeat);
    
    
    for(i = 0; i < repeat; i++)
    {
        int cnt = 0;
        sum = 0;
        int j = 0;
        scanf("%s", str);
         while(str[j] != '\0')
        {
            if(str[j] == 'O')
            {
                cnt += 1;
                sum += cnt; //sum을 더하는 방법을 제대로 생각하지 못했음 (X)가 나왔을 때 cnt를 더했었음
            }
            else if(str[j] == 'X')
            {                
                cnt = 0;
            }
            j++;
        }
        printf("%d\n", sum);        
    }
   
}
