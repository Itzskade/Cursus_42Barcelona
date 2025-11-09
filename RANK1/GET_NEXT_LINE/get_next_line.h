/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:31:09 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/31 18:39:20 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

/* +=====================+ 
 * |    GET_NEXT_LINE    |
 * +=====================+ */
char	*read_until_line(int fd, char *stash);
char	*extract_line(char *stash);
char	*save_rest(char *stash);
char	*get_next_line(int fd);
/* +=====================+ 
 * | GET_NEXT_LINE_UTILS |
 * +=====================+ */
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char	*str);
char	*ft_substr(char *s, unsigned int start, size_t len);

#endif
