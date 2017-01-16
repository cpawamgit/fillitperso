/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 14:58:26 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/27 19:07:42 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putendl(const char *s);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s1);
int					ft_strequ(const char *s1, const char *s2);
size_t				ft_strlcat(char *s1, const char *s2, size_t size);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *str, const char *tofind, \
	size_t len);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strtrim(const char *s);
char				**ft_strsplit(const char *s, char c);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strstr(const char *str, const char *tofind);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strrchr(const char *s, int c);
void				ft_memdel(void **ap);
void				*ft_memset(void *s, int c, size_t n);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putstr_fd(const char *s, int fd);
char				*ft_strcpy(char *s1, const char *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_strncpy(char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_first_upper(char *str);
int					ft_islower(int c);
char				*ft_all_tolower(char *str);
int					ft_isupper(int c);
char				*ft_insert_point(char *str);

#endif
