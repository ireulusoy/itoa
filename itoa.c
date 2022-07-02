char    *ft_itoa(int n)
{
    char    *str;
    int        len;

    len = find_digit(n);
    str = malloc(len + 1);
    str += len - 1;
    *str = 0;
    while (n > 0)
    {
        *str-- = n % 10 + '0';
        n = n / 10;
    }
    str++;
    return (str);
}
