/*
** my_isneg.c for my_isneg in
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Mon Mar 24 13:05:05 2014 QUEGUINER Vincent
** Last update Sat Mar 29 17:50:30 2014 QUEGUINER Vincent
*/
void	my_putchar(char c);

int	my_isneg(int n)
{
  char result;

  if (n >= 0)
    {
      result = 'P';
    }
  else
    {
      result = 'N';
    }
  my_putchar(result);
  return (0);
}
