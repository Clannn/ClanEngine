#pragma once

#include "Interface.hpp"

namespace clan
{
/// @brief Define some interfaces that each Runtime Module should support
Interface IRuntimeModule
{
public:

    virtual int Initialize() = 0;

    virtual void Finalize() = 0;

    virtual void Tick() = 0;

    virtual ~IRuntimeModule() {}
};
}