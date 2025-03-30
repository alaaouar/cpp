/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 10:13:18 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/29 23:17:43 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void replace(const std::string &to_find, const std::string &to_replace, std::ifstream &inputF, std::ofstream &outputF)
{
    std::string line;

    while (std::getline(inputF, line))
    {
        std::string replaced_line;
        std::string::size_type pos = 0, prev_pos = 0;

        while ((pos = line.find(to_find, prev_pos)) != std::string::npos)
        {
            replaced_line.append(line, prev_pos, pos - prev_pos);
            replaced_line += to_replace;
            prev_pos = pos + to_find.length();
        }
        replaced_line.append(line, prev_pos, line.length() - prev_pos);
        outputF << replaced_line << '\n';
    }
}

int main(int ac, char **av)
{
    if (ac != 4)            {
        std::cerr << "Usage: " << av[0] << " ./filename string_to_find string_to_replace" << std::endl;
        return 1;
    }
    std::ifstream inputF(av[1]);
    if (!inputF)            {
        std::cerr << "Error: Could not open input file " << av[1] << std::endl;
        return 1;
    }
    std::ofstream outputF((std::string(av[1]) + ".replace").c_str());
    if (!outputF)           {
        std::cerr << "Error: Could not create output file " << av[1] << ".replace" << std::endl;
        return 1;
    }
    replace(av[2], av[3], inputF, outputF);
    inputF.close();
    outputF.close();
    return 0;
}
