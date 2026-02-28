#include <stdio.h>

int main (void)
{
    int alphabet_places[26];
    int size = sizeof(alphabet_places) / sizeof(alphabet_places[0]);
    int i;


    for(i = 0; i < size; i++)
    {
        alphabet_places[i] = -1;
    }

    char str[101];
    scanf("%s", str);
    int j = 0;

    while(str[j] != '\0')
    {
        if(alphabet_places[str[j] - 'a'] == -1)
        {
            alphabet_places[str[j] - 'a'] = j;
        }
        j++;
    }

    for(i = 0; i < size; i++)
    {
        printf("%d ", alphabet_places[i]);
    }
    printf("\n");
    return 0;
}