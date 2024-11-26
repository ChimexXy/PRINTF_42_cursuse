#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int i = ft_printf("%s  |  %c   |  %i  |  %%  | %x  | %X  \n", "moad1337" , 'N', -1234, "add", "red");
	printf("%d \n", i);
}
// moad1337  |  N   |  -1234  |  %
// moad1337  |  N   |  -1234  |  % 