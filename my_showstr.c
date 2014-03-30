/*
** my_showstr.c for my_showstr in /Users/Abrahxas/ETNA/Piscine-C/day4/quegui_v/my_showstr
**
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
**
** Started on  Sat Mar 29 12:32:12 2014 QUEGUINER Vincent
** Last update Sat Mar 29 18:00:28 2014 QUEGUINER Vincent
*/
void	my_putchar(char c);
int	my_putnbr_base(int nb, char *base);

int	my_showstr(char *str)
{
  int   i;
  char *base;

  i = 0;
  base = "0123456789abcdef";

  while (str[i])
    {
      if (str[i] < 32 || str[i] > 126)
        {
          my_putchar('\\');
          if (str[i] < 14)
            {
              my_putchar('0');
            }
          my_putnbr_base((str[i]), base);
        }
      else
        {
          my_putchar(str[i]);
        }
      i++;
    }
  return (0);
}
