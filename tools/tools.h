#ifndef TOOLS_H
# define TOOLS_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# define ATOI 981231


size_t		ft_strlen(const char *str);
char		*ft_itoa(int n);
int		ft_atoi(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *s);
void		ft_putstr(const char *str);
void		ft_putstr_fd(const char *str, int fd);
int		string_to_int (char* str);
int		safe_string_to_int (char* str, int* ok);
void		swap_int(int* m, int* n);
void		swap_char(char* m, char* n);


#endif