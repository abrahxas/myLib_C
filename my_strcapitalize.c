/*
** my_strcapitalize.c for my_str_capitalize in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_strcapitalize
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Fri Mar 28 17:52:07 2014 QUEGUINER Vincent
** Last update Fri Mar 28 21:51:15 2014 QUEGUINER Vincent
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  for(i = 0; str[i] != '\0'; i++)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] += 32;
      if (i == 0 || str[i-1] == ' ')
        str[i] -= 32;
    }
  return (str);
}
