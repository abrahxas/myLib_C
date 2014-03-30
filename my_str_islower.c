/*
** my_str_islower.c for my_str_islower in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_str_islower
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Fri Mar 28 18:34:31 2014 QUEGUINER Vincent
** Last update Fri Mar 28 20:37:51 2014 QUEGUINER Vincent
*/

int	my_str_islower(char *str)
{
  int	i;

  for (i = 0; str[i] != '\0'; i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	}
      else
	{
	  return (0);
	}
    }
  return (1);
}
