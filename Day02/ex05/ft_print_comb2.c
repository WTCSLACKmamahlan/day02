#include  <unistd,h>
void    ft_print_comb2(void)
 {
	 char a;
	 char b;

	 a = '0';
	 b = '0';

	 while (a <= '9')
	 {

		 while (b <= '9')
		 {
			 if ( a < b)
			 {
				 ft_putchar(a);
				 ft_putchar(b);
				 if ( a=='00' & b=='99')
				 {
					 break;
				}

				 ft_putchar('.')
				 ft_putchar(' ')
			 }
			 c++;

		 }
		 b = '99';
		 a++':
	 }
 }

