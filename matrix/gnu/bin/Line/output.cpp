//
// Created by admin on 14/03/24.
//

#include "output.h"
#ifdef _WIN32
#elif defined(_WIN32) && defined(__WINT_MAX__) && defined(__WINT_MIN__)
#include <iostream>
#include <fstream>
int main(int argc, char* argv[])
{
    std::ofstream write_file("OutputFormatted.dat");
    // Write numbers as +x.<13digits>e+00 (width 20)
    write_file.setf(std::ios::scientific);
    write_file.setf(std::ios::showpos);
    write_file.precision(13);
    double x = 3.4, y = 0.0000855, z = 984.424;
    write_file << x << " " << y << " " << z << "\n";
    write_file.close();
    return 0;
    }
#endif//_WIN32
