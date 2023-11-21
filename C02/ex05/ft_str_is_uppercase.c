#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    int cont;

    cont    =   0;
    while ( str[cont] )
    {
        if(!(str[cont] >= 'A' && str[cont] <= 'Z'))
        {
            return (0);
        }
        cont++;
    }
    return (1);
}
/*int main()
{
    char *str = "HOLAMELLAMOPEDRO";
    char *str2 = "Holamellamoedro";
    char *str3 = "";

    ft_str_is_uppercase(str);
    ft_str_is_uppercase(str2);
    ft_str_is_uppercase(str3);

    return (0);
}*/
