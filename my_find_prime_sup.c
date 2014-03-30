/*
** my_find_prime_sup.c for my_find_prime_sup in /Users/Abrahxas/ETNA/Piscine-C/day3/quegui_v/my_find_prime_sup
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Thu Mar 27 18:43:15 2014 QUEGUINER Vincent
** Last update Thu Mar 27 21:22:58 2014 QUEGUINER Vincent
*/

int	my_prime_is(int nombre);

int	my_find_prime_sup(int nb)
{
  while (my_prime_is(nb) != 1)
    {
      nb++;
    }
  return (nb);
}
