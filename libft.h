/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseidame <eseidame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:43:36 by eseidame          #+#    #+#             */
/*   Updated: 2020/03/09 19:56:43 by eseidame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# define BUFF_SIZE 35

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

typedef struct			s_fd_list
{
	int					fd;
	char				*rmndr;
	struct s_fd_list	*next;
}						t_fd_list;

void					ft_bzero(void *s, size_t n);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memset(void *b, int c, size_t len);
void					ft_putchar_fd(char c, int fd);
void					ft_putchar(char c);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putendl(char const *s);
void					ft_putnbr_fd(int n, int fd);
void					ft_putnbr(int n);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putstr(char const *s);
int						ft_strlen(char *s);
int						ft_tolower(int c);
int						ft_toupper(int c);

#endif
