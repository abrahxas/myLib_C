/*
** my_putchar.c for my_putchar in /Users/Abrahxas/ETNA/Piscine-C/day5
** 
** Made by QUEGUINER Vincent
** Login   <quegui_v@etna-alternance.net>
** 
** Started on  Sat Mar 29 09:26:10 2014 QUEGUINER Vincent
** Last update Sat Mar 29 09:27:11 2014 QUEGUINER Vincent
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
