#include <stdint.h>

namespace uniform
{
inline namespace LOG_RNG_VERSION
{

// @brief implementing the Mersenne twister for generating pseudo-random numbers
//
// The algorithm has a period of 2^19937 - 1, and is highly regarded as one of
// the better PRNG's these days.

class mersenne19937
{
public:
    // default constructor
    mersenne19937();

    // The mersenne19937 constructor
    //
    // @param seed the initial seed.
    mersenne19937(uint64_t seed);

    // Copy constructor (disabled for now)
    mersenne19937(const mersenne19937& other) = delete;

    // Copy assignment (disabled for now)
    mersenne19937& operator=(const mersenne19937& other) = delete;

    // R value copy constructor
    mersenne19937(mersenne19937&& other);

    // R value copy assignment
    mersenne19937& operator=(mersenne19937&& other);

    // Destructor
    ~mersenne19937();
};
}
}