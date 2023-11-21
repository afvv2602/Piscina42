#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    int cont;

    cont    =   0;
    while ( str[cont] )
    {
        if(!(str[cont] >= 'a' && str[cont] <= 'z'))
        {
            return (0);
        }
        cont++;
    }
    return (1);
}
/*int main()
{
    char *str = "holamellamopedro";
    char *str2 = "Holamellamoedro";
    char *str3 = "";

    ft_str_is_lowercase(str);
    ft_str_is_lowercase(str2);
    ft_str_is_lowercase(str3);

    return (0);
}*/
