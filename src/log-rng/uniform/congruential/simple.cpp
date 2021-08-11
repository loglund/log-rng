#include "simple.hpp"

#include "../../version.hpp"

namespace rng
{
inline namespace LOG_RNG_VERSION
{
namespace uniform
{

struct congruential::interface
{
    virtual ~interface(){};
    virtual void set_seed(uint64_t seed) = 0;
    virtual auto generate() -> double = 0;
    virtual auto generate_multi() -> std::vector<double> = 0;
}
}
}
}