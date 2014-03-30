/*
** my_power_rec.c for my_power_rec in /Users/Abrahxas/ETNA/Piscine-C/day3/quegui_v/my_power_rec
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Thu Mar 27 11:47:42 2014 QUEGUINER Vincent
** Last update Sat Mar 29 18:09:36 2014 QUEGUINER Vincent
*/

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    {
      return (1);
    }
  if (power < 0)
    {
      return (0);
    }
  if (power > 0)
    {
      return (nb * my_power_rec(nb , power -1));
    }
  return (0);
}
