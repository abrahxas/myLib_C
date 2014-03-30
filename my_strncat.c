/*
** my_strncat.c for my_strncat in /Users/Abrahxas/ETNA/Piscine-C/day5/quegui_v/my_strncat
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Sat Mar 29 12:16:58 2014 QUEGUINER Vincent
** Last update Sat Mar 29 12:29:50 2014 QUEGUINER Vincent
*/

char	*my_strncat(char* str1, char *str2, int n)
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
  for ( i = j; k < n; i++)
    {
      result[i] = str2[k];
      k++;
    }
  result[i] = '\0';
  return (result);
}
