/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/21 14:53:24 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/13 18:24:06 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

void		test_percent(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	printf("%i)\n", i++);//			1
 	retft += ft_printf("ft: |%%|\n");
 	retor += printf(   "or: |%%|\n\n");
	printf("%i)\n", i++);//			2
 	retft += ft_printf("ft: |%10%|\n");
 	retor += printf(   "or: |%10%|\n\n");
	printf("%i)\n", i++);//			3
 	retft += ft_printf("ft: |%-10%|\n");
 	retor += printf(   "or: |%-10%|\n\n");

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n\n", retft, retor);
}

void		test_int(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[31m**************INT****************\n\n");

	printf("%i)\n", i++);//			1
	retft += ft_printf("ft: |% 15d|   |% 15d|\n", 56, -56);
	retor += printf(   "or: |% 15d|   |% 15d|\n\n", 56, -56);
	printf("%i)\n", i++);//			2
 	retft += ft_printf("ft1: |%0d|\n", -42);
 	retor += printf(   "or1: |%0d|\n\n", -42);
	printf("%i)\n", i++);//			3
 	retft += ft_printf("ft2: |%0005d|\n", -42);
 	retor += printf(   "or2: |%0005d|\n\n", -42);
	printf("%i)\n", i++);//			4
 	retft += ft_printf("ft3: |% 10.5d|\n", 4242);
 	retor += printf(   "or3: |% 10.5d|\n\n", 4242);
	printf("%i)\n", i++);//			5
 	retft += ft_printf("ft4: |% 10.5d|\n", -4242);
 	retor += printf(   "or4: |% 10.5d|\n\n", -4242);
	printf("%i)\n", i++);//			6
 	retft += ft_printf("ft: |%+10.5d|\n", 4242);
 	retor += printf(   "or: |%+10.5d|\n\n", 4242);
	printf("%i)\n", i++);//			7
 	retft += ft_printf("ft: |%03.2d|\n", -1);
 	 retor += printf(  "or: |%03.2d|\n\n", -1);
	printf("%i)\n", i++);//			8
 	retft += ft_printf("ft: | %d|\n", 101);
 	retor += printf(   "or: | %d|\n\n", 101);
	printf("%i)\n", i++);//			9
 	retft += ft_printf("ft: |% d|\n", 101);
 	retor += printf(   "or: |% d|\n\n", 101);
	printf("%i)\n", i++);//			10
 	retft += ft_printf("ft: |%27d|\n", 101);
 	retor += printf(   "or: |%27d|\n\n", 101);
	printf("%i)\n", i++);//			11
 	retft += ft_printf("ft: |%027d|\n", -101);
 	retor += printf(   "or: |%027d|\n\n", -101);
	printf("%i)\n", i++);//			12
 	retft += ft_printf("ft: |%27d|\n", -101);
 	retor += printf(   "or: |%27d|\n\n", -101);
	printf("%i)\n", i++);//			13
 	retft += ft_printf("ft: |%-27d|\n", -101);
 	retor += printf(   "or: |%-27d|\n\n", -101);
	printf("%i)\n", i++);//			14
 	retft += ft_printf("ft: |%0 27d|\n", -101);
 	retor += printf(   "or: |%0 27d|\n\n", -101);
	printf("%i)\n", i++);//			15
 	retft += ft_printf("ft: |%-27.5d|\n", 101);
 	retor += printf(   "or: |%-27.5d|\n\n", 101);
	printf("%i)\n", i++);//			16
 	retft += ft_printf("ft: |%10.0d|\n", 101);
 	retor += printf(   "or: |%10.0d|\n\n", 101);
	printf("%i)\n", i++);//			17
 	retft += ft_printf("ft: |%10.0d|\n", 0);
 	retor += printf(   "or: |%10.0d|\n\n", 0);
	printf("%i)\n", i++);//			18
 	retft += ft_printf("ft: |%.d|\n", 0);
 	retor += printf(   "or: |%.d|\n\n", 0);
	printf("%i)\n", i++);//			19
 	retft += ft_printf("ft: |%d|\n", 0);
 	retor += printf(   "or: |%d|\n\n", 0);
	printf("%i)\n", i++);//			20
 	retft += ft_printf("ft: |%d|\n", -92233);
 	retor += printf(   "or: |%d|\n\n", -92233);
	printf("%i)\n", i++);//			21
	retft += ft_printf("ft: |%- 15d|\n", 101);
	retor += printf(   "or: |%- 15d|\n\n", 101);
	printf("%i)\n", i++);//			22
 	retft += ft_printf("ft: |%27ld|\n", -9223372036854775807);
 	retor += printf(   "or: |%27ld|\n\n", -9223372036854775807);
	printf("%i)\n", i++);//			23
 	retft += ft_printf("ft: |% 33.2d|\n", 256);
 	retor += printf(   "or: |% 33.2d|\n\n", 256);
	printf("%i)\n", i++);//			24
 	retft += ft_printf("ft: |% d|\n", 123456789);
 	retor += printf(   "or: |% d|\n\n", 123456789);
	printf("%i)\n", i++);//			25
 	retft += ft_printf("ft: |% 27d|\n", -123456789);
 	retor += printf(   "or: |% 27d|\n\n", -123456789);
	printf("%i)\n", i++);//			26
 	retft += ft_printf("ft: |%0 33d|\n", 256);
 	retor += printf(   "or: |%0 33d|\n\n", 256);
	printf("%i)\n", i++);//			27
	retft += ft_printf("ft: |%0+7.15d|   |%0+7.15d|\n", 56, -56);
	retor += printf(   "or: |%0+7.15d|   |%0+7.15d|\n\n", 56, -56);
	printf("%i)\n", i++);//			28
	retft += ft_printf("ft: |%+07.5d|   |%+07.5d|\n", 0, -0);
	retor += printf(   "or: |%+07.5d|   |%+07.5d|\n\n", 0, -0);
	printf("%i)\n", i++);//			29
	retft += ft_printf("ft: |%07.d|   |%07.d|\n", 0, -0);
	retor += printf(   "or: |%07.d|   |%07.d|\n\n", 0, -0);
	printf("%i)\n", i++);//			30
	retft += ft_printf("ft: |%-7.d|   |%-7.d|\n", 0, -0);
	retor += printf(   "or: |%-7.d|   |%-7.d|\n\n", 0, -0);
	printf("%i)\n", i++);//			31
	retft += ft_printf("ft: |%0+7.5d|   |%0+7.5d|\n", 56, -56);
	retor += printf(   "or: |%0+7.5d|   |%0+7.5d|\n\n", 56, -56);
	printf("%i)\n", i++);//			32
	retft += ft_printf("ft: |%0+7.d|   |%0+7.d|\n", 56, -56);
	retor += printf(   "or: |%0+7.d|   |%0+7.d|\n\n", 56, -56);
	printf("%i)\n", i++);//			33
	retft += ft_printf("ft: |%-7.d|   |%-7.d|\n", 56, -56);
	retor += printf(   "or: |%-7.d|   |%-7.d|\n\n", 56, -56);
	printf("%i)\n", i++);//			34
	retft += ft_printf("ft: |%07d|   |%07d|\n", 56, -56);
	retor += printf(   "or: |%07d|   |%07d|\n\n", 56, -56);
	printf("%i)\n", i++);//			35
	retft += ft_printf("ft: |%+7.d|   |%+7.d|\n", 56, -56);
	retor += printf(   "or: |%+7.d|   |%+7.d|\n\n", 56, -56);
	printf("%i)\n", i++);//			36
	retft += ft_printf("ft: |%+07d|   |%+07d|\n", 56, -56);
	retor += printf(   "or: |%+07d|   |%+07d|\n\n", 56, -56);
	printf("%i)\n", i++);//			37
	retft += ft_printf("ft: |%0d|   |%0d|\n", 56, -56);
	retor += printf(   "or: |%0d|   |%0d|\n\n", 56, -56);
	printf("%i)\n", i++);//			38
	retft += ft_printf("ft: |%- d|\n", 101);
	retor += printf(   "or: |%- d|\n\n", 101);
/*	printf("%i)\n", i++);//			39
	retft += ft_printf("ft: |%030.d|   |%030.d|\n", 987, -987);
	retor += printf(   "or: |%030.d|   |%030.d|\n\n", 987, -987);
	printf("%i)\n", i++);//			40
	retft += ft_printf("ft: |%010d|\n", -42);
	retor += printf(   "or: |%010d|\n\n", -42);
	printf("%i)\n", i++);//			41
	retft += ft_printf("ft: |%010i|\n", 59);
	retor += printf(   "or: |%010i|\n\n", 59);
	printf("%i)\n", i++);//			42
	retft += ft_printf("ft: |%-10.0i|\n", 59);
	retor += printf(   "or: |%-10.0i|\n\n", 59);
	printf("%i)\n", i++);//			43
	retft += ft_printf("ft: |%-+8.22i|\n", 59);
	retor += printf(   "or: |%-+8.22i|\n\n", 59);
	printf("%i)\n", i++);//			44
	retft += ft_printf("ft: |% -6.i|\n", 59);
	retor += printf(   "or: |% -6.i|\n\n", 59);
	printf("%i)\n", i++);//			45
	retft += ft_printf("ft: |%-+i|\n", 0);
	retor += printf(   "or: |%-+i|\n\n", 0);
	printf("%i)\n", i++);//			46
	retft += ft_printf("ft: |%-+1.5i|\n", 1);
	retor += printf(   "or: |%-+1.5i|\n\n", 1);
	printf("%i)\n", i++);//			47
	retft += ft_printf("ft: |%-+15i| et |%+015i|\n", 987, -987);
	retor += printf(   "or: |%-+15i| et |%+015i|\n\n", 987, -987);
	printf("%i)\n", i++);//			48
	retft += ft_printf("ft: |% 015i|\n", 0);
	retor += printf(   "or: |% 015i|\n\n", 0);
	printf("%i)\n", i++);//			49
	retft += ft_printf("ft: |% 5.9i|\n", 0);
	retor += printf(   "or: |% 5.9i|\n\n", 0);
	printf("%i)\n", i++);//			50
	retft += ft_printf("ft: |%-+.5i|\n", 0);
	retor += printf(   "or: |%-+.5i|\n\n", 0);
	printf("%i)\n", i++);//			51
	retft += ft_printf("ft: |%-+.1i| bonjour |%+.2i|\n", 0, 0);
	retor += printf(   "or: |%-+.1i| bonjour |%+.2i|\n\n", 0, 0);
	printf("%i)\n", i++);//			52
	retft += ft_printf("ft: |% 19.15d|\n", 'z');
 	retor += printf(   "or: |% 19.15d|\n\n", 'z');
	printf("%i)\n", i++);//			53
 	retft += ft_printf("ft: |% -16.5d|\n", 'z');
 	retor += printf(   "or: |% -16.5d|\n\n", 'z');
	printf("%i)\n", i++);//			54
	retft += ft_printf("ft: |%+.2lld|\n", -9223372036854775807);
	retor += printf(   "or: |%+.2lld|\n\n", -9223372036854775807);
	printf("%i)\n", i++);//			55
	retft += ft_printf("ft: |%lld|\n", -9223372036854775808);
	retor += printf(   "or: |%lld|\n\n", -9223372036854775808);
	printf("%i)\n", i++);//			56
 	retft += ft_printf("ft: |%+15ld|   |%+ld|\n", 56789456123, -56789456123);
 	retor += printf(   "or: |%+15ld|   |%+ld|\n\n", 56789456123, -56789456123);
	printf("%i)\n", i++);//			57
 	retft += ft_printf("ft: |%+-25.11lld|   |%+- 25.15lld|\n", 560533254999631232, -560533254999631232);
 	retor += printf(   "or: |%+-25.11lld|   |%+- 25.15lld|\n\n", 560533254999631232, -560533254999631232);

	printf("%i)\n", i++);//			58
	ft_printf("ft: |%X|\n", 421);
	printf("or: |%X|\n\n", 421);
	printf("\n\n");
	retft += ft_printf("\033[0mft: |TeSt%%  %s%  0000#27  ..###.001..#00d|\n", "BiZarrE", 666);
	retor += printf(       "or: |TeSt%%  %s%  0000#27  ..###.001..#00d|\n\n","BiZarrE", 666);
*/
	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n\n", retft, retor);
}

void		test_HEXA(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[32m**************HEXA****************\n\n");

		printf("%i)\n", i++);//			1
		retft += ft_printf("ft: |%#027X|\n", 4095);
		retor += printf(   "or: |%#027X|\n\n", 4095);
		printf("%i)\n", i++);//			2
		retft += ft_printf("ft: |%#027X|\n", 100);
		retor += printf(   "or: |%#027X|\n\n", 100);
		printf("%i)\n", i++);//			3
	 	retft += ft_printf("ft: |%#-27X|\n", 100);
	 	retor += printf(   "or: |%#-27X|\n\n", 100);
		printf("%i)\n", i++);//			4
	 	retft += ft_printf("ft: |%#10X|\n", 100);
	 	retor += printf(   "or: |%#10X|\n\n", 100);
		printf("%i)\n", i++);//			5
	 	retft += ft_printf("ft: |%#.5X|\n", 0);
	 	retor += printf(   "or: |%#.5X|\n\n", 0);
		printf("%i)\n", i++);//			6
	 	retft += ft_printf("ft: |%#027X|\n", 42);
	 	retor += printf(   "or: |%#027X|\n\n", 42);
		printf("%i)\n", i++);//			7
		retft += ft_printf("ft: |%#27X|\n", 4095);
		retor += printf(   "or: |%#27X|\n\n", 4095);
		printf("%i)\n", i++);//			8
		retft += ft_printf("ft: |%#027X|\n", -100);
		retor += printf(   "or: |%#027X|\n\n", -100);
		printf("%i)\n", i++);//			9
	 	retft += ft_printf("ft: |%#-27X|\n", -100);
	 	retor += printf(   "or: |%#-27X|\n\n", -100);
		printf("%i)\n", i++);//			10
	 	retft += ft_printf("ft: |%#10X|\n", -100);
	 	retor += printf(   "or: |%#10X|\n\n", -100);
		printf("%i)\n", i++);//			11
	 	retft += ft_printf("ft: |%#X|\n", -15);
	 	retor += printf(   "or: |%#X|\n\n", -15);
		printf("%i)\n", i++);//			12
	 	retft += ft_printf("ft: |%#-27X|\n", -42);
	 	retor += printf(   "or: |%#-27X|\n\n", -42);
		printf("%i)\n", i++);//			13
	 	retft += ft_printf("ft: |%#X|\n",  0);
	 	retor += printf(   "or: |%#X|\n\n",  0);
		printf("%i)\n", i++);//			14
	 	retft += ft_printf("ft: |%#.X|\n", 0);
	 	retor += printf(   "or: |%#.X|\n\n", 0);
		printf("%i)\n", i++);//			15
	 	retft += ft_printf("ft: |%#10X|\n", 0);
	 	retor += printf(   "or: |%#10X|\n\n", 0);
		printf("%i)\n", i++);//			16
	 	retft += ft_printf("ft: |%10.X|\n", 0);
	 	retor += printf(   "or: |%10.X|\n\n", 0);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n\n", retft, retor);
}

void		test_hexa(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[32m**************hexa****************\n\n");

		printf("%i)\n", i++);//			1
		retft += ft_printf("ft: |%#027x|\n", 4095);
		retor += printf(   "or: |%#027x|\n\n", 4095);
		printf("%i)\n", i++);//			2
		retft += ft_printf("ft: |%#027x|\n", 100);
		retor += printf(   "or: |%#027x|\n\n", 100);
		printf("%i)\n", i++);//			3
	 	retft += ft_printf("ft: |%#-27x|\n", 100);
	 	retor += printf(   "or: |%#-27x|\n\n", 100);
		printf("%i)\n", i++);//			4
	 	retft += ft_printf("ft: |%#10x|\n", 100);
	 	retor += printf(   "or: |%#10x|\n\n", 100);
		printf("%i)\n", i++);//			5
	 	retft += ft_printf("ft: |%#.5x|\n", 0);
	 	retor += printf(   "or: |%#.5x|\n\n", 0);
		printf("%i)\n", i++);//			6
	 	retft += ft_printf("ft: |%#-27x|\n", 42);
	 	retor += printf(   "or: |%#-27x|\n\n", 42);
		printf("%i)\n", i++);//			7
		retft += ft_printf("ft: |%#027x|\n", -4095);
		retor += printf(   "or: |%#027x|\n\n", -4095);
		printf("%i)\n", i++);//			8
		retft += ft_printf("ft: |%#027x|\n", -100);
		retor += printf(   "or: |%#027x|\n\n", -100);
		printf("%i)\n", i++);//			9
	 	retft += ft_printf("ft: |%#-27x|\n", -100);
	 	retor += printf(   "or: |%#-27x|\n\n", -100);
		printf("%i)\n", i++);//			10
	 	retft += ft_printf("ft: |%#10x|\n", -100);
	 	retor += printf(   "or: |%#10x|\n\n", -100);
		printf("%i)\n", i++);//			11
	 	retft += ft_printf("ft: |%#.5x|\n", -15);
	 	retor += printf(   "or: |%#.5x|\n\n", -15);
		printf("%i)\n", i++);//			12
	 	retft += ft_printf("ft: |%#027.5x|\n", -42);
	 	retor += printf(   "or: |%#027.5x|\n\n", -42);
		printf("%i)\n", i++);//			13
	 	retft += ft_printf("ft: |%#x|\n",  0);
	 	retor += printf(   "or: |%#x|\n\n",  0);
		printf("%i)\n", i++);//			14
	 	retft += ft_printf("ft: |%#.x|\n", 0);
	 	retor += printf(   "or: |%#.x|\n\n", 0);
		printf("%i)\n", i++);//			15
	 	retft += ft_printf("ft: |%#10x|\n", 0);
	 	retor += printf(   "or: |%#10x|\n\n", 0);
		printf("%i)\n", i++);//			16
	 	retft += ft_printf("ft: |%10.x|\n", 0);
	 	retor += printf(   "or: |%10.x|\n\n", 0);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n\n", retft, retor);
}

void		test_octal(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[33m**************OCTAL**************\n\n");

		printf("%i)\n", i++);//			1
	 	retft += ft_printf("ft: |%#27o|\n", 0xFF5);
	 	retor += printf(   "or: |%#27o|\n\n", 0xFF5);
		printf("%i)\n", i++);//			2
	 	retft += ft_printf("ft: |%#o|\n", 0xFF5);
	 	retor += printf(   "or: |%#o|\n\n", 0xFF5);
		printf("%i)\n", i++);//			3
	 	retft += ft_printf("ft: |%#o|\n",  0);
	 	retor += printf(   "or: |%#o|\n\n",  0);
		printf("%i)\n", i++);//			4
	 	retft += ft_printf("ft: |%o|\n",  101);
	 	retor += printf(   "or: |%o|\n\n",  101);
		printf("%i)\n", i++);//			5
	 	retft += ft_printf("ft: |%#5.o|\n", 0);
	 	retor += printf(   "or: |%#5.o|\n\n", 0);
		printf("%i)\n", i++);//			6
	 	retft += ft_printf("ft: |%10.o|\n", 0);
	 	retor += printf(   "or: |%10.o|\n\n", 0);
		printf("%i)\n", i++);//			7
	 	retft += ft_printf("ft: |%10.0o|\n", 0);
	 	retor += printf(   "or: |%10.0o|\n\n", 0);
		printf("%i)\n", i++);//			8
	 	retft += ft_printf("ft: |%.o|\n", 0);
	 	retor += printf(   "or: |%.o|\n\n", 0);
		printf("%i)\n", i++);//			9
	 	retft += ft_printf("ft: |%#.o|\n", 0);
	 	retor += printf(   "or: |%#.o|\n\n", 0);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n\n", retft, retor);
}

void		test_chr(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[34m**************CHAR**************\n\n");

		printf("%i)\n", i++);//			1
	 	retft += ft_printf("ft: |%10c|\n", 97);
	 	retor += printf(   "or: |%10c|\n\n", 97);
		printf("%i)\n", i++);//			2
	 	retft += ft_printf("ft: |%-9c|\n", 0);
	 	retor += printf(   "or: |%-9c|\n\n", 0);
		printf("%i)\n", i++);//			3
	 	retft += ft_printf("ft: |%-10c|\n", 98);
	 	retor += printf(   "or: |%-10c|\n\n", 98);
		printf("%i)\n", i++);//			4
	 	retft += ft_printf("ft: |%5c|\n", 99);
	 	retor += printf(   "or: |%5c|\n\n", 99);
		printf("%i)\n", i++);//			5
	 	retft += ft_printf("ft: Char: |%c| Char: |%c| Char: |%4c| Char: |%-3c|\n", 'T', 'E', 'S', 'T');
	 	retor += printf(   "or: Char: |%c| Char: |%c| Char: |%4c| Char: |%-3c|\n\n", 'T', 'E', 'S', 'T');
		printf("%i)\n", i++);//			6
	 	retft += ft_printf("ft: Char: |%-8c| Char: |%8c| Char: |%4c| Char: |%-53c|\n", 'T', 'E', 'S', 'T');
	 	retor += printf(   "or: Char: |%-8c| Char: |%8c| Char: |%4c| Char: |%-53c|\n\n", 'T', 'E', 'S', 'T');

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n\n", retft, retor);
}

void		test_str(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[35m**************STRING**************\n\n");

		printf("%i)\n", i++);//			1
	  	retft += ft_printf("ft: |%27s|\n", "Salut");
	  	retor += printf(   "or: |%27s|\n\n", "Salut");
		printf("%i)\n", i++);//			2
	  	retft += ft_printf("ft: |%-27s|\n", "Salut");
	  	retor += printf(   "or: |%-27s|\n\n", "Salut");
		printf("%i)\n", i++);//			3
	  	retft += ft_printf("ft: |%s|\n", "Salut");
	  	retor += printf(   "or: |%s|\n\n", "Salut");
		printf("%i)\n", i++);//			4
	  	retft += ft_printf("ft: |%2s|\n", "Salut");
	  	retor += printf(   "or: |%2s|\n\n", "Salut");
		printf("%i)\n", i++);//			5
	  	retft += ft_printf("ft: |%-.2s|\n", "Salut");
	  	retor += printf(   "or: |%-.2s|\n\n", "Salut");
		printf("%i)\n", i++);//			6
	  	retft += ft_printf("ft: |%8.15s|\n", "Salut");
	  	retor += printf(   "or: |%8.15s|\n\n", "Salut");
		printf("%i)\n", i++);//			7
	  	retft += ft_printf("ft: |%.20s|\n", "Salut");
	  	retor += printf(   "or: |%.20s|\n\n", "Salut");
		printf("%i)\n", i++);//			8
	  	retft += ft_printf("ft: |%.200s|\n", "");
	  	retor += printf(   "or: |%.200s|\n\n", "");
		printf("%i)\n", i++);//			9
	  	retft += ft_printf("ft: |%27s|\n", "");
	  	retor += printf(   "or: |%27s|\n\n", "");
		printf("%i)\n", i++);//			10
	  	retft += ft_printf("ft: |%-27s|\n", "");
	  	retor += printf(   "or: |%-27s|\n\n", "");
		printf("%i)\n", i++);//			11
	 	retft += ft_printf("ft: |%25s|\n", "Bonjour");
	 	retor += printf(   "or: |%25s|\n\n", "Bonjour");
		printf("%i)\n", i++);//			12
	 	retft += ft_printf("ft: |%.27s|\n", "0s");
	 	retor += printf(   "or: |%.27s|\n\n", "0s");
		printf("%i)\n", i++);//			13
	 	retft += ft_printf("ft: |%5.s|\n", "42");
	 	retor += printf(   "or: |%5.s|\n\n", "42");
		printf("%i)\n", i++);//			14
	 	retft += ft_printf("ft: Str: |%s|\n", "abcde");
	 	retor += printf(   "or: Str: |%s|\n\n", "abcde");
		printf("%i)\n", i++);//			15
	 	retft += ft_printf("ft: Str: |%8.6s|\n", "abcd");
	 	retor += printf(   "or: Str: |%8.6s|\n\n", "abcd");
		printf("%i)\n", i++);//			16
		retft += ft_printf("ft: Str: |%-9s|\n", "abcd");
		retor += printf(   "or: Str: |%-9s|\n\n", "abcd");
		printf("%i)\n", i++);//			17
		retft += ft_printf("ft: Ceci |%s| un |%s|\n", "est", "test.");
		retor += printf(   "or: Ceci |%s| un |%s|\n\n\n", "est", "test.");
		printf("%i)\n", i++);//			18
		retft += ft_printf("ft: |%s|\n", NULL);
		retor += printf(   "or: |%s|\n\n", NULL);
		printf("%i)\n", i++);//			19
	 	retft += ft_printf("ft: |%15.4s|\n", NULL);
	 	retor += printf(   "or: |%15.4s|\n\n", NULL);
		printf("%i)\n", i++);//			20
	  	retft += ft_printf("ft: |%-27s|\n", NULL);
	  	retor += printf(   "or: |%-27s|\n\n", NULL);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n\n", retft, retor);
}

void	test_ptr(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[36m**************PTR**************\n\n");

	printf("%i)\n", i++);//			1
	retft += ft_printf("ft: |%27p|\n", &retft);
	retor += printf(   "or: |%27p|\n\n", &retft);
	printf("%i)\n", i++);//			2
	retft += ft_printf("ft: |%27p|\n", &retor);
	retor += printf(   "or: |%27p|\n\n", &retor);
	printf("%i)\n", i++);//			3
	retft += ft_printf("|%10p|\n", NULL);
	retor += printf(   "|%10p|\n\n", NULL);
	printf("%i)\n", i++);//			4
	retft += ft_printf("|%-10p|\n", NULL);
	retor += printf(   "|%-10p|\n\n", NULL);
	printf("%i)\n", i++);//			5
	retft += ft_printf("|%10p|\n", NULL);
	retor += printf(   "|%10p|\n\n", NULL);
	printf("%i)\n", i++);//			6
	retft += ft_printf("|%p|\n", NULL);
	retor += printf(   "|%p|\n\n", NULL);
	printf("%i)\n", i++);//			7
	retft += ft_printf("|%.p|, |%.p|\n", &retor, NULL);
	retor += printf(   "|%.p|, |%.p|\n\n", &retor, NULL);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n\n", retft, retor);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_strchr(argv[1], 'd') || ft_strchr(argv[1], 'i'))
			test_int();
		if (ft_strchr(argv[1], 'o'))
			test_octal();
		if (ft_strchr(argv[1], 'x'))
			test_hexa();
		if (ft_strchr(argv[1], 'X'))
			test_HEXA();
		if (ft_strchr(argv[1], 'c'))
			test_chr();
		if (ft_strchr(argv[1], 's'))
			test_str();
		if (ft_strchr(argv[1], '%'))
			test_percent();
		if (ft_strchr(argv[1], 'p'))
			test_ptr();
		if(ft_strstr(argv[1], "all"))
		{
			test_percent();
			test_int();
			test_hexa();
			test_HEXA();
			test_octal();
			test_chr();
			test_str();
			test_ptr();
		}		
	}
}

/*int	main(int ac, char **av)
{
	int		i;

	if (ac != 3)
		return (0);
	i = atoi(av[2]);
	ft_putstr("\n  mine: |");
	ft_printf(av[1], i);
	ft_putstr("|\n");
	printf("printf: |");
	printf(av[1], i);
	printf("|");
	return (0);
}*/