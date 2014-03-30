/*
** my_is_prime.c for my_is_prime in /Users/Abrahxas/ETNA/Piscine-C/day3/quegui_v/my_is_prime
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Thu Mar 27 18:08:08 2014 QUEGUINER Vincent
** Last update Sat Mar 29 17:53:40 2014 QUEGUINER Vincent
*/

int	my_is_prime(int nombre)
{
  int	i;

  i = 2;

  if (nombre == 1 || nombre <= 0)
    return (0);
  while (i < nombre / 2)
    {
      if (nombre % i == 0)
	return (0);
      i++;
    }
  return (1);
}
