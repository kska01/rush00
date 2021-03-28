void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	w = x;
	h = y;
	y = 1;
	while (y <= h)
	{
		x = 1;
		while (x <= w)
		{
			if ((x == 1 && y > 1 && y < h) || (x == w && y > 1 && y < h))
				ft_putchar('|');
			else if (x > 1 && x < w && y > 1 && y < h)
				ft_putchar(' ');
			else if ((y == 1 && x > 1 && x < w) || (y == h && x > 1 && x < w))
				ft_putchar('-');
			else
				ft_putchar('o');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
