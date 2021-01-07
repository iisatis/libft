#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int     main()
{
	puts("TEST STRLEN");
	char *strlen1 = "qwertyuiopas";
	char *strlen2 = "q";
	char *strlen3 = "";
	printf("Attendu: 12, Recu: %d\n", ft_strlen(strlen1));
	printf("Attendu: 1, Recu: %d\n", ft_strlen(strlen2));
	printf("Attendu: 0, Recu: %d\n", ft_strlen(strlen3));



}