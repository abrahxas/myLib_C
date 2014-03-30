/*
** my_strncmp.c for my_strncmp in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_strncmp
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Fri Mar 28 17:06:31 2014 QUEGUINER Vincent
** Last update Sat Mar 29 09:44:53 2014 QUEGUINER Vincent
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  for (i = 0; i != '\0' && i != '\0'; i++)
    {
      if (i < n)
	{
	  if (s1[i] != s2[i])
	    return (s1[i] - s2[i]);
	}
    }
  return (0);
}
