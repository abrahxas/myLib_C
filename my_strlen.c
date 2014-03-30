/*
** my_strlen.c for my_strlen in 
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Tue Mar 25 11:14:50 2014 QUEGUINER Vincent
** Last update Tue Mar 25 20:37:02 2014 QUEGUINER Vincent
*/

int	my_strlen(char *str)
{
  int	i;
  int	result;

  result = 0;
  for (i = 0; str[i] != '\0'; i++)
    {
      result++;
    }
  return (result);
}
