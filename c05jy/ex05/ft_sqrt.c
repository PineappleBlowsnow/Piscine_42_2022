int ft_sqrt_help(int nb)
{
    int i;
    long long j;

    if(nb<=0)
        return (0);
    i=ft_sqrt_help(nb/4); 
    j=(2*i+1); 
    if(nb<j*j)
        return (2*i);
    else 
        return (2*i+1); 
}

int ft_sqrt(int nb)
{
    int sqrt;
    sqrt = ft_sqrt_help(nb);
    if(nb==sqrt*sqrt)
        return (sqrt);
    else 
        return (0);
}