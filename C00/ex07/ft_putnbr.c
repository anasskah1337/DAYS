#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    int div;

    while (n >= 10)
    {
        div = 1;
        while ((n / div) >= 10)
            div *= 10;

        ft_putchar((n / div) + '0');
        n = n % div;
    }
    ft_putchar(n + '0');
}

int main(void)
{
    ft_putnbr(42);
}