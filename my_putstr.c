/*
** my_putstr.c for my_putstr in 
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Tue Mar 25 09:51:47 2014 QUEGUINER Vincent
** Last update Sat Mar 29 17:51:31 2014 QUEGUINER Vincent
*/
void	my_putchar(char c);

int	my_putstr(char *str)
{
  int	i;

  for (i = 0; str[i] != '\0'; i++)
    {
      my_putchar(str[i]);
    }
  return (0);
}
