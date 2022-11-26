/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:45:57 by tserdet           #+#    #+#             */
/*   Updated: 2022/10/31 16:21:07 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_LIBFT_H_
#define	_LIBFT_H_
#include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *str);
void *ft_memset(void *str, int value,size_t size);
void ft_bzero(void *s,size_t n);
void *ft_memcpy(void *s,const void *d, size_t size);
void *ft_memmove(void *d,const void *s,size_t size);
size_t ft_strlcpy(char *dest,const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int ft_toupper( int character );
int ft_tolower(int cha);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp( const char * first, const char * second, size_t length );
void * ft_memchr( const void * memoryBlock, int searchedChar, size_t size );
int ft_memcmp( const void * pointer1, const void * pointer2, size_t size );
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi( const char * theString );
void *ft_calloc(size_t elementCount, size_t elementSize );
char *ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char sep);
char *ft_itoa(int n);
#endif
