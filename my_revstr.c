/*
** my_revstr.c for my_revstr in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_revstr
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Fri Mar 28 11:04:13 2014 QUEGUINER Vincent
** Last update Sat Mar 29 17:54:55 2014 QUEGUINER Vincent
*/

int	my_strlen(char *str);

char	*my_revstr(char *str)
{
  int	i;
  int	j;
  int	k;

  i = my_strlen(str) -1;
  j = 0;
  k = 0;

  while(j < i)
    {
      k = str[j];
      str[j] = str[i];
      str[i] = k;
      j++;
      i--;
    }
  return (str);
}
