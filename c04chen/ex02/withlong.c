#include <unistd.h>
void ft_putnbr(int n)
{
    char *base;
    long long ln;

    base = "0123456789";
    ln = n;
    if (n < 0)
    {
        write(1, "-", 1);
        ln = -ln;
    }
    if (ln / 10)
        ft_putnbr(ln / 10);
    write(1 , base+ (ln % 10), 1);
}
