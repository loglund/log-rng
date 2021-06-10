#pragma once

#include <string>

namespace log_rng
{

#define LOG_RNG_VERSION v0_0_0

inline namespace LOG_RNG_VERSION
{
/// @return The version of the library as a string
std::string version();
}
}