/*
** my_strncpy.c for my_strncpy in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_strncpy
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Fri Mar 28 10:10:16 2014 QUEGUINER Vincent
** Last update Sat Mar 29 17:54:39 2014 QUEGUINER Vincent
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;

  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i++;
    }
  if (n < i)
    {
      dest[i] = '\0';
    }
  return (dest);
}
