#include <stdio.h>
void val(void);
int main(void)
{
    val();
}

void val(void)
{
    long long num;
    printf("Number: ");
    scanf("%lld", &num);
    long long og = num;
    int k = 0;
    int x = 0;
    int y = 0;
    int f = 0;
    for (int i = 1; i <= 16; i++)
    {
        if (i % 2 == 0)
        {
            f = (num % 10 * 2);
            k = f / 10 + f % 10 + k;
            num = num / 10;
        }
        else if (i % 2 == 1)
        {
            y = num % 10;
            x = x + y;
            num = num / 10;
        }
    }
    if ((k + x) % 10 == 0)
    {
        if ((og >= 4000000000000000 && og < 5000000000000000) || (og >= 4000000000000 && og < 5000000000000))
        {
            printf("VISA\n");
        }
        else if (og >= 5100000000000000 && og < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if ((og >= 340000000000000 && og < 350000000000000) || (og >= 370000000000000 && og < 380000000000000))
        {
            printf("AMEX\n");
        }
    }
    else
        printf("huh\n");
}
