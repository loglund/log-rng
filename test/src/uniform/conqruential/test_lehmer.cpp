#include <log-rng/uniform/congruential/lehmer.hpp>

#include <gtest/gtest.h>

#include <cstring>

using namespace rng::uniform;

TEST(conqruential_test, test_seed)
{
    conqruential generator = conqruential();
    uint64_t seed = 1;

    {
        EXPECT_EQ(generator.seed, seed);
    }

    seed = 2;
    generator.set_seed(seed);

    {
        EXPECT_EQ(generator.seed, seed);
    }
}
TEST(conqruential_test, test_generate)
{
    conqruential generator = conqruential();
    double uniform_number = generator.generate();

    {
        EXPECT_EQ(generator.seed, 16807);
        EXPECT_EQ(uniform_number, (double)1 / 16807);
    }
}

TEST(conqruential_test, test_generate_multi)
{
    conqruential generator = conqruential();
    std::size_t samples = 10;
    std::vector<double> uniform_vector = generator.generate(samples);

    {
        EXPECT_EQ(samples, uniform_vector.size());
    }
}