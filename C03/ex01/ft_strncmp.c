#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) {
    unsigned int i;

    i = 0;
    if (n == 0)
    {
        return (0);
    }
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
/*int main() {
    char *str = "Hola me llamo pedro";
    char *str1 = "Hola me";
    char *str2 = "Hola me llamo pedro";
    int result1 = ft_strncmp(str, str1, 9);
    int result2 = ft_strncmp(str, str2, 20);
    return 0;
}*/
