#include "holberton.h"

/**
 * rot13_func - Function that encodes a string using ROT13
 * @v_out: Variable output
 * @var: Variable sent to _printf
 * Return: encryption
 */
void rot13_func(char *v_out, char var)
{
	int i, j;

	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; v_out[i] != '\0'; i++)
    {
    	for (j = 0; j <= 51; j++)
	{
	  	if (v_out[i] == input[j])
	    {
			v_out[i] = output[j];
			break;
	    }
    }
	}
	v_out[i] = var[i];
}
