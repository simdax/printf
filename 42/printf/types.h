
#ifndef __TYPES_H
# define __TYPES_H

typedef struct 		s_types
{
	char			c;
	int				i;
	int				o;
	unsigned int	u;
}					t_types;

typedef struct		s_num
{
	int				sign; // -1 0 1
	int				alternate; // 0 1
//	void			(*print)(struct s_num*);
	char			type;
	int				padding; // neg means right
	int				precision; // neg means right
	void			*value; // raw representation
	size_t			count; // nb of printed letters
}					t_num;

typedef struct 		s_str
{
	int				padding;
	void			*value;
}					t_str;

#endif
