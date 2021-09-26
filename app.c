

#include <stdio.h>
#include <stdlib.h>


int cal(int *a, int i, int y)
{
	int val1;
	int val2;
	int res;

	if(y > i -1)
		val1 = 0;
	else
		val1 = a[y];


	if( (y - 1)  <  0)
		val2 = 0;
	else
		val2 = a[y - 1];


	res = val1 + val2;

	return res;
}

void print_tab(int *array, int len)
{
	int i;
	i = 0;

	while(i < len)
	{
		printf("%d ", array[i]);
		i++;
	}
	putchar('\n');
}

void ft_swap(int **a, int **b)
{
	int *tmp; 
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void print_triangle_pascale(int nbr)
{
		
	int i;

	int *a;
	int *b;

	a = (int *)malloc(sizeof(int) * nbr);
	b = (int *)malloc(sizeof(int) * nbr);
	
	a[0] = 1;

	i = 1;

	printf("%d\n", a[0]);
	while(i < nbr)
	{
		
		int y;
		y = 0;

		while(y < (i + 1) )
		{
			b[y] = cal(a, i, y);	
			y++;
		}

		print_tab(b, i+1);

		ft_swap(&a, &b);

		i++;
	}

}



int main(int argc, char **argv)
{
	int nbr;
	nbr = atoi(argv[1]);
	
	print_triangle_pascale(nbr);

	return 0;
}
