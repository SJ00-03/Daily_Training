#include <stdio.h>

int main(void){

    int notes[8];
    int repeat = sizeof(notes) / sizeof(notes[0]);
    
    int i;

    for(i = 0; i < repeat; i++)
    {
        scanf("%d", &notes[i]);
    }

    if(notes[0] == 1)
    {
        for(i = 0; i < repeat; i++)
        {
            if(notes[i] == i+1)
            {
                if(i == repeat -1)
                {
                    printf("ascending\n");
                    break;
                }
            }
            else
            {
                printf("mixed\n");
                break;
            } 
        }

    }
    else if(notes[0] == 8)
    {
        int j = repeat;
        for(i = 0; i < repeat; i++)
        {
            if(notes[i] == j)
            {
                if(i == 7)
                {
                    printf("descending\n");
                    break;
                }
                j--;
            }
            else
            {
                printf("mixed\n");
                break;
            } 
        }
    }
    else{
        printf("mixed\n");
        
    }
    return 0;
}