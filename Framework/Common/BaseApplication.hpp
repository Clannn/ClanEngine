#pragma once

#include "IApplication.hpp"

namespace clan
{
class BaseApplication: implements IApplication
{
public:

    virtual int Initialize() override;

    virtual void Finalize() override;

    virtual void Tick() override;

    virtual bool IsQuit() override;

protected:
    // Flag if need quit the main loop of the application
    bool m_bQuit;
};
}