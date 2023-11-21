#include <unistd.h>

int ft_str_is_numeric(char *str)
{
    int cont;

    cont    =   0;
    while ( str[cont] )
    {
        if(!(str[cont] >= '0' && str[cont] <= '9'))
        {
            return (0);
        }
        cont++;
    }
    return (1);
}
/*int main()
{
    char *str = "12345653123";
    char *str2 = "Holame12llamoedro";
    char *str3 = "";

    ft_str_is_numeric(str);
    ft_str_is_numeric(str2);
    ft_str_is_numeric(str3);

    return (0);
}*/
