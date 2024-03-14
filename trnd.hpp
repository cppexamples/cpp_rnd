#pragma once
#include <random>

using engine = std::mt19937;
using distribution = std::uniform_int_distribution<uint_least64_t>;

class TRnd
{

public:
    TRnd(long unsigned int dstrBegin, long unsigned int dstrEnd);
    int generate();

private:        
    engine m_generator; 
    distribution m_dstrb;    
};