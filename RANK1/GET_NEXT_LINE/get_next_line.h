/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:20:28 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/28 15:20:28 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

/* +=====================+ 
 * |    GET_NEXT_LINE    |
 * +=====================+ */ 
char	*get_next_line(int fd);


/* +=====================+ 
 * | GET_NEXT_LINE_UTILS |
 * +=====================+ */ 
char	*ft_strchar(char *s, int c);
int		ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char	*str);
char	*ft_substr(char *s, unsigned int start, size_t len);

#endif
