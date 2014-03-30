/*
** my_strcpy.c for my_strcpy in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_strcpy
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Fri Mar 28 09:08:44 2014 QUEGUINER Vincent
** Last update Sat Mar 29 17:54:20 2014 QUEGUINER Vincent
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;

  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
