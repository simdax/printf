void	choose_itoa(char type, void *val, size_t *c);
 void		itoa_base_dioux(unsigned int *i, size_t base, size_t *c);
    char	*m_itoa(long long val, int base);
    int	main(int argc, char **argv);
    void	parse_flags(char *str, t_num *a);
    void	parse_value(int value, char type, t_num *a);
    void	print_alternate(char type);
    void	print_arg(t_num *num);
    void	print_padding(size_t count, char with, size_t *c);
    void	print_sign(int sign, size_t *c);
    void	print_value(void *val, char type, size_t *c, size_t precision);
    void	re_orga(t_num *a);
