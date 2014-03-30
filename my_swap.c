/*
** my_swap.c for my_swap in 
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Tue Mar 25 09:24:24 2014 QUEGUINER Vincent
** Last update Sat Mar 29 17:51:12 2014 QUEGUINER Vincent
*/

int	my_swap(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;

  return (0);
}
