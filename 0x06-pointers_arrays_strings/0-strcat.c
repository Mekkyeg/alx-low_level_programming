include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: ponter to destination input
 * @src: pointer to source input
 *
 * return: pointer to result string @dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2:
	
	c = 0;
	/*find the size of array*/
	while(dest[c])
		c++;
	/*null byte */
	for (c2 = 0; src[c2] ; c2++)
	/*Append*/
		dest[c++] = src[c2];
	return (dest);
}
