#include <stdint.h>

namespace rng
{
inline namespace LOG_RNG_VERSION
{
namespace uniform
{
// @brief implementing Marsaglia's polar method for generating Gaussian
// distributed pseudo-random numbers
//
// The algorithm has a period of almost 2^1430, but is not so widely used.

class marsaglia
{
public:
    // default constructor
    marsaglia();

    // The marsaglia constructor
    //
    // @param seed the initial seed.
    marsaglia(uint64_t seed);

    // Copy constructor (disabled for now)
    marsaglia(const marsaglia& other) = delete;

    // Copy assignment (disabled for now)
    marsaglia& operator=(const marsaglia& other) = delete;

    // R value copy constructor
    marsaglia(marsaglia&& other);

    // R value copy assignment
    marsaglia& operator=(marsaglia&& other);

    // Destructor
    ~marsaglia();
};
}
}
}