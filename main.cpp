#include "trnd.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    TRnd rndf{0, 99};
    TRnd rnds{100, 999};
    std::vector<int> range(100);
    for (const auto &i : range)
    {
        int f = rndf.generate();
        int s = rnds.generate();
        std::cout << f << "  " << s << std::endl;
    }
}
