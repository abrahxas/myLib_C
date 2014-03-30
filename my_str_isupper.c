/*
** my_str_isupper.c for ny_str_isupper in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_str_isupper
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Fri Mar 28 18:42:00 2014 QUEGUINER Vincent
** Last update Fri Mar 28 20:41:20 2014 QUEGUINER Vincent
*/

int	my_str_isupper(char *str)
{
  int	i;

  for (i = 0; str[i] != '\0'; i++)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	}
      else
	{
	  return (0);
	}
    }
  return (1);
}
