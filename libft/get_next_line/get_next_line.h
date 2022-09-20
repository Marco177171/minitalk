/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:08:42 by masebast          #+#    #+#             */
/*   Updated: 2022/05/18 14:29:41 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen_gnl(char *str);
char	*ft_strchr_gnl(char *s, int c);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*get_next_line(int fd);
char	*get_next_line2(int fd, char *line);
char	*ft_get_line(char *save);
char	*ft_save(char *save);
char	*ft_read_and_save(int fd, char *save);

#endif