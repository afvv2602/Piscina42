#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int cont;

    cont    =   0;
    while ( str[cont] )
    {
        if(!((str[cont] >= 'a' && str[cont] <= 'z') || (str[cont] >= 'A' && str[cont] <= 'Z')))
        {
            return (0);
        }
        cont++;
    }
    return (1);
}
/*int main()
{
    char *str = "Holamellamopedro";
    char *str2 = "Holame12llamoedro";
    char *str3 = "";

    ft_str_is_alpha(str);
    ft_str_is_alpha(str2);
    ft_str_is_alpha(str3);

    return (0);
}*/
