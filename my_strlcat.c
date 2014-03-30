/*
** my_strlcat.c for my_strlcat in /Users/Abrahxas/ETNA/Piscine-C/day5/quegui_v/my_strlcat
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Sat Mar 29 11:51:57 2014 QUEGUINER Vincent
** Last update Sun Mar 30 17:31:54 2014 QUEGUINER Vincent
*/
int my_strlen(char *str);

int	my_strlcat(char *str1, char *str2, int l)
{
  int	dst;
  int	i;

  dst = my_strlen(str1);

  if (l < dst)
    return (l + my_strlen(str2));
  for (i = 0; (i + dst < l && str2[i] != '\0'); i++)
    str1[i + dst] = str2[i];
  if (i + dst < l)
    str1[i + dst] = '\0';
  else
    str1[i + dst - 1] = '\0';
  return (my_strlen(str2) + dst);
}
