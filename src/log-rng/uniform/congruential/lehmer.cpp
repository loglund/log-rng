#include "lehmer.hpp"

#include "../../version.hpp"

namespace rng
{
inline namespace LOG_RNG_VERSION
{
namespace uniform
{

struct conqruential::interface
{
    virtual ~interface(){};
    virtual void set_seed(uint64_t seed) = 0;
    // virtual auto generate() -> double = 0;
    // virtual auto generate(std::size_t number) -> std::vector<double> = 0;
};

conqruential::conqruential()
{
}

conqruential::~conqruential()
{
}

void conqruential::set_seed(uint64_t seed)
{
    (*this).seed = seed;
}

}
}
}