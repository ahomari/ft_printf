#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <fcntl.h>

int main(void)
{
	// char *s = "ahmed";
	// int d = 28;
	// char *ptr = &s;
	// int len, len2;
	// len = ft_printf("%p%x%%X\n",*ptr,ptr);
	// len2 = printf("%p%x%%X\n",*ptr,ptr);
	char *i = "√";
	ft_printf("mohammedƒ˙˙ƒƒ˙ß¨®´∑¨®ß≈≈≈≈ %%%k%u%x%%%%%s%%%%%%%%%\n\0%%mohammed%s", i);
	printf("mohammedƒ˙˙ƒƒ˙ß¨®´∑¨®ß≈≈≈≈ %%%k%u%x%%%%%s%%%%%%%%%\n\0%%mohammed%s", i);
	// ft_printf("%d\n", printf("mohammed %%%%%%%%%%mohammed%"));

	// int fd = open("re")
}
