#include <stdio.h>

int main(void)
{    
    int number_of_cards;
    int dealers_number;

    scanf("%d", &number_of_cards);
    scanf("%d", &dealers_number);

    int cards[number_of_cards];
    
    int add_count = ((number_of_cards) * (number_of_cards-1) * (number_of_cards-2)) / 6;
    int sum_results[add_count];
    
    int i;
    for(i = 0; i < number_of_cards; i++)
    {
        scanf("%d", &cards[i]);
    }

    int j, k;
    int idx = 0;
    for(i = 0; i < number_of_cards - 2; i++)
    {
        for(j = i + 1; j < number_of_cards - 1; j++)
        {
            for(k = j + 1; k < number_of_cards; k++)
            {
                sum_results[idx] = cards[i] + cards[j] + cards[k];
                idx++;
            }
        }
    }

    

   
    int temp;
    for(i = 0; i < add_count-1; i++)
    {
        for(j = i; j < add_count; j++)
        {
            if(sum_results[i] < sum_results[j])
            {
                temp = sum_results[j];
                sum_results[j] = sum_results[i];
                sum_results[i] = temp;
            }
        }
    }

    
}