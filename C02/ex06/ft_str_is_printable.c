#include <unistd.h>

int ft_str_is_printable(char *str)
{
    int cont;

    cont    =   0;
    while ( str[cont] )
    {
        if(!(str[cont] >= 32 && str[cont] <= 126))
        {
            return (0);
        }
        cont++;
    }
    return (1);
}
/*int main()
{
    char *str = "Hello\nWorld";
    char *str2 = "Holamellamoedro";
    char *str3 = "";

    ft_str_is_printable(str);
    ft_str_is_printable(str2);
    ft_str_is_printable(str3);

    return (0);
}*/
