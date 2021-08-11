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

double conqruential::generate()
{
    uint64_t next = lehmer_constant * (*this).seed % lehmer_modulus;
    (*this).set_seed(next);
    return (double)1 / next;
}

std::vector<double> conqruential::generate(std::size_t samples)
{
    std::vector<double> uniform_vector = {};
    for (uint64_t i = 0; i < samples; i++)
    {
        uniform_vector.push_back((*this).generate());
    }
    return uniform_vector;
}

}
}
}