#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int i = ft_printf("%s  |  %c   |  %i  |  %%  | %x  | %p  \n", "moad1337" , 'N', -1234, "add", "redsfad");
	printf("%d \n", i);
}
