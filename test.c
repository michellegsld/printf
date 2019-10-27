#include <stdio.h>

int main(void)
{
	int var = (-0xA);
	int period = (45);
	int test = (+85);
	unsigned int unsig = (45);
	float round = (2.718281828);
	float def = (2.71);

	printf("Examples using '+':\n");
	printf("This was a regular int: %+d\n", test);
	printf("This was a negative number: %+d\n", var);
	printf("This was an unsigned int: %+d\n", unsig);
	
	printf("-------------------------------------\n");

	printf("Examples using ' ':\n");
	printf("This is a regular int, no sign specified: % d\n", test);
	printf("This is a negative number: % i\n", var);
	printf("This was a number specified with +: % d\n", period);

	printf("-------------------------------------\n");

	printf("Examples using '0':\n");
	printf("Just '0' by itself: %0d\n", period);
	printf("'05': %05d\n", period);
	printf("'010': %010d\n", period);
	printf("'05': %05o\n", period);

	printf("-------------------------------------\n");

	printf("Examples using '-':\n");
	printf("Using just '-': %-d\n", period);
	printf("Using '-5': %-5d\n", period);
//	printf("Using '-05': %-05d\n", period);
	printf("Using '#-2': %#-2o\n", period);
	printf("Using '#-5x: %#-5x\n", var);

	printf("-------------------------------------\n");

	printf("Examples using multiple flags:\n");
	printf("Using '# ': % #d\n", var);
	printf("Using '#05': %#05o\n", var);
	printf("Using ' 05': % -5d\n", var);
	printf("Using '-05': %-05d\n", period);
	printf("Using '0-5': %0-5d\n", period);
/*
	printf("%+-5d\n", var);
	printf("%+5d\n", var);
	printf("% 10d\n", var);
	*printf("%#5d\n", var);*
	*printf("%+- #05d\n", var);*
	printf("--------\n");
	printf("%d\n", period);
	printf("% d\n\n\n\n", period);

	printf("|%-5d|\n", var);
	printf("|%-5d|\n", period);
	printf("|%-5d|\n", test);
	printf("|||||||||||\n");
	printf("|% 5d|\n", test);
	printf("|%#X|\n", var);
	printf("%o\n", var);
	printf("|%05d|\n", test);
	
	printf("\n\n\n\n\n-----------\n");
	printf("%i\n", var);
	
	printf("\n\n\n\n\n-----------\n");
	printf("%f\n", round);
	printf("%.12f\n", round);
	printf("%.2f\n", def);
	printf("%.10f\n", def);
*/	
	return (0);
}
