//
// Created by admin on 14/03/24.
//

#include "times.h"
#ifdef _WIN32
#elif defined(_WIN32) && defined(_WIN32)
#include <iostream>
#include <cstdlib>
int main(int argc, char *argv[])
{
    std::cout << "Number of command line arguments = "
    << argc << "\n";
    for (int i=0; i<argc; i++)
    {
        std::cout << "Argument " << i << " = " << argv[i];
        std::cout << "\n";
    }
    std::string program_name = argv[0];
    int number_of_nodes = atoi(argv[1]);
    double conductivity = atof(argv[2]);
    std::cout << "Program name = " << program_name << "\n";
    std::cout << "Number of nodes = " << number_of_nodes;
    std::cout << "\n";
    std::cout << "Conductivity = " << conductivity << "\n";
    return 0;
    }
#endif//_WIN32