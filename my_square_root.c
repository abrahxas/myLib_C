/*
** my_square_root.c for my_square_root in /Users/Abrahxas/ETNA/Piscine-C/day3/quegui_v/my_square_root
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Thu Mar 27 12:43:13 2014 QUEGUINER Vincent
** Last update Sat Mar 29 17:53:22 2014 QUEGUINER Vincent
*/

int	my_square_root(int nb)
{
  int	result;
  int	i;

  i = 0;

  if(nb == 1)
    {
      result = 1;
    }
  while(i <= nb / 2)
    {
      if(i * i == nb)
	{
	  result = i;
	}
      i ++;
    }
  return result;
}
