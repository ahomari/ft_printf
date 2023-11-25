#include <stdio.h>
#include <stdarg.h>

int main(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*format + 1 == 's')
				va_arg(ap,char *);
		}
	}
	va_end(ap);
// printf("%s")
}