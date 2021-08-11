#include "../../version.hpp"

#include <memory>
#include <stdint>
#include <vector>

namespace rng
{
inline namespace LOG_RNG_VERSION
{
namespace uniform
{
// @brief implementing a simple conqruential algorithm for generating
// pseudo-random numbers
//
// The algorithm has a period of 2^32 - 1 on 32-bit systems and
// 2^64 - 1 on 64-bit. So there are atleast a little over 4 billion
// values to choose.

class conqruential
{
public:
    // default constructor
    conqruential();

    // Copy constructor (disabled for now)
    conqruential(const conqruential& other) = delete;

    // Copy assignment (disabled for now)
    conqruential& operator=(const conqruential& other) = delete;

    // R value copy constructor
    conqruential(conqruential&& other);

    // R value copy assignment
    conqruential& operator=(conqruential&& other);

    // Destructor
    ~conqruential();

    void set_seed(uint64_t seed);

    auto generate() -> double;

    auto generate_multi(std::size_t number) -> std::vector<double>;

public:
    /// implementation detail
    struct interface;

private:
    /// pointer to implementation
    std::unique_ptr<interface> m_impl;
};
}
}
}