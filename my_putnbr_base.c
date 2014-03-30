/*
** my_putnbr_base.c for my_putnbr_base in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_putnbr_base
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Sat Mar 29 12:59:07 2014 QUEGUINER Vincent
** Last update Sat Mar 29 18:00:08 2014 QUEGUINER Vincent
*/
void	my_putchar(char c);
int	my_strlen(char *str);

int	my_putnbr_base(int nb, char *base)
{
  int	i;

  if (nb == -2147483648)
    {
      nb += 1;
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }
  i = nb % my_strlen(base);
  nb = nb / my_strlen(base);
  if (nb > 0)
    my_putnbr_base(nb, base);
  my_putchar(base[i]);
  return (nb);
}
