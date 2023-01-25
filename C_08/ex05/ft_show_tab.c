#include "ft_stock_str.h"
#include <unistd.h>

void	ft_show_tab(struct s_stock_str *par);

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	put_nbr(int nbr)
{
	if (nbr == -2147483647)
	{
		write(1, "-2", 2);
		nbr = 147483647;
	}
	if (nbr < 10)
	{
		nbr += 48;
		write(1, &nbr, 1);
		return ;
	}
	else
	{
		put_nbr(nbr / 10);
	}
	put_nbr(nbr % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		put_str(par[i].str);
		write(1, "\n", 1);
		put_nbr(par[i].size);
		write(1, "\n", 1);
		put_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

// #include "../ex04/ft_strs_to_tab.c"
// int main(void)
// {
//     char *strs[] = {"salut", "mec", "vive", "la", "piscine yayayayaya!"};

//     t_stock_str *res = ft_strs_to_tab(5, strs);
//     res[2].copy = "changement";
//     ft_show_tab(res);
//     return (0);
// }