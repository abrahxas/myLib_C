/*
** my_put_nbr.c for my_put_nbr in 
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Tue Mar 25 11:46:50 2014 QUEGUINER Vincent
** Last update Sun Mar 30 17:41:19 2014 QUEGUINER Vincent
*/
void    my_putchar(char c);
void	my_putstr(char *str);

int	display_nbr(int nb)
{
  int	puissance;
  int	result;

  puissance = 1;
  while (nb / puissance > 10)
    {
      puissance = (puissance * 10);
    }
  while (puissance >= 1)
    {
      result = ((nb / puissance) % 10);
      if (nb == -2147483648)
	{
	  my_putstr("2147483648");
	  puissance = 0;
	}
      else
	{
	  my_putchar(result + 48);
	  puissance = (puissance / 10);
	}
    }
  return (0);
}

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  display_nbr(nb);
  return (0);
}
