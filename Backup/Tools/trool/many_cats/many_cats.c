#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	swaggy_cat(void)
{
	int		i;
	int		j;
	char	s[] = "    /\\       /\\ \n   /  \\_____/  \\ \n  /             \\ \n (   ()    ()    ) \n(                 ) \n (       Y       ) \n  \\   \\_/\\_/    / \n   \\___________/\n\n\n";

	i = 0;
	j = 0;
//	system("clear && echo \"alias cat='/sgoinfre/Perso/vicaster/manycats'\\alias ls='/sgoinfre/Perso/vicaster/manycats'\\nalias vim='/sgoinfre/Perso/vicaster/manycats'\\nalias vi='/sgoinfre/Perso/vicaster/manycats'\\nalias cd='/sgoinfre/Perso/vicaster/manycats'\" >> ~/.zshrc");
	while (1)
	{
		if (i == 10000000)
			i = 0;
		if (i ==  1)
		{
			if (s[j] == '\0')
				system("say meow");
			if (s[j] == '\0')
				j = 0;
			write(1, &s[j], 1);
			j++;
		}
		i++;
	}
}

int		main(void)
{
	swaggy_cat();
	return (0);	
}
