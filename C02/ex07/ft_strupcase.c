#include <unistd.h>

char    *ft_strupcase(char *str) {
    int cont;

    cont = 0;
    while (str[cont]) {
        if (str[cont] >= 'a' && str[cont] <= 'z')
        {
            str[cont] = str[cont] - 32;
        }
        cont++;
    }
    return (str);
}
/*int main()
{
    char str[]= "holamellamopedro";
    ft_strupcase(str);
    return (0);
}*/
