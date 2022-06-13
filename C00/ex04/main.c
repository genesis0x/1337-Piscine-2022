void	ft_is_negative(int n);

int		main(void)
{
	ft_is_negative(-2147483648);
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(42);
	ft_is_negative(2147483647);
	return (0);
}
