#include "main.h"
#include <stdlib.h>
/**
 *  * alloc_grid - the nested loop that will be used to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **jay;
	int a, b;

	if (width <= 0 || height <= 0)
	return (NULL);

	jay = malloc(sizeof(int *) * height);

	if (jay == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
	jay[a] = malloc(sizeof(int) * width);

	if (jay[a] == NULL)
	{
		for (; a >= 0; a--)
		free(jay[a]);
		free(jay);
		return (NULL);
	}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		jay[a][b] = 0;
	}

	return (jay);
}
