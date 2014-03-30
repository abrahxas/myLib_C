/*
** my_strlowcase.c for my_strlowcase in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_strlowcase
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Fri Mar 28 17:45:06 2014 QUEGUINER Vincent
** Last update Fri Mar 28 17:48:40 2014 QUEGUINER Vincent
*/

char	*my_strlowcase(char *str)
{
  int	i;

  for (i= 0; str[i] != '\0'; i++)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] += 32;
    }
  return (str);
}
