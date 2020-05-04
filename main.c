#include "include/libftprintf.h"


int main()
{
	int a;
	int pft;
	int ft_pft;

	a = 5;
	ft_printf("%-*.*x-\n", 10, 5 , 1);
	printf("%-*.*x-\n", 10, 5 , 1);
	ft_printf("%-*.*x-\n", 10, 5 , 1);
	printf("%-*.*x-\n", 10, 5 , 1);

		/*
	printf("-%-5");
	printf("-%*10s\n",23, NULL);
	printf("-%08.5i\n", 2) ;
	printf("-%010x\n", 2);
	printf("-%010u\n", 2);



	ft_putnbr(printf("-%*.*d-\n", 4, 0,0));
	ft_printf("-%*.*d-\n",4 , 0 ,0);

	printf("|Computer %%*.*d| -%*.*d-\n", 0, 0 , -12345);
	ft_printf("|Me *.*d|        -%*.*d-\n\n", 0, 0, -12345);


	ft_putnbr(printf("-%*.*d-\n", 10, 6, -12345));
	ft_printf("-%*.*d-\n", 10, 6, -12345);

	ft_putnbr(printf("-%*.*d-\n", 4, 0,0));
	ft_printf("-%*.*d-\n",4 , 0 ,0);

	printf("|Computer %%*.*d| -%*.*d-\n", 0, 0 , -12345);
	ft_printf("|Me *.*d|        -%*.*d-\n\n", 0, 0, -12345);

	printf("|Computer %%*.*d| -%*.*d-\n", 3, 2, -12345);
	ft_printf("|Me *.*d|        -%*.*d-\n\n", 3, 2, -12345);

	ft_putnbr(printf("-%*.d-\n",2,  -12345));
	ft_printf("-%*.d-\n\n",2,  -12345);

	printf("|Computer %%*.d| -%*.d-\n", 10, -12345);
	ft_printf("|Me *.d|        -%*.d-\n\n", 10, -12345);


	printf("|Computer %%1.1d| -%17.6d-\n", -12345);
	ft_printf("|Me 1.1d|        -%17.6d-\n\n", -12345);


	printf("|Computer %%5.10d| -%5.10d-\n", 12345);
	ft_printf("|Me 5.10d|        -%5.10d-\n\n", 12345);

	ft_putnbr(printf("-%-15.9d-\n", -12345));
	ft_printf("-%-15.9d-\n", -12345);

	printf("-%-9.9d-\n", 12345);
	ft_printf("-%-9.9d-\n\n", 12345);

	printf("|Computer %%9.0d| -%9.0d-\n", -12345);
	ft_printf("|Me 9.0d|        -%9.0d-\n\n",-12345);

	printf("|Computer %%5.2d| -%5.2d-\n", -12345);
	ft_printf("|Me 5.2d|        -%5.2d-\n\n",-12345);


	printf("|Computer %%1.d| -%1.d-\n", -12345);
	ft_printf("|Me 1.d|        -%1.d-\n\n", -12345);

	printf("|Computer %%-5.d| -%5.d-\n", 12345);
	ft_printf("|Me -5.d|        -%-5.d-\n\n", 12345);

	printf("|Computer %%-9.d| -%-9.d-\n", -12345);
	ft_printf("|Me -9.d|        -%-9.d-\n\n",-12345);

	printf("|Computer %%9.d| -%9.d-\n", -12345);
	ft_printf("|Me 9.d|        -%9.d-\n\n",-12345);

	printf("|Computer %%-9.d| -%-9.d-\n", -12345);
	ft_printf("|Me -9.d|        -%-9.d-\n\n", -12345);

	printf("|Computer %%.d| -%.7d-\n", -12345);
	ft_printf("|Me .7d|        -%.7d-\n\n", -12345);



	printf("|Computer %%.d| -%.d-\n", -12345);
	ft_printf("|Me .d|        -%.d-\n\n", -12345);

	printf("|Computer %%-.5d| -%-.5d-\n", -12345);
	ft_printf("|Me -.5d|        -%-.5d-\n\n", -12345);

	printf("|Computer %%-.9d| -%-.9d-\n", -12345);
	ft_printf("|Me -.9d|        -%-.9d-\n\n",-12345);

	printf("|Computer %%-.2d| -%-.2d-\n", -12345);
	ft_printf("|Me -.2d|        -%-.2d-\n\n", -12345);


	printf("|Computer %%.d| -%.7d-\n", -12345);
	ft_printf("|Me .7d|        -%.7d-\n\n", -12345);

	printf("|Computer %%-10d| -%-10d-\n", 12345);
	ft_printf("|Me -10s|        -%-10d-\n\n", 12345);

	 printf("|Computer %%*d| -%*d-\n", 10, -12345);
	 ft_printf("|Me *s|        -%*d-\n\n", 10, -12345);

	 printf("|Computer %%*d| -%*d-\n", 10, 12345);
	 ft_printf("|Me *d|        -%*d-\n\n", 10, 12345);

	printf("Printf: -%-20p-\n", &a);
	ft_printf("My code: -%-20p-\n", &a);

	ft_printf("-%10p-\n\n", &a);

	printf("-%3p-\n", &a);
	ft_printf("-%3p-\n\n", &a);

	printf("-%2p-\n", &a);
	ft_printf("-%2p-\n\n", &a);

	printf("-%3p-\n", &a);
	ft_printf("-%3p-\n\n", &a);

	printf("-%*p-\n", 1, &a);
	ft_printf("-%*p-\n\n", 1, &a);


	printf("-%p-\n",&a);
	ft_printf("-%p-\n",&a);

	printf("-%-5p-\n",&a);
	ft_printf("-%-5p-\n",&a);

	printf("-%*p-\n", 1, &a);
	ft_printf("-%*p-\n", 1,&a);

	printf("-%*p-\n", 0,&a);

	printf("|Computer %%*.*x| -%*.*x-\n", 10, 6, 12345);
	ft_printf("|Me *.*x|        -%*.*x-\n\n", 10, 6, 12345);

	printf("|Computer %%*.*x|  -%*.*x-\n", 4, 7, 12345);
	ft_printf("|Me *.*x|         -%*.*x-\n\n",4 , 7 , 12345);

	printf("|Computer %%*.*x| -%*.*x-\n", 0, 0 , 12345);
	ft_printf("|Me *.*x|        -%*.*x-\n\n", 0, 0, 12345);

	printf("|Computer %%*.*x| -%*.*x-\n", 3, 2, 12345);
	ft_printf("|Me *.*x|        -%*.*x-\n\n", 3, 2, 12345);

	printf("|Computer %%*.x| -%*.x-\n",2,  12345);
	ft_printf("|Me *.x|        -%*.x-\n\n",2,  12345);

	printf("|Computer %%*.x| -%*.x-\n", 10, 12345);
	ft_printf("|Me *.x|        -%*.x-\n\n", 10, 12345);


	printf("|Computer %%1.1x| -%17.6x-\n", 12345);
	ft_printf("|Me 1.1x|        -%17.6x-\n\n", 12345);


	printf("|Computer %%5.10x| -%5.10x-\n", 12345);
	ft_printf("|Me 5.10x|        -%5.10x-\n\n", 12345);

	printf("|Computer %%9.9x| -%-15.9x-\n", 12345);
	ft_printf("|Me 9.9x|        -%-15.9x-\n\n", 12345);

	printf("|Computer %%-9.9x| -%-9.9x-\n", 12345);
	ft_printf("|Me 9.9x|         -%-9.9x-\n\n", 12345);

	printf("|Computer %%9.0x| -%9.0x-\n", 12345);
	ft_printf("|Me 9.0x|        -%9.0x-\n\n",12345);

	printf("|Computer %%5.2x| -%5.2x-\n", 12345);
	ft_printf("|Me 5.2x|        -%5.2x-\n\n",12345);


	printf("|Computer %%1.x| -%1.x-\n", 12345);
	ft_printf("|Me 1.x|        -%1.x-\n\n", 12345);

	printf("|Computer %%-5.x| -%5.x-\n", 12);
	ft_printf("|Me -5.x|        -%5.x-\n\n", 12);

	printf("|Computer %%-9.x| -%-9.x-\n", 12345);
	ft_printf("|Me -9.x|        -%-9.x-\n\n",12345);

	printf("|Computer %%9.x| -%9.x-\n", 12345);
	ft_printf("|Me 9.x|        -%9.x-\n\n",12345);

	printf("|Computer %%-9.x| -%-9.x-\n", 12345);
	ft_printf("|Me -9.x|        -%-9.x-\n\n", 12345);

	printf("|Computer %%.x| -%.7x-\n", 12345);
	ft_printf("|Me .7x|        -%.7x-\n\n", 12345);



	printf("|Computer %%.x| -%.x-\n", 12345);
	ft_printf("|Me .x|        -%.x-\n\n", 12345);

	printf("|Computer %%-.5x| -%-.5x-\n", 12345);
	ft_printf("|Me -.5x|        -%-.5x-\n\n", 12345);

	printf("|Computer %%-.9x| -%-.9x-\n", 12345);
	ft_printf("|Me -.9x|        -%-.9x-\n\n",12345);

	printf("|Computer %%-.2x| -%-.2x-\n", 12345);
	ft_printf("|Me -.2x|        -%-.2x-\n\n", 12345);


	printf("|Computer %%.x| -%.7x-\n", 12345);
	ft_printf("|Me .7x|        -%.7x-\n\n", 12345);

	printf("|Computer %%-10x| -%-10x-\n", 12345);
	ft_printf("|Me -10s|        -%-10x-\n\n", 12345);


	 printf("|Computer %%*x| -%*x-\n", 10, 12345);
	 ft_printf("|Me *s|        -%*x-\n\n", 10, 12345);

	 printf("|Computer %%*x| -%*x-\n", 10, 12345);
	 ft_printf("|Me *s|        -%*x-\n\n", 10, 12345);

		printf("-%5.6d-\n", 12);
	ft_printf("-%s-\n\n", "salut");

	printf("-%10d-\n", 12);
	ft_printf("-%10s-\n\n", "salut");

	printf("-%3s-\n", "salut");
	ft_printf("-%3s-\n\n", "salut");

	printf("-%2.10s-\n", "salut");
	ft_printf("-%2.10s-\n\n", "salut");

	printf("-%3s-\n", "salut");
	ft_printf("-%3s-\n\n", "salut");

	printf("-%*.*s-\n", 1, 0, "salut");
	ft_printf("-%*.*s-\n\n", 1, 0, "salut");



	printf("123-%5c456\n", 'a');
	ft_printf("-%5c\n", 'a');

	printf("-%c-\n", 'a');
	ft_printf("-%c-\n", 'a');

	printf("-%-5c-\n", 'a');
	ft_printf("-%-5c%c%10c-\n", 'a', 'q', 'e');

	printf("-%*c-\n", 1,'a');
	ft_printf("-%*c-\n", 1, 'a');

	printf("-%*c-\n", 12,'a');
	ft_printf("-%*c-\n", 12, 'a');

		printf("-%5.6d-\n", 12);
	ft_printf("-%s-\n\n", "salut");

	printf("-%10d-\n", 12);
	ft_printf("-%10s-\n\n", "salut");


	printf("-%3s-\n", "salut");
	ft_printf("-%3s-\n\n", "salut");

	printf("-%2.10s-\n", "salut");
	ft_printf("-%2.10s-\n\n", "salut");

	printf("-%10s-\n", "salut");
	ft_printf("-%10s-\n\n", "salut");

	printf("-%*.*s-\n", 1, 0, "salut");
	ft_printf("-%*.*s-\n\n", 1, 0, "salut");


*/




}
