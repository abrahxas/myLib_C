/*
** my_strupcase.c for my_strupcase in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_strupcase
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Fri Mar 28 17:13:03 2014 QUEGUINER Vincent
** Last update Fri Mar 28 17:42:36 2014 QUEGUINER Vincent
*/

char	*my_strupcase(char *str)
{
  int	i;
 
  for(i = 0; str[i] != '\0'; i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
    }
  return (str);
}
