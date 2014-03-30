/*
** my_sort_int_tab.c for my_sort_int_tab in 
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Tue Mar 25 20:39:03 2014 QUEGUINER Vincent
** Last update Sat Mar 29 09:32:17 2014 QUEGUINER Vincent
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	j;

  for (i = 1; i < size; i++)
    {
      while (tab[i] < tab[i-1])
	{
	  j = tab[i];
	  tab[i] = tab[i-1];
	  tab[i-1] = j;
	  i = 1;
	}
    }
}
