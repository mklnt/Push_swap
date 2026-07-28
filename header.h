#include <stdio.h>

int ft_int_strlen(int str[])
{
    int i;
    // printf("This is str: %i", str[i]);
    i = 0;
    while (!str[i])
    {
        printf("This is str: %i", str[i]);
        i++;
    }
    return (i);
}


typedef struct s_node
{
    int             value;
    int             index;
    struct s_node   *next;
    struct s_node   *prev;
}   t_node;
