#include "trnd.hpp"
#include <iostream>


TRnd::TRnd(long unsigned int beginInterval, long unsigned int endInterval) 
{
    std::random_device os_seed;
    const uint_least64_t seed = os_seed();
    m_generator=engine{seed};
    m_dstrb= distribution{beginInterval,endInterval};
}

int TRnd::generate(){    
    m_dstrb(m_generator);
    return m_dstrb(m_generator);
}