void ft_putstr_non_printable(char *str);

int		main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putstr_non_printable("Coucou\ttu vas bien ?");
	ft_putstr_non_printable("Coucou\rtu vas bien ?");
}

