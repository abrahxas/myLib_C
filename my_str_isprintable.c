/*
** my_str_isprintable.c for my_str_isprintable in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_str_isprintable
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Fri Mar 28 18:45:21 2014 QUEGUINER Vincent
** Last update Sat Mar 29 10:03:59 2014 QUEGUINER Vincent
*/

int	my_str_isprintable(char *str)
{
  int	i;

  for (i = 0; str[i] != '\0'; i++)
    {
      if ( str[i] < 32 || str[i] > 126)
	{
	  return (0);
	}
    }
  return (1);
}
