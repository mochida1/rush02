/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:45:47 by mvavasso          #+#    #+#             */
/*   Updated: 2022/07/24 17:15:59 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/rush02.h"

void    print_orgdict(char **argv)
{
    int     fd;
    char    **lines;

    fd = open("numbers.dict", O_RDONLY);
    if (fd < 0)
    {
        write(1, "Dict Error\n", 11);
        exit (1);
    }
    
    lines = malloc (sizeof (char **))
    while(*line)
    {
        *lines[i] = malloc()
    }
}

void    print_dict(char **argv)
{

}

int main(int argc, char *argv[])
{
	if (argc > 3 || argc < 2)
    {
        write(1, "Error\n", 6);
        return (0);
    }
    if (argc == 2)
        print_orgdict(argv);
    else
        print_dict(argv);
    return (0);
}
