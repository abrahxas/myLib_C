/*
** my_strcmp.c for my_strcmp in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_strcmp
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Fri Mar 28 16:38:30 2014 QUEGUINER Vincent
** Last update Sat Mar 29 09:38:05 2014 QUEGUINER Vincent
*/

int	my_strcmp(char *s1, char*s2)
{
  int	i;
  int	result;

  for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
      if (s1[i] != s2[i])
	result = s1[i] - s2[i];
      else
	result = 0;
    }
  return (result);
}
