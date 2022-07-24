/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:54:47 by mvavasso          #+#    #+#             */
/*   Updated: 2022/07/24 18:22:01 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdio.h>
# include <unistd.h>
# include "../Libft/libft.h"
# include <fcntl.h>

typedef struct s_data
{
    char **dict;
    char **argv;
}   t_data;

#endif