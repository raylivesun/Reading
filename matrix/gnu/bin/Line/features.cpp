//
// Created by admin on 14/03/24.
//

#include "features.h"
#ifdef _WIN32
#elif defined(_WIN32) && defined(__amd64__)
int total_sum = 10;
std::cout << &total_sum << "\n";
#endif //_WIN32