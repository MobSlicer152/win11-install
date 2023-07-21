#include "stdafx.h"

bool g_isPhase2;

int main(int argc, char* argv[])
{
    std::cout << "Windows 11 Installer for Unsupported Devices" << std::endl <<
        "Rewrite of https://github.com/Mr-Unknown-74/Windows-11-Installer-for-Incompatible-Devices by my comrade Mr. Unknown_74" << std::endl
#ifdef Debug
        << "WIP version" << std::endl
#endif
        ;

    std::cout << "Press any key to exit";
    (void)_getch();
}

