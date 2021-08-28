#include<unistd.h>
long int ft_atoi_long(const char *nptr)
{
	long int	n;
	long int	s;

	n = 0;
	s = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			s = -1;
		nptr++;
	}
	if (*nptr >='9' || *nptr <= '0')
		return(2147483648);
	while (*nptr <= '9' && *nptr >= '0')
	{
		n = n * 10 + *nptr - '0';
		nptr++;
	}
	if (*nptr != 0)
		return(2147483648);
	return (n * s);
}
int	main(int argc, char **argv)
{
    int i;
	int ordered[argc - 1];
	// Gestión de errores
	i = 1;
	while (i < argc && ft_atoi_long(argv[i]) >= -2147483648 && ft_atoi_long(argv[i]) < 2147483648)
	{	
		ordered[i - 1] =(int)ft_atoi_long(argv[i]);
		i++;
	}
	if (argc < 2 || i < argc)
	{	
		write(1, "Error\n", 6);
		return(0);
	}
	if (argc == 3)
	{
		if (ordered[0] < ordered[1])
			write(1, "ra\n", 3);
		return(0);
	}
	if (argc == 4)
	

	return(0);
}