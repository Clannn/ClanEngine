#pragma once

#include "IRuntimeModule.hpp"

namespace clan
{
/// @brief This interface is used to abstract the Application of different platforms (and modularize it)
///        so that we can use the same main entry (main.cpp) to start the program
///        (also means that we can use the same set of startup parameters)
Interface IApplication: implements IRuntimeModule
{
public:

    virtual int Initialize() = 0;

    virtual void Finalize() = 0;

    virtual void Tick() = 0;

    /// @brief whether the application needs to exit
    /// @return true: if should quit
    virtual bool IsQuit() = 0;
};
}