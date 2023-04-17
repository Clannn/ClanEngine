#include "BaseApplication.hpp"

int clan::BaseApplication::Initialize()
{
    m_bQuit = false;

    return 0;
}

void clan::BaseApplication::Finalize()
{

}

void clan::BaseApplication::Tick()
{

}

bool clan::BaseApplication::IsQuit()
{
    return m_bQuit;
}