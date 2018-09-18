#include <stdio.h>
#include <unistd.h>

int	main()
{	
	int i = 0;
	char str[] = "Hello World";
	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
	write(1,"\n",1);
	return 0;
}
