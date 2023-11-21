#include <unistd.h>

void check_numeric(char c, int *new_word)
{
    if (c >= '0' && c <= '9')
    {
        *new_word = 0;
    }
    else
    {
        *new_word = 1;
    }

}

char convert_case(char c, int *new_word)
{
    if (c >= 'A' && c <= 'Z')
    {
        if (*new_word == 0)
            return c + 32;
        else
        {
            *new_word = 0;
            return c;
        }
    }
    else if (c >= 'a' && c <= 'z')
    {
        if (*new_word == 1)
        {
            *new_word = 0;
            return c - 32;
        }
        else
            return c;
    }
    check_numeric(c,new_word);
    return c;
}

char *ft_strcapitalize(char *str)
{
    int i;
    int new_word;

    i = 0;
    new_word = 1;
    while (str[i])
    {
        str[i] = convert_case(str[i], &new_word);
        i++;
    }
    return str;
}
/*int main()
{
    char str[]= "holA me llamo peDro y tEngo 42mos 21 sda";
    ft_strcapitalize(str);
    return (0);
}*/
