/*
** my_getnbr.c for my_getnbr in /Users/Abrahxas/ETNA/Piscine-C/day2/quegui_v/my_getnbr
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Tue Mar 25 14:22:03 2014 QUEGUINER Vincent
** Last update Sat Mar 29 18:07:19 2014 QUEGUINER Vincent
*/

int	my_getnbr(char *str)
{
  int	result;
  int	i;
  int	neg;
    
  i = 0;
  neg = 1;
  result = 0;

  while ((str[i] != '\0' && str[i] >= '0' && str[i] <= '9') || str[i] == '-')
    {
      if (str[i] == '-')
	{
	  neg = neg * -1;
	}
      else
	{
	  result = (result * 10 + (str[i] - '0'));
	}
      i++;
    }
  return (neg * result);
}

