/*
** my_strstr.c for my_strstr in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_strstr
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Fri Mar 28 12:51:50 2014 QUEGUINER Vincent
** Last update Sat Mar 29 17:58:36 2014 QUEGUINER Vincent
*/
int	my_strlen(char *str);

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  char	*result;

  j = 0;

  if (to_find == '\0')
    return (str);
  while (str[i] != '\0')
    {
      if (str[i] == to_find[j])
	{
	  result = &str[i];
	  j++;
	}
      else if (j != my_strlen(to_find))
	j = 0;
      i++;
    }
  result -= j + 1;
  if (j == my_strlen(to_find))
    return(result);
  else
    return (0);
}
