/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/21 14:53:24 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/29 12:19:59 by vicaster    ###    #+. /#+    ###.fr     */
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
	ft_printf("**************PERCENT****************\n");
	printf("\n%i)\n", i++);//			1
 	retft += ft_printf("ft: |%%|\n");
 	retor += printf(   "or: |%%|\n");
	printf("\n%i)\n", i++);//			2
 	retft += ft_printf("ft: |%010%|\n");
 	retor += printf(   "or: |%010%|\n");
	printf("\n%i)\n", i++);//			3
 	retft += ft_printf("ft: |%#10%|\n");
 	retor += printf(   "or: |%#10%|\n");
 	printf("\n%i)\n", i++);//			4
 	retft += ft_printf("ft: |%10%|\n");
 	retor += printf(   "or: |%10%|\n");
	printf("\n%i)\n", i++);//			5
 	retft += ft_printf("ft: |%-10%|\n");
 	retor += printf(   "or: |%-10%|\n");
	printf("\n%i)\n", i++);//			6
 	retft += ft_printf("ft: |%.10%|\n");
 	retor += printf(   "or: |%.10%|\n");
	printf("\n%i)\n", i++);//			7
 	retft += ft_printf("ft: |%-05.10%|\n");
 	retor += printf(   "or: |%-05.10%|\n");

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n", retft, retor);
}

void		test_int(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;	
	ft_printf("\033[31m**************INT****************\n");

	printf("\n%i)\n", i++);//			1
	retft += ft_printf("ft: |%+01d|   |%+01d|  |%+01d|\n", 56, -56, 0);
	retor += printf(   "or: |%+01d|   |%+01d|  |%+01d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			2
	retft += ft_printf("ft: |%+02d|   |%+02d|  |%+02d|\n", 56, -56, 0);
	retor += printf(   "or: |%+02d|   |%+02d|  |%+02d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			3
	retft += ft_printf("ft: |%+05d|   |%+05d|  |%+05d|\n", 56, -56, 0);
	retor += printf(   "or: |%+05d|   |%+05d|  |%+05d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			4
	retft += ft_printf("ft: |%5d|   |%5d|  |%5d|\n", 56, -56, 0);
	retor += printf(   "or: |%5d|   |%5d|  |%5d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			5
	retft += ft_printf("ft: |% d|   |% d|  |% d|\n", 56, -56, 0);
	retor += printf(   "or: |% d|   |% d|  |% d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			6
	retft += ft_printf("ft: |% 5d|   |% 5d|  |% 5d|\n", 5, -5, 0);
	retor += printf(   "or: |% 5d|   |% 5d|  |% 5d|\n", 5, -5, 0);
	printf("\n%i)\n", i++);//			7
	retft += ft_printf("ft: |%+d|   |%+d|  |%+d|\n", 56, -56, 0);
	retor += printf(   "or: |%+d|   |%+d|  |%+d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			8
	retft += ft_printf("ft: |%+5d|   |%+5d|  |%+5d|\n", 56, -56, 0);
	retor += printf(   "or: |%+5d|   |%+5d|  |%+5d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			9
	retft += ft_printf("ft: |%-d|   |%-d|  |%-d|\n", 56, -56, 0);
	retor += printf(   "or: |%-d|   |%-d|  |%-d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			10
	retft += ft_printf("ft: |%-5d|   |%-5d|  |%-5d|\n", 56, -56, 0);
	retor += printf(   "or: |%-5d|   |%-5d|  |%-5d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			11
	retft += ft_printf("ft: |% -5d|   |% -5d|  |% -5d|\n", 56, -56, 0);
	retor += printf(   "or: |% -5d|   |% -5d|  |% -5d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			12
	retft += ft_printf("ft: |%0d| |%0d| |%0d|\n", 42, -42, 0);
	retor += printf(   "or: |%0d| |%0d| |%0d|\n", 42, -42, 0);
	printf("\n%i)\n", i++);//			13
	retft += ft_printf("ft: |%0005d|  |%0005d|  |%0005d|\n", 42, -42, 0);
	retor += printf(   "or: |%0005d|  |%0005d|  |%0005d|\n", 42, -42, 0);
	printf("\n%i)\n", i++);//			14
 	retft += ft_printf("ft: |%03d|  |%03d|  |%03d|\n", 123, -123, 0);
 	 retor += printf(  "or: |%03d|  |%03d|  |%03d|\n", 123, -123, 0);
	printf("\n%i)\n", i++);//			15
 	retft += ft_printf("ft: |%015d|  |%015d|  |%015d|\n", 101, -101, 0);
 	retor += printf(   "or: |%015d|  |%015d|  |%015d|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			16
	retft += ft_printf("ft: |%07d|   |%07d|   |%07d|\n", 56, -56, 0);
	retor += printf(   "or: |%07d|   |%07d|   |%07d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			17
 	retft += ft_printf("ft: |%0 2d|  |%0 2d|  |%0 2d|\n", 101, -101, 0);
 	retor += printf(   "or: |%0 2d|  |%0 2d|  |%0 2d|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			18
 	retft += ft_printf("ft: |%0 20d|  |%0 20d|  |%0 20d|\n", 101, -101, 0);
 	retor += printf(   "or: |%0 20d|  |%0 20d|  |%0 20d|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			19
 	retft += ft_printf("ft: |%0 33d| |%0 33d| |%0 33d|\n", 256, -256, 0);
 	retor += printf(   "or: |%0 33d| |%0 33d| |%0 33d|\n", 256, -256, 0);
	printf("\n%i)\n", i++);//			20
	retft += ft_printf("ft: |%010d| |%010d| |%010d|\n", 42, -42, 0);
	retor += printf(   "or: |%010d| |%010d| |%010d|\n", 42, -42, 0);
	printf("\n%i)\n", i++);//			21
	retft += ft_printf("ft: |%010i| |%010i| |%010i|\n", 59, -59, 0);
	retor += printf(   "or: |%010i| |%010i| |%010i|\n", 59, -59, 0);
	printf("\n%i)\n", i++);//			22
	retft += ft_printf("ft: |%+07d|  |%+07d|  |%+07d|\n", 56, -56, 0);
	retor += printf(   "or: |%+07d|  |%+07d|  |%+07d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			23
	retft += ft_printf("ft: |% 015i| |% 015i| |% 015i|\n", 101, -101, 0);
	retor += printf(   "or: |% 015i| |% 015i| |% 015i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			24
	retft += ft_printf("ft: |%0d|  |%0d|  |%0d|\n", 56, -56, 0);
	retor += printf(   "or: |%0d|  |%0d|  |%0d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			25
 	retft += ft_printf("ft: | %d|\n", 101);
 	retor += printf(   "or: | %d|\n", 101);
	printf("\n%i)\n", i++);//			26
 	retft += ft_printf("ft: |% d|\n", 101);
 	retor += printf(   "or: |% d|\n", 101);
	printf("\n%i)\n", i++);//			27
 	retft += ft_printf("ft: |%27d|\n", 101);
 	retor += printf(   "or: |%27d|\n", 101);
	printf("\n%i)\n", i++);//			28
 	retft += ft_printf("ft: |%27d|\n", -101);
 	retor += printf(   "or: |%27d|\n", -101);
	printf("\n%i)\n", i++);//			29
 	retft += ft_printf("ft: |%-27d|\n", -101);
 	retor += printf(   "or: |%-27d|\n", -101);
	printf("\n%i)\n", i++);//			30
 	retft += ft_printf("ft: |%d|\n", 0);
 	retor += printf(   "or: |%d|\n", 0);
	printf("\n%i)\n", i++);//			31
 	retft += ft_printf("ft: |%d|\n", -92233);
 	retor += printf(   "or: |%d|\n", -92233);
	printf("\n%i)\n", i++);//			32
	retft += ft_printf("ft: |%- 15d|\n", 101);
	retor += printf(   "or: |%- 15d|\n", 101);
	printf("\n%i)\n", i++);//			33
 	retft += ft_printf("ft: |% d|\n", 123456789);
 	retor += printf(   "or: |% d|\n", 123456789);
	printf("\n%i)\n", i++);//			34
 	retft += ft_printf("ft: |% 27d|\n", -123456789);
 	retor += printf(   "or: |% 27d|\n", -123456789);
	printf("\n%i)\n", i++);//			35
	retft += ft_printf("ft: |%- d|\n", 101);
	retor += printf(   "or: |%- d|\n", 101);
	printf("\n%i)\n", i++);//			36
	retft += ft_printf("ft: |%-+i|\n", 0);
	retor += printf(   "or: |%-+i|\n", 0);
	printf("\n%i)\n", i++);//			37
	retft += ft_printf("ft: |%-+15i| et |%+015i|\n", 987, -987);
	retor += printf(   "or: |%-+15i| et |%+015i|\n", 987, -987);
	printf("\n%i)\n", i++);//			38
 	retft += ft_printf("ft: |%.d|  |%.d|  |%.d|\n", 101, -101, 0);
 	retor += printf(   "or: |%.d|  |%.d|  |%.d|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			39
	retft += ft_printf("ft: |%.1d|  |%.1d|  |%.1d|\n", 101, -101, 0);
	retor += printf(   "or: |%.1d|  |%.1d|  |%.1d|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			40
	retft += ft_printf("ft: |%.2d|  |%.2d|  |%.2d|\n", 101, -101, 0);
	retor += printf(   "or: |%.2d|  |%.2d|  |%.2d|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			41
	retft += ft_printf("ft: |%.5d|   |%.5d|  |%.5d|\n", 101, -101, 0);
	retor += printf(   "or: |%.5d|   |%.5d|  |%.5d|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			42
	retft += ft_printf("ft: |%-10.0i| |%-10.0i| |%-10.0i|\n", 101, -101, 0);
	retor += printf(   "or: |%-10.0i| |%-10.0i| |%-10.0i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			43
	retft += ft_printf("ft: |%-.0i| |%-.0i| |%-.0i|\n", 101, -101, 0);
	retor += printf(   "or: |%-.0i| |%-.0i| |%-.0i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			44
	retft += ft_printf("ft: |%-2.0i| |%-2.0i| |%-3.0i|\n", 101, -101, 0);
	retor += printf(   "or: |%-2.0i| |%-2.0i| |%-3.0i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			45
	retft += ft_printf("ft: |%10.0i| |%10.0i| |%10.0i|\n", 101, -101, 0);
	retor += printf(   "or: |%10.0i| |%10.0i| |%10.0i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			46
	retft += ft_printf("ft: |%2.0i| |%2.0i| |%2.0i|\n", 101, -101, 0);
	retor += printf(   "or: |%2.0i| |%2.0i| |%2.0i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			47
	retft += ft_printf("ft: |%+2.i| |%+2.i| |%+2.i|\n", 101, -101, 0);
	retor += printf(   "or: |%+2.i| |%+2.i| |%+2.i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			48
	retft += ft_printf("ft: |%+7.i| |%+7.i| |%+7.i|\n", 101, -101, 0);
	retor += printf(   "or: |%+7.i| |%+7.i| |%+7.i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			49
	retft += ft_printf("ft: |%+15.0i| |%+15.0i| |%+15.0i|\n", 101, -101, 0);
 	retor += printf(   "or: |%+15.0i| |%+15.0i| |%+15.0i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			50
 	retft += ft_printf("ft: |%5.2i| |%5.2i| |%5.2i|\n", 101, -101, 0);
 	retor += printf(   "or: |%5.2i| |%5.2i| |%5.2i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			51
	retft += ft_printf("ft: |%5.5i| |%5.5i| |%5.5i|\n", 101, -101, 0);
	retor += printf(   "or: |%5.5i| |%5.5i| |%5.5i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			52
	retft += ft_printf("ft: |%5.8i| |%5.8i| |%5.8i|\n", 101, -101, 0);
	retor += printf(   "or: |%5.8i| |%5.8i| |%5.8i|\n", 101, -101, 0);
	printf("\n%i)\n", i++);//			53
	retft += ft_printf("ft: |%030.d|  |%030.d|  |%030.d|\n", 987, -987, 0);
	retor += printf(   "or: |%030.d|  |%030.d|  |%030.d|\n", 987, -987, 0);
	printf("\n%i)\n", i++);//			54
	retft += ft_printf("ft: |%0+7.15d|   |%0+7.15d|  |%0+7.15d|\n", 56, -56, 0);
	retor += printf(   "or: |%0+7.15d|   |%0+7.15d|  |%0+7.15d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			55
	retft += ft_printf("ft: |%0+7.5d|   |%0+7.5d|  |%0+7.5d|\n", 56, -56, 0);
	retor += printf(   "or: |%0+7.5d|   |%0+7.5d|  |%0+7.5d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			56
	retft += ft_printf("ft: |%0+7.d|   |%0+7.d|  |%0+7.d|\n", 56, -56, 0);
	retor += printf(   "or: |%0+7.d|   |%0+7.d|  |%0+7.d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			57
	retft += ft_printf("ft: |%+10.5d| |%+10.5d| |%+10.5d|\n", 4242, -4242, 0);
 	retor += printf(   "or: |%+10.5d| |%+10.5d| |%+10.5d|\n", 4242, -4242, 0);
	printf("\n%i)\n", i++);//			58
	retft += ft_printf("ft: |% 10.15d| |% 10.5d| |% 10.15d|\n", 4242, -4242, 0);
	retor += printf(   "or: |% 10.15d| |% 10.5d| |% 10.15d|\n", 4242, -4242, 0);
	printf("\n%i)\n", i++);//			59
	retft += ft_printf("ft: |% 10.9d|  |% 10.9d|  |% 10.9d|\n", 4242, -4242, 0);
	retor += printf(   "or: |% 10.9d|  |% 10.9d|  |% 10.9d|\n", 4242, -4242, 0);
	printf("\n%i)\n", i++);//			60
	retft += ft_printf("ft: |%0+7.2d|   |%0+7.2d|  |%0+7.2d|\n", 56, -56, 0);
	retor += printf(   "or: |%0+7.2d|   |%0+7.2d|  |%0+7.2d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			61
 	retft += ft_printf("ft: |%0+7.7d|   |%0+7.7d|  |%0+7.7d|\n", 56, -56, 0);
 	retor += printf(   "or: |%0+7.7d|   |%0+7.7d|  |%0+7.7d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			62
 	retft += ft_printf("ft: |%0+7.15d|   |%0+7.15d|  |%0+7.15d|\n", 56, -56, 0);
 	retor += printf(   "or: |%0+7.15d|   |%0+7.15d|  |%0+7.15d|\n", 56, -56, 0);
	printf("\n%i)\n", i++);//			63
 	retft += ft_printf("ft: |%-15.10d|\n", 101);
 	retor += printf(   "or: |%-15.10d|\n", 101);
/*	printf("\n%i)\n", i++);//			64
	retft += ft_printf("ft: |%+.2lld|\n", -9223372036854775807);
	retor += printf(   "or: |%+.2lld|\n", -9223372036854775807);
	printf("\n%i)\n", i++);//			33
 	retft += ft_printf("ft: |%27ld|\n", -9223372036854775807);
 	retor += printf(   "or: |%27ld|\n", -9223372036854775807);
	printf("\n%i)\n", i++);//			55
	retft += ft_printf("ft: |%lld|\n", -9223372036854775808);
	retor += printf(   "or: |%lld|\n", -9223372036854775808);
	printf("\n%i)\n", i++);//			56
 	retft += ft_printf("ft: |%+15ld|   |%+ld|\n", 56789456123, -56789456123);
 	retor += printf(   "or: |%+15ld|   |%+ld|\n", 56789456123, -56789456123);
	printf("\n%i)\n", i++);//			57
 	retft += ft_printf("ft: |%+-25.11lld|   |%+- 25.15lld|\n", 560533254999631232, -560533254999631232);
 	retor += printf(   "or: |%+-25.11lld|   |%+- 25.15lld|\n", 560533254999631232, -560533254999631232);

	printf("\n%i)\n", i++);//			58
	ft_printf("ft: |%X|\n", 421);
	printf("or: |%X|\n", 421);
	printf("\n");
	retft += ft_printf("\033[0mft: |TeSt%%  %s%  0000#27  ..###.001..#00d|\n", "BiZarrE", 666);
	retor += printf(       "or: |TeSt%%  %s%  0000#27  ..###.001..#00d|\n","BiZarrE", 666);
*/
	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n", retft, retor);
}

void		test_HEXA(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[32m**************HEXA****************\n");

		printf("\n%i)\n", i++);//			1
		retft += ft_printf("ft: |%#027X|\n", 4095);
		retor += printf(   "or: |%#027X|\n", 4095);
		printf("\n%i)\n", i++);//			2
		retft += ft_printf("ft: |%#027X|\n", 100);
		retor += printf(   "or: |%#027X|\n", 100);
		printf("\n%i)\n", i++);//			3
	 	retft += ft_printf("ft: |%#27X|\n", 100);
	 	retor += printf(   "or: |%#27X|\n", 100);
		printf("\n%i)\n", i++);//			4
	 	retft += ft_printf("ft: |%#10X|\n", 100);
	 	retor += printf(   "or: |%#10X|\n", 100);
		printf("\n%i)\n", i++);//			5
	 	retft += ft_printf("ft: |%#.5X|\n", 0);
	 	retor += printf(   "or: |%#.5X|\n", 0);
		printf("\n%i)\n", i++);//			6
	 	retft += ft_printf("ft: |%#027X|\n", 42);
	 	retor += printf(   "or: |%#027X|\n", 42);
		printf("\n%i)\n", i++);//			7
		retft += ft_printf("ft: |%#27X|\n", 4095);
		retor += printf(   "or: |%#27X|\n", 4095);
		printf("\n%i)\n", i++);//			8
		retft += ft_printf("ft: |%#027X|\n", -100);
		retor += printf(   "or: |%#027X|\n", -100);
		printf("\n%i)\n", i++);//			9
	 	retft += ft_printf("ft: |%#-27X|\n", -100);
	 	retor += printf(   "or: |%#-27X|\n", -100);
		printf("\n%i)\n", i++);//			10
	 	retft += ft_printf("ft: |%#10X|\n", -100);
	 	retor += printf(   "or: |%#10X|\n", -100);
		printf("\n%i)\n", i++);//			11
	 	retft += ft_printf("ft: |%#X|\n", -15);
	 	retor += printf(   "or: |%#X|\n", -15);
		printf("\n%i)\n", i++);//			12
	 	retft += ft_printf("ft: |%#-27X|\n", -42);
	 	retor += printf(   "or: |%#-27X|\n", -42);
		printf("\n%i)\n", i++);//			13
	 	retft += ft_printf("ft: |%#X|\n",  0);
	 	retor += printf(   "or: |%#X|\n",  0);
		printf("\n%i)\n", i++);//			14
	 	retft += ft_printf("ft: |%#.X|\n", 0);
	 	retor += printf(   "or: |%#.X|\n", 0);
		printf("\n%i)\n", i++);//			15
	 	retft += ft_printf("ft: |%#10X|\n", 0);
	 	retor += printf(   "or: |%#10X|\n", 0);
		printf("\n%i)\n", i++);//			16
	 	retft += ft_printf("ft: |%10.X|\n", 0);
	 	retor += printf(   "or: |%10.X|\n", 0);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n", retft, retor);
}

void		test_hexa(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[32m**************hexa****************\n");

		printf("\n%i)\n", i++);//			1
		retft += ft_printf("ft: |%#027x|\n", 4095);
		retor += printf(   "or: |%#027x|\n", 4095);
		printf("\n%i)\n", i++);//			2
		retft += ft_printf("ft: |%#027x|\n", 100);
		retor += printf(   "or: |%#027x|\n", 100);
		printf("\n%i)\n", i++);//			3
	 	retft += ft_printf("ft: |%#-27x|\n", 100);
	 	retor += printf(   "or: |%#-27x|\n", 100);
		printf("\n%i)\n", i++);//			4
	 	retft += ft_printf("ft: |%#10x|\n", 100);
	 	retor += printf(   "or: |%#10x|\n", 100);
		printf("\n%i)\n", i++);//			5
	 	retft += ft_printf("ft: |%#.5x|\n", 0);
	 	retor += printf(   "or: |%#.5x|\n", 0);
		printf("\n%i)\n", i++);//			6
	 	retft += ft_printf("ft: |%#-27x|\n", 42);
	 	retor += printf(   "or: |%#-27x|\n", 42);
		printf("\n%i)\n", i++);//			7
		retft += ft_printf("ft: |%#027x|\n", -4095);
		retor += printf(   "or: |%#027x|\n", -4095);
		printf("\n%i)\n", i++);//			8
		retft += ft_printf("ft: |%#027x|\n", -100);
		retor += printf(   "or: |%#027x|\n", -100);
		printf("\n%i)\n", i++);//			9
	 	retft += ft_printf("ft: |%#-27x|\n", -100);
	 	retor += printf(   "or: |%#-27x|\n", -100);
		printf("\n%i)\n", i++);//			10
	 	retft += ft_printf("ft: |%#10x|\n", -100);
	 	retor += printf(   "or: |%#10x|\n", -100);
		printf("\n%i)\n", i++);//			11
	 	retft += ft_printf("ft: |%#.2x|\n", 150);
	 	retor += printf(   "or: |%#.2x|\n", 150);
		printf("\n%i)\n", i++);//			12
	 	retft += ft_printf("ft: |%#027.5x|\n", -42);
	 	retor += printf(   "or: |%#027.5x|\n", -42);
		printf("\n%i)\n", i++);//			13
	 	retft += ft_printf("ft: |%#x|\n",  0);
	 	retor += printf(   "or: |%#x|\n",  0);
		printf("\n%i)\n", i++);//			14
	 	retft += ft_printf("ft: |%#.x|\n", 0);
	 	retor += printf(   "or: |%#.x|\n", 0);
		printf("\n%i)\n", i++);//			15
	 	retft += ft_printf("ft: |%#10x|\n", 0);
	 	retor += printf(   "or: |%#10x|\n", 0);
		printf("\n%i)\n", i++);//			16
	 	retft += ft_printf("ft: |%10.x|\n", 0);
	 	retor += printf(   "or: |%10.x|\n", 0);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n", retft, retor);
}

void		test_octal(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[33m**************OCTAL**************\n");

		printf("\n%i)\n", i++);//			1
	 	retft += ft_printf("ft: |%o|\n", 0xFF5);
	 	retor += printf(   "or: |%o|\n", 0xFF5);
		printf("\n%i)\n", i++);//			2
	 	retft += ft_printf("ft: |%#27o|\n", 0xFF5);
	 	retor += printf(   "or: |%#27o|\n", 0xFF5);
		printf("\n%i)\n", i++);//			3
	 	retft += ft_printf("ft: |%#o|\n", 101);
	 	retor += printf(   "or: |%#o|\n", 101);
		printf("\n%i)\n", i++);//			4
	 	retft += ft_printf("ft: |%#o|\n",  0);
	 	retor += printf(   "or: |%#o|\n",  0);
		printf("\n%i)\n", i++);//			5
	 	retft += ft_printf("ft: |%o|\n",  -101);
	 	retor += printf(   "or: |%o|\n",  -101);
		printf("\n%i)\n", i++);//			6
	 	retft += ft_printf("ft: |%#5.o|\n", 0);
	 	retor += printf(   "or: |%#5.o|\n", 0);
		printf("\n%i)\n", i++);//			7
	 	retft += ft_printf("ft: |%5.o|\n", 0);
	 	retor += printf(   "or: |%5.o|\n", 0);
		printf("\n%i)\n", i++);//			8
	 	retft += ft_printf("ft: |%10.0o|\n", 0);
	 	retor += printf(   "or: |%10.0o|\n", 0);
		printf("\n%i)\n", i++);//			9
	 	retft += ft_printf("ft: |%.o|\n", 0);
	 	retor += printf(   "or: |%.o|\n", 0);
		printf("\n%i)\n", i++);//			10
	 	retft += ft_printf("ft: |%#.o|\n", 0);
	 	retor += printf(   "or: |%#.o|\n", 0);
		printf("\n%i)\n", i++);//			11
	 	retft += ft_printf("ft: |%.o|\n", 101);
	 	retor += printf(   "or: |%.o|\n", 101);
		printf("\n%i)\n", i++);//			12
	 	retft += ft_printf("ft: |%#.o|\n", 101);
	 	retor += printf(   "or: |%#.o|\n", 101);
		printf("\n%i)\n", i++);//			13
	 	retft += ft_printf("ft: |%.15o|\n", 0);
	 	retor += printf(   "or: |%.15o|\n", 0);
		printf("\n%i)\n", i++);//			14
	 	retft += ft_printf("ft: |%.5o|\n", 101);
	 	retor += printf(   "or: |%.5o|\n", 101);
		printf("\n%i)\n", i++);//			15
	 	retft += ft_printf("ft: |%#.5o|\n", 0);
	 	retor += printf(   "or: |%#.5o|\n", 0);
		printf("\n%i)\n", i++);//			16
	 	retft += ft_printf("ft: |%#.5o|\n", 101);
	 	retor += printf(   "or: |%#.5o|\n", 101);
		printf("\n%i)\n", i++);//			17
	 	retft += ft_printf("ft: |%-6o|\n", 101);
	 	retor += printf(   "or: |%-6o|\n", 101);
		printf("\n%i)\n", i++);//			18
	 	retft += ft_printf("ft: |%o|\n", 0);
	 	retor += printf(   "or: |%o|\n", 0);
		printf("\n%i)\n", i++);//			19
	 	retft += ft_printf("ft: |%-15o|\n", 101);
	 	retor += printf(   "or: |%-15o|\n", 101);
		printf("\n%i)\n", i++);//			20
	 	retft += ft_printf("ft: |%#-15o|\n", 101);
	 	retor += printf(   "or: |%#-15o|\n", 101);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n", retft, retor);
}

void		test_chr(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[34m******************CHAR******************\n");

		printf("\n%i)\n", i++);//			1
	 	retft += ft_printf("ft: |%10c|\n", 97);
	 	retor += printf(   "or: |%10c|\n", 97);
		printf("\n%i)\n", i++);//			2
	 	retft += ft_printf("ft: |%-9c|\n", 0);
	 	retor += printf(   "or: |%-9c|\n", 0);
		printf("\n%i)\n", i++);//			3
	 	retft += ft_printf("ft: |%-10c|\n", 98);
	 	retor += printf(   "or: |%-10c|\n", 98);
		printf("\n%i)\n", i++);//			4
	 	retft += ft_printf("ft: |%5c|\n", 99);
	 	retor += printf(   "or: |%5c|\n", 99);
		printf("\n%i)\n", i++);//			5
	 	retft += ft_printf("ft: Char: |%c| Char: |%c| Char: |%5c| Char: |%-3c|\n", 'T', 'E', 'S', 'T');
	 	retor += printf(   "or: Char: |%c| Char: |%c| Char: |%5c| Char: |%-3c|\n", 'T', 'E', 'S', 'T');
		printf("\n%i)\n", i++);//			6
	 	retft += ft_printf("ft: Char: |%-8c| Char: |%8c| Char: |%4c| Char: |%-53c|\n", 'T', 'E', 'S', 'T');
	 	retor += printf(   "or: Char: |%-8c| Char: |%8c| Char: |%4c| Char: |%-53c|\n", 'T', 'E', 'S', 'T');

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n", retft, retor);
}

void		test_str(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[35m**************STRING**************\n");

		printf("\n%i)\n", i++);//			1
	  	retft += ft_printf("ft: |%27s|\n", "Salut");
	  	retor += printf(   "or: |%27s|\n", "Salut");
		printf("\n%i)\n", i++);//			2
	  	retft += ft_printf("ft: |%-27s|\n", "Salut");
	  	retor += printf(   "or: |%-27s|\n", "Salut");
		printf("\n%i)\n", i++);//			3
	  	retft += ft_printf("ft: |%s|\n", "Salut");
	  	retor += printf(   "or: |%s|\n", "Salut");
		printf("\n%i)\n", i++);//			4
	  	retft += ft_printf("ft: |%2s|\n", "Salut");
	  	retor += printf(   "or: |%2s|\n", "Salut");
		printf("\n%i)\n", i++);//			5
	  	retft += ft_printf("ft: |%-.2s|\n", "Salut");
	  	retor += printf(   "or: |%-.2s|\n", "Salut");
		printf("\n%i)\n", i++);//			6
	  	retft += ft_printf("ft: |%8.13s|\n", "Salut");
	  	retor += printf(   "or: |%8.13s|\n", "Salut");
		printf("\n%i)\n", i++);//			7
	  	retft += ft_printf("ft: |%.20s|\n", "Salut");
	  	retor += printf(   "or: |%.20s|\n", "Salut");
		printf("\n%i)\n", i++);//			8
	  	retft += ft_printf("ft: |%.200s|\n", "");
	  	retor += printf(   "or: |%.200s|\n", "");
		printf("\n%i)\n", i++);//			9
	  	retft += ft_printf("ft: |%27s|\n", "");
	  	retor += printf(   "or: |%27s|\n", "");
		printf("\n%i)\n", i++);//			10
	  	retft += ft_printf("ft: |%-27s|\n", "");
	  	retor += printf(   "or: |%-27s|\n", "");
		printf("\n%i)\n", i++);//			11
	 	retft += ft_printf("ft: |%25s|\n", "Bonjour");
	 	retor += printf(   "or: |%25s|\n", "Bonjour");
		printf("\n%i)\n", i++);//			12
	 	retft += ft_printf("ft: |%.27s|\n", "0s");
	 	retor += printf(   "or: |%.27s|\n", "0s");
		printf("\n%i)\n", i++);//			13
	 	retft += ft_printf("ft: |%5.s|\n", "42");
	 	retor += printf(   "or: |%5.s|\n", "42");
		printf("\n%i)\n", i++);//			14
	 	retft += ft_printf("ft: Str: |%s|\n", "abcde");
	 	retor += printf(   "or: Str: |%s|\n", "abcde");
		printf("\n%i)\n", i++);//			15
	 	retft += ft_printf("ft: Str: |%8.6s|\n", "abcd");
	 	retor += printf(   "or: Str: |%8.6s|\n", "abcd");
		printf("\n%i)\n", i++);//			16
		retft += ft_printf("ft: Str: |%-9s|\n", "abcd");
		retor += printf(   "or: Str: |%-9s|\n", "abcd");
		printf("\n%i)\n", i++);//			17
		retft += ft_printf("ft: Ceci |%s| un |%s|\n", "est", "test.");
		retor += printf(   "or: Ceci |%s| un |%s|\n", "est", "test.");
		printf("\n%i)\n", i++);//			18
		retft += ft_printf("ft: |%s|\n", NULL);
		retor += printf(   "or: |%s|\n", NULL);
		printf("\n%i)\n", i++);//			19
	 	retft += ft_printf("ft: |%15.4s|\n", NULL);
	 	retor += printf(   "or: |%15.4s|\n", NULL);
		printf("\n%i)\n", i++);//			20
	  	retft += ft_printf("ft: |%-27s|\n", NULL);
	  	retor += printf(   "or: |%-27s|\n", NULL);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n", retft, retor);
}

void	test_ptr(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[36m**************PTR**************\n");

	printf("\n%i)\n", i++);//			1
	retft += ft_printf("ft: |%27p|\n", &retor);
	retor += printf(   "or: |%27p|\n", &retor);
	printf("\n%i)\n", i++);//			2
	retft += ft_printf("ft: |%27p|\n", &retft);
	retor += printf(   "or: |%27p|\n", &retft);
	printf("\n%i)\n", i++);//			3
	retft += ft_printf("ft: |%27p|\n", &retor);
	retor += printf(   "or: |%27p|\n", &retor);
	printf("\n%i)\n", i++);//			4
	retft += ft_printf("ft: |%27p|\n", &retft);
	retor += printf(   "or: |%27p|\n", &retft);
	printf("\n%i)\n", i++);//			5
	retft += ft_printf("ft: |%10p|\n", NULL);
	retor += printf(   "or: |%10p|\n", NULL);
	printf("\n%i)\n", i++);//			6
	retft += ft_printf("ft: |%-10p|\n", NULL);
	retor += printf(   "or: |%-10p|\n", NULL);
	printf("\n%i)\n", i++);//			7
	retft += ft_printf("ft: |%10p|\n", NULL);
	retor += printf(   "or: |%10p|\n", NULL);
	printf("\n%i)\n", i++);//			8
	retft += ft_printf("ft: |%p|\n", NULL);
	retor += printf(   "or: |%p|\n", NULL);
	printf("\n%i)\n", i++);//			9
	retft += ft_printf("ft: |%.p|, |%.p|\n", &retor, NULL);
	retor += printf(   "or: |%.p|, |%.p|\n", &retor, NULL);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n", retft, retor);
}

void	test_unsigned(void)
{
	int	i;
	int	retft;
	int	retor;

	retft = 0;
	retor = 0;
	i = 1;
	ft_printf("\033[36m**************UNSIGNED**************\n");

	printf("\n%i)\n", i++);//			1
	retft += ft_printf("ft: |%01u|   |%01u|\n", 56, 0);
	retor += printf(   "or: |%01u|   |%01u|\n", 56, 0);
	printf("\n%i)\n", i++);//			2
	retft += ft_printf("ft: |%02u|   |%02u|\n", 56, 0);
	retor += printf(   "or: |%02u|   |%02u|\n", 56, 0);
	printf("\n%i)\n", i++);//			3
	retft += ft_printf("ft: |%05u|   |%05u|\n", 56, 0);
	retor += printf(   "or: |%05u|   |%05u|\n", 56, 0);
	printf("\n%i)\n", i++);//			4
	retft += ft_printf("ft: |%5u|   |%5u|\n", 56, 0);
	retor += printf(   "or: |%5u|   |%5u|\n", 56, 0);
	printf("\n%i)\n", i++);//			5
	retft += ft_printf("ft: |%u|   |%u|\n", 56, 0);
	retor += printf(   "or: |%u|   |%u|\n", 56, 0);
	printf("\n%i)\n", i++);//			6
	retft += ft_printf("ft: |%5u|  |%5u|\n", 5, 0);
	retor += printf(   "or: |%5u|  |%5u|\n", 5, 0);
	printf("\n%i)\n", i++);//			7
	retft += ft_printf("ft: |%u|  |%u|\n", 56, 0);
	retor += printf(   "or: |%u|  |%u|\n", 56, 0);
	printf("\n%i)\n", i++);//			8
	retft += ft_printf("ft: |%5u|  |%5u|\n", 56, 0);
	retor += printf(   "or: |%5u|  |%5u|\n", 56, 0);
	printf("\n%i)\n", i++);//			9
	retft += ft_printf("ft: |%-u|  |%-u|\n", 56, 0);
	retor += printf(   "or: |%-u|  |%-u|\n", 56, 0);
	printf("\n%i)\n", i++);//			10
	retft += ft_printf("ft: |%-5u|   |%-5u|\n", 56, 0);
	retor += printf(   "or: |%-5u|   |%-5u|\n", 56, 0);
	printf("\n%i)\n", i++);//			11
	retft += ft_printf("ft: |%-5u|   |%-5u|\n", 56, 0);
	retor += printf(   "or: |%-5u|   |%-5u|\n", 56, 0);
	printf("\n%i)\n", i++);//			12
	retft += ft_printf("ft: |%0u|  |%0u|\n", 42, 0);
	retor += printf(   "or: |%0u|  |%0u|\n", 42, 0);
	printf("\n%i)\n", i++);//			13
	retft += ft_printf("ft: |%0005u|  |%0005u|\n", 42, 0);
	retor += printf(   "or: |%0005u|  |%0005u|\n", 42, 0);
	printf("\n%i)\n", i++);//			14
 	retft += ft_printf("ft: |%03u|  |%03u|\n", 123, 0);
 	 retor += printf(  "or: |%03u|  |%03u|\n", 123, 0);
	printf("\n%i)\n", i++);//			15
 	retft += ft_printf("ft: |%015u| |%015u|\n", 101, 0);
 	retor += printf(   "or: |%015u| |%015u|\n", 101, 0);
	printf("\n%i)\n", i++);//			16
	retft += ft_printf("ft: |%07u|   |%07u|\n", 56, 0);
	retor += printf(   "or: |%07u|   |%07u|\n", 56, 0);
	printf("\n%i)\n", i++);//			17
 	retft += ft_printf("ft: |%02u|  |%02u|\n", 101, 0);
 	retor += printf(   "or: |%02u|  |%02u|\n", 101, 0);
	printf("\n%i)\n", i++);//			18
 	retft += ft_printf("ft: |%020u|  |%020u|\n", 101, 0);
 	retor += printf(   "or: |%020u|  |%020u|\n", 101, 0);
	printf("\n%i)\n", i++);//			19
 	retft += ft_printf("ft: |%033u| |%033u|\n", 256, 0);
 	retor += printf(   "or: |%033u| |%033u|\n", 256, 0);
	printf("\n%i)\n", i++);//			20
	retft += ft_printf("ft: |%010u| |%010u|\n", 42, 0);
	retor += printf(   "or: |%010u| |%010u|\n", 42, 0);
	printf("\n%i)\n", i++);//			21
	retft += ft_printf("ft: |%010u| |%010u|\n", 59, 0);
	retor += printf(   "or: |%010u| |%010u|\n", 59, 0);
	printf("\n%i)\n", i++);//			22
	retft += ft_printf("ft: |%07u|  |%07u|\n", 56, 0);
	retor += printf(   "or: |%07u|  |%07u|\n", 56, 0);
	printf("\n%i)\n", i++);//			23
	retft += ft_printf("ft: |%015u| |%015u|\n", 101, 0);
	retor += printf(   "or: |%015u| |%015u|\n", 101, 0);
	printf("\n%i)\n", i++);//			24
	retft += ft_printf("ft: |%0u| |%0u|\n", 56, 0);
	retor += printf(   "or: |%0u| |%0u|\n", 56, 0);
	printf("\n%i)\n", i++);//			25
 	retft += ft_printf("ft: |%u|\n", 101);
 	retor += printf(   "or: |%u|\n", 101);
	printf("\n%i)\n", i++);//			26
 	retft += ft_printf("ft: |%u|\n", 101);
 	retor += printf(   "or: |%u|\n", 101);
	printf("\n%i)\n", i++);//			27
 	retft += ft_printf("ft: |%27u|\n", 101);
 	retor += printf(   "or: |%27u|\n", 101);
	printf("\n%i)\n", i++);//			28
 	retft += ft_printf("ft: |%7u|\n", 101);
 	retor += printf(   "or: |%7u|\n", 101);
	printf("\n%i)\n", i++);//			29
 	retft += ft_printf("ft: |%-27u|\n", 101);
 	retor += printf(   "or: |%-27u|\n", 101);
	printf("\n%i)\n", i++);//			30
 	retft += ft_printf("ft: |%u|\n", 0);
 	retor += printf(   "or: |%u|\n", 0);
	printf("\n%i)\n", i++);//			31
 	retft += ft_printf("ft: |%u|\n", 92233);
 	retor += printf(   "or: |%u|\n", 92233);
	printf("\n%i)\n", i++);//			32
	retft += ft_printf("ft: |%-15u|\n", 101);
	retor += printf(   "or: |%-15u|\n", 101);
	printf("\n%i)\n", i++);//			33
 	retft += ft_printf("ft: |%u|\n", 123456789);
 	retor += printf(   "or: |%u|\n", 123456789);
	printf("\n%i)\n", i++);//			34
 	retft += ft_printf("ft: |%27u|\n", 23456789);
 	retor += printf(   "or: |%27u|\n", 23456789);
	printf("\n%i)\n", i++);//			35
	retft += ft_printf("ft: |%-u|\n", 101);
	retor += printf(   "or: |%-u|\n", 101);
	printf("\n%i)\n", i++);//			36
	retft += ft_printf("ft: |%-u|\n", 0);
	retor += printf(   "or: |%-u|\n", 0);
	printf("\n%i)\n", i++);//			37
	retft += ft_printf("ft: |%-15u|\n", 987);
	retor += printf(   "or: |%-15u|\n", 987);
	printf("\n%i)\n", i++);//			38
 	retft += ft_printf("ft: |%.u| |%.u|\n", 101, 0);
 	retor += printf(   "or: |%.u| |%.u|\n", 101, 0);
	printf("\n%i)\n", i++);//			39
	retft += ft_printf("ft: |%.1u| |%.1u|\n", 101, 0);
	retor += printf(   "or: |%.1u| |%.1u|\n", 101, 0);
	printf("\n%i)\n", i++);//			40
	retft += ft_printf("ft: |%.2u|  |%.2u|\n", 101, 0);
	retor += printf(   "or: |%.2u|  |%.2u|\n", 101, 0);
	printf("\n%i)\n", i++);//			41
	retft += ft_printf("ft: |%.5u|  |%.5u|\n", 101, 0);
	retor += printf(   "or: |%.5u|  |%.5u|\n", 101, 0);
	printf("\n%i)\n", i++);//			42
	retft += ft_printf("ft: |%-10.0u| |%-10.0u|\n", 101, 0);
	retor += printf(   "or: |%-10.0u| |%-10.0u|\n", 101, 0);
	printf("\n%i)\n", i++);//			43
	retft += ft_printf("ft: |%-.0u|  |%-.0u|\n", 101, 0);
	retor += printf(   "or: |%-.0u|  |%-.0u|\n", 101, 0);
	printf("\n%i)\n", i++);//			44
	retft += ft_printf("ft: |%-2.0u|  |%-3.0u|\n", 101, 0);
	retor += printf(   "or: |%-2.0u|  |%-3.0u|\n", 101, 0);
	printf("\n%i)\n", i++);//			45
	retft += ft_printf("ft: |%10.0u|  |%10.0u|\n", 101, 0);
	retor += printf(   "or: |%10.0u|  |%10.0u|\n", 101, 0);
	printf("\n%i)\n", i++);//			46
	retft += ft_printf("ft: |%2.0u| |%2.0u|\n", 101, 0);
	retor += printf(   "or: |%2.0u| |%2.0u|\n", 101, 0);
	printf("\n%i)\n", i++);//			47
	retft += ft_printf("ft: |%2.u|  |%2.u|\n", 101, 0);
	retor += printf(   "or: |%2.u|  |%2.u|\n", 101, 0);
	printf("\n%i)\n", i++);//			48
	retft += ft_printf("ft: |%7.u|  |%7.u|\n", 101, 0);
	retor += printf(   "or: |%7.u|  |%7.u|\n", 101, 0);
	printf("\n%i)\n", i++);//			49
	retft += ft_printf("ft: |%15.0u|  |%15.0u|\n", 101, 0);
 	retor += printf(   "or: |%15.0u|  |%15.0u|\n", 101, 0);
	printf("\n%i)\n", i++);//			50
 	retft += ft_printf("ft: |%5.2u|  |%5.2u|\n", 101, 0);
 	retor += printf(   "or: |%5.2u|  |%5.2u|\n", 101, 0);
	printf("\n%i)\n", i++);//			51
	retft += ft_printf("ft: |%5.5u|  |%5.5u|\n", 101, 0);
	retor += printf(   "or: |%5.5u|  |%5.5u|\n", 101, 0);
	printf("\n%i)\n", i++);//			52
	retft += ft_printf("ft: |%5.8u| |%5.8u|\n", 101, 0);
	retor += printf(   "or: |%5.8u| |%5.8u|\n", 101, 0);
	printf("\n%i)\n", i++);//			53
	retft += ft_printf("ft: |%030.u|  |%030.u|\n", 987, 0);
	retor += printf(   "or: |%030.u|  |%030.u|\n", 987, 0);
	printf("\n%i)\n", i++);//			54
	retft += ft_printf("ft: |%07.15u|    |%07.15u|\n", 56, 0);
	retor += printf(   "or: |%07.15u|    |%07.15u|\n", 56, 0);
	printf("\n%i)\n", i++);//			55
	retft += ft_printf("ft: |%07.5u|   |%07.5u|\n", 56, 0);
	retor += printf(   "or: |%07.5u|   |%07.5u|\n", 56, 0);
	printf("\n%i)\n", i++);//			56
	retft += ft_printf("ft: |%07.u|   |%07.u|\n", 56, 0);
	retor += printf(   "or: |%07.u|   |%07.u|\n", 56, 0);
	printf("\n%i)\n", i++);//			57
	retft += ft_printf("ft: |%10.5u| |%10.5u|\n", 4242, 0);
 	retor += printf(   "or: |%10.5u| |%10.5u|\n", 4242, 0);
	printf("\n%i)\n", i++);//			58
	retft += ft_printf("ft: |%10.15u|  |%10.15u|\n", 4242, 0);
	retor += printf(   "or: |%10.15u|  |%10.15u|\n", 4242, 0);
	printf("\n%i)\n", i++);//			59
	retft += ft_printf("ft: |%10.9u|   |%10.9u|\n", 4242, 0);
	retor += printf(   "or: |%10.9u|   |%10.9u|\n", 4242, 0);
	printf("\n%i)\n", i++);//			60
	retft += ft_printf("ft: |%07.2u|   |%07.2u|\n", 56, 0);
	retor += printf(   "or: |%07.2u|   |%07.2u|\n", 56, 0);
	printf("\n%i)\n", i++);//			61
 	retft += ft_printf("ft: |%07.7u|   |%07.7u|\n", 56, 0);
 	retor += printf(   "or: |%07.7u|   |%07.7u|\n", 56, 0);
	printf("\n%i)\n", i++);//			62
 	retft += ft_printf("ft: |%07.15u|    |%07.15u|\n", 56, 0);
 	retor += printf(   "or: |%07.15u|    |%07.15u|\n", 56, 0);

	printf("\033[0m\nTOTAL RETURN FT_PRINTF: %d\nTOTAL RETURN PRINTF:    %d\n\n", retft, retor);
}

int		main(int argc, char **argv)
{
	int		retmain;

	retmain = 0;
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
		if (ft_strchr(argv[1], 'u'))
			test_unsigned();
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
			test_unsigned();
		}		
	}
}

/*
char	*fillstr(char *str)
{
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';
	str[4] = 'e';
	str[5] = 'f';
	str[6] = '\0';
	return (str);
}

int	main(int ac, char **av)
{
	int		i;
	char	*str;

	str = (char*)malloc(sizeof(char) * 7);
	str = fillstr(str);
	if (ac != 3)
	{
		printf("\nUsage: <Buffer> <Argument>\nSi pas d'argument, <0>");
		return (0);
	}
	i = atoi(av[2]);
	ft_putstr("\n  mine: |");
	ft_printf(av[1], i);
	ft_putstr("|\n");
	printf("printf: |");
	printf(av[1], i);
	printf("|");
	return (0);
}
*/