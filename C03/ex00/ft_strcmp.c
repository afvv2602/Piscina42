#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    return (s1[i] - s2[i]);
}

/*int main()
{
    char *str = "Hola me llamo pedro";
    char *str1 = "Hola me";
    char *str2 = "Hola me llamo pedro";
    int result1 = ft_strcmp(str, str1);
    int result2 = ft_strcmp(str, str2);
    return (0);
}*/
