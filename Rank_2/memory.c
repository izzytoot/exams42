
POWER
int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return (n & (n - 1)) == 0;

}

LIST_SIZE
int	ft_list_size(t_list *begin_list)
{
	if(!begin_list)
		return (0);
	return (1 + ft_list_size(begin_list->next));
}

PRINT_BITS
void	print_bits(unsigned char octet)
{
	unsigned char bit;
	int i = 8;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

SWAP_BITS
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

FOR_EACH
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list)
	{
		(*f)(begin_list->data);
		beign_list = begin_list->next;
	}
}