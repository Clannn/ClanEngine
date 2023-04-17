#include <iostream>
#include "IApplication.hpp"

namespace clan
{
extern IApplication* g_pApp;
}

int main(int argc, char** argv)
{
    int result;

    if ((result = clan::g_pApp->Initialize()) != 0) {
        std::cout<<"App Initialize failed, will exit now.\n";
        return result;
    }

    while (!clan::g_pApp->IsQuit()) {
        clan::g_pApp->Tick();
    }

    clan::g_pApp->Finalize();

    return 0;
}