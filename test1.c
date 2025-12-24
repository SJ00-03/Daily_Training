#include <stdio.h>

int main(void)

{
    printf("Be Happy\n");
    printf("12345678901234567890\n");
    printf("My\tfriend\n");
    printf("Goot\bd\tchance\n");
    printf("Cow\rW\a\n");
    
    printf("%d\n", 10);
    printf("%lf\n", 3.4);
    printf("%.1lf\n", 3.45);
    printf("%.10lf\n", 3.4);

    printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10+20);
    printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
    printf("%.3lf + %.3lf = %.3lf\n", 3.1234, 6.1326, 3.1234+6.1326);

    
    return 0;
    
}