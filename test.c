#include<stdio.h>

int ft_static()
{
	static int count = 0;
  	return (count++);
}
  
int main()
{
  printf("%d\n", ft_static());
  printf("%d\n", ft_static());
  printf("%d\n", ft_static());
  printf("%d\n", ft_static());
  printf("%d\n", ft_static());
  printf("%d\n", ft_static());
  printf("%d\n", ft_static());
  printf("%d\n", ft_static());
  printf("%d\n", ft_static());
  printf("%d\n", ft_static());
  return 0;
}
