#include <stdio.h>

int main (void){
    int repeat;
    int i;
    scanf("%d", &repeat);
    
    for(i = 0; i < repeat; i++)
    {
        int H, W, N;
        int room_number = 0;

        scanf("%d", &H);
        scanf("%d", &W);
        scanf("%d", &N);
        if(N%H == 0)
        {
            room_number = (H * 100) + (N/H);
        }
        else
        {
            room_number = (N%H * 100) + (N/H + 1);
        }
        printf("%d\n", room_number);
    }
    
    return 0;
    

}
