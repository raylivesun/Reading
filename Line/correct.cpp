//
// Created by admin on 14/03/24.
//

#include "correct.h"
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_MIN__)
#include <iostream>
#include <fstream>
int correct(int argc, char* argv[])
{
    std::ifstream read_file("x_and_y.dat");
    if (!read_file.is_open())
    {
        return 1;
    }
    int number_of_rows = 0;
    while(!read_file.eof())
    {
        double dummy1, dummy2, dummy3, dummy4;
        read_file >> dummy1 >> dummy2;
        read_file >> dummy3 >> dummy4;
        number_of_rows++;
    }
    // 3 File Input and Output
    std::cout << "Number of rows = "
    << number_of_rows << "\n";
    read_file.close();
    return 0;
    }
#endif //_WIN32