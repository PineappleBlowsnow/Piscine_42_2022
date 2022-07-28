#include<unistd.h>
void ft_putnbr(int nb);

int main()
{
    ft_putnbr(7456);
    write(1,"\n",1);
    ft_putnbr(7);
    write(1,"\n",1);
    ft_putnbr(0);
    write(1,"\n",1);
     ft_putnbr(-1);
     write(1,"\n",1);
     ft_putnbr(-100);
     write(1,"\n",1);
     ft_putnbr(-2147483648);
     write(1,"\n",1);
     ft_putnbr(-2100098);
     write(1,"\n",1);

    return(0); 
}