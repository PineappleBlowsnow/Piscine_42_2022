int ft_strlen(char *str)
{
    char *end;

    end = str;
    while (*end)
        end++;
    return (end - str);
}

int ft_isspace(char c)
{
    if (c == 0x20 || c == 0x09 || c == 0x0a || c == 0x0b || c == 0x0c || c == 0x0d)
        return (c);
    else
        return (0);
}

int isvalidbase(char *base)
/*
** return 0 if
*/
{
    char *curr;

    curr = base;
    if (!*curr || !curr[1])
        return (0);
    while (*curr)
    {
        if (*curr == '+' || *curr == '-' || ft_isspace(*curr))
            return (0);
        curr++;
    }

    while (*base)
    {
        curr = base + 1;
        while (*curr)
        {
            if (*curr == *base)
                return (0);
            curr++;
        }
        base++;
    }
    return (1);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (s1[i] && (s1[i] == s2[i]) && (i < n))
        i++;
    if (i == n)
        return (0);
    else
        return (s1[i] - s2[i]);
}

char *ft_strstr(char *str, char *to_find)
{
    if (!*to_find)
        return (str);
    while (*str)
    {
        if (ft_strncmp(str, to_find, ft_strlen(to_find)) == 0)
            return (str);
        str++;
    }
    return (0);
}

int ft_atoi_base(char *str, char *base)
{
    int length;
    int sy;
    int n;
    char *position;
    char needle[2] = "0";

    if (!isvalidbase(base))
        return 0;
    length = ft_strlen(base);
    sy = 1;
    while (ft_isspace(*str))
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sy *= -1;
        str++;
    }
    n = 0;
    needle[0] = *str;
    position = ft_strstr(base, needle);
    while (*str && position)
    {
        n *= length;
        n += sy * (position - base);
        str++;
        needle[0] = *str;
        position = ft_strstr(base, needle);
    }
    return (n);
}