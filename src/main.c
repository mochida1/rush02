/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:45:47 by mvavasso          #+#    #+#             */
/*   Updated: 2022/07/24 19:05:51 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/rush02.h"

int get_lines(void)
{
    char *lines;
    int i;
    int fd;

    i = 0;
    fd = open("numbers.dict", O_RDONLY);
    lines = get_next_line(fd);
    while (lines)
    {
        i++;
        free(lines);
        lines = get_next_line(fd);
    }
    close (fd);
    return (i);
}

void    init_data_data(t_data *data, char **argv)
{
    int i;

    i = get_lines();
    data->argv = argv;
    data->dict = malloc(sizeof(char *) * (i + 1));
    data->dict[i] = 0;
}

void    until_19_function(char **argv)
{
    int     i;
    char    *printme;
    i = 0;
    if (ft_strlen(argv[1]) == 1)
    {
        while(data->dict[i])
        {
            printme = ft_strnstr(data->dict[i], argv[1], ft_strlen(data->dict[i]));
            i++;
        }
    }
    else if (ft_strlen(argv[1]) == 2)
    {
        if (argv[1][0] == '1' || argv[1][0] == '0')
        {
            while(data->dict[i])
            {
              printme = ft_strnstr(data->dict[i], argv[1], ft_strlen(data->dict[i]));
             i++;
            }
        }
    }
    
}
void    print_orgdict(t_data *data)
{
    int     fd;
    int     i;

    i = 0;
    fd = open("numbers.dict", O_RDONLY);
    if (fd < 0)
    {
        write(1, "Dict Error\n", 11);
        exit (1);
    }
    data->dict[i] = get_next_line(fd);
    while(data->dict[i++])
    {
        data->dict[i] = get_next_line(fd);
    }
    until_19_function(data->argv);
}


int main(int argc, char *argv[])
{
    t_data *data;

    data = malloc(sizeof(t_data));
    init_data_data(data, argv);
	if (argc > 3 || argc < 2)
    {
        write(1, "Error\n", 6);
        return (0);
    }
    if (argc == 2)
        print_orgdict(data);
    return (0);
}
