#include <stdio.h>
#include <string.h>

int main()
{
	char str[2];
	
	str[0] = 'a';
	printf("%lu", strlen(str));
	printf("%s", str);
}
