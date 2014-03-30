/*
** my_str_isnum.c for my_str_isnum in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_str_isnum
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Fri Mar 28 18:27:43 2014 QUEGUINER Vincent
** Last update Fri Mar 28 18:32:09 2014 QUEGUINER Vincent
*/

int     my_str_isnum(char *str)
{
  int	i;

  for (i = 0; str[i] != '\0'; i++)
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	}
      else
	{
	  return (0);
	}
    }
  return (1);
}
