#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	travail(void)
{
	int		i;
	int		j;
//	char	s1[] = "\033[32m1001010110101010110101101010110101011010101101110111010011101101101011011010110101101010101011010110101010101010010110110010101001010110101010101100010110101001011010010100101000000001110110101001011010110111101001000101101001010101010101001010110110101010010101010101010101010101001011010101011010100110001010100011011010101001010101001000110110010101010000101010100101010101010110110100101010011010010100101010101010101010100111001101011001100101011011001110101010000110111110111011011101010011011011110101010110011111001011010110101101001011011101011101000001110101011001010101010101010101110010101101001001010111010101011010110101011101001011010101101001011010101101001010010101001011010101101011010100110101011001011101010101101011110010110101101011010101010101010110101010110101100101011010010110100101101001011010010110010101010110101001011100110010110101001001101010101010101101010110101010101010010110101101101001011001010101011001010010100101010101010010010100101001010010101010100101000101110001001001011100011010101010010110101010101010101010101001011010111010101101010101010110101010110101100101011010010110100101101001011010010110010101010110101001011100110010110101001001101010101010101101010110101010101010010110101101101001011001010101011001010010100101010101010010010100101001010010101010100101000101110001001001011100011010101010010110101010101010101010101001011010101101100100101010010110101011011001001010011011001001010";

	char	s2[] = "2- Il passa devant Moïse et proclama : « Le Seigneur, le Seigneur, Dieu tendre et miséricordieux, lent à la colère, plein d’amour et de vérité, qui garde sa fidélité jusqu’à la millième génération, supporte faute, transgression et péché, mais ne laisse rien passer, car il punit la faute des pères sur les fils et les petits-fils, jusqu’à la troisième et la quatrième génération. » (Livre de l’Exode 34, 6-7)\n3- Écoute, Israël : le Seigneur notre Dieu est l’Unique. Tu aimeras le Seigneur ton Dieu de tout ton cœur, de toute ton âme et de toute ta force. (Livre du Deutéronome 6, 4-5)\n4- Dans mon cœur, je conserve tes promesses pour ne pas faillir envers toi. (Psaumes 118, 11)\n5- Nous étions tous errants comme des brebis, chacun suivait son propre chemin. Mais le Seigneur a fait retomber sur lui nos fautes à nous tous. (Livre d’Isaïe 53, 6)\n6- Jésus s’approcha d’eux et leur adressa ces paroles : « Tout pouvoir m’a été donné au ciel et sur la terre. Allez ! De toutes les nations faites des disciples : baptisez-les au nom du Père, et du Fils, et du Saint-Esprit, apprenez-leur à observer tout ce que je vous ai commandé. Et moi, je suis avec vous tous les jours jusqu’à la fin du monde. » (Matthieu 28, 18-20)\n7- Car Dieu a tellement aimé le monde qu’il a donné son Fils unique, afin que quiconque croit en lui ne se perde pas, mais obtienne la vie éternelle. (Jean 13,6)\n8- Jésus lui répond : « Moi, je suis le Chemin, la Vérité et la Vie ; personne ne va vers le Père sans passer par moi. (Jean 14, 6)\n9- Car le salaire du péché, c’est la mort ; mais le don gratuit de Dieu, c’est la vie éternelle dans le Christ Jésus notre Seigneur. (Lettre de saint Paul Apôtre aux Romains 23,6)\n10- Nous le savons, quand les hommes aiment Dieu, lui-même fait tout contribuer à leur bien, puisqu’ils sont appelés selon le dessein de son amour. (Lettre de saint Paul Apôtre aux Romains 8, 28)\n11- Avant tout, je vous ai transmis ceci, que j’ai moi-même reçu : le Christ est mort pour nos péchés conformément aux Écritures, et il fut mis au tombeau ; il est ressuscité le troisième jour conformément aux Écritures. (Première lettre de saint Paul Apôtre aux Corinthiens 15, 3-4)\n12- Celui qui n’a pas connu le péché, Dieu l’a pour nous identifié au péché, afin qu’en lui nous devenions justes de la justice même de Dieu. (Deuxième lettre de saint Paul Apôtre aux Corinthiens 5,21)\n13- Je vous le dis : marchez sous la conduite de l’Esprit Saint, et vous ne risquerez pas de satisfaire les convoitises de la chair. (Lettre de saint Paul Apôtre aux Galates 5,16)\n14- C’est bien par la grâce que vous êtes sauvés, et par le moyen de la foi. Cela ne vient pas de vous, c’est le don de Dieu. Cela ne vient pas des actes : personne ne peut en tirer orgueil. (Lettre de saint Paul Apôtre aux Ephésiens 2,8-9)\n";
	i = 0;
	j = 0;
	while (1)
	{
		if (i == 10000000)
			i = 0;
		if (i ==  1)
		{
			if (s2[j] == '\0')
				j = 0;
			write(1, &s2[j], 1);
			j++;
		}
		i++;
	}
}

int		main(void)
{
	travail();
	return (0);	
}
