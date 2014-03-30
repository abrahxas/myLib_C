/*
** my_strcat.c for my_strcat in /Users/Abrahxas/ETNA/Piscine-C/day5/quegui_v/my_strcat
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Sat Mar 29 11:11:53 2014 QUEGUINER Vincent
** Last update Sat Mar 29 17:59:11 2014 QUEGUINER Vincent
*/

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	j;
  int	k;
  char	*result;

  j = 0;
  k = 0;

  for (i = 0; str1[i] != '\0'; i++)
    {
      result[i] = str1[i];
      j++;
    }
  for ( i = j; str2[k] != '\0'; i++)
    {
      result[i] = str2[k];
      k++;
    }
  result[i] = '\0';
  return (result);
}
