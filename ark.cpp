#include <iostream>
#include <chrono> // Replace the deprecated time.h and unistd.h headers
#include <thread> // with the standard chrono and thread headers

int main()
{
    std::cout << "                 A R K                     \n"
              << "                ARCHIVES                   \n\n";

    std::cout << "                 ";
    for (int i = 0; i < 3; i++)
    {
        std::cout << ". ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Use the standard sleep function
    }

    std::cout << "\n.        .  RIFT DEVELOPMENT  .        .   \n\n";

    std::cout << "                 ";
    for (int i = 0; i < 3; i++)
    {
        std::cout << ". ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Use the standard sleep function
    }

    std::cout << "\n               G H O S T\n"
              << "            P R O T O C O L\n\n";
    std::cout << "\n\n[SYSTEM DATABASE]\n"
              << "[ARK.ROOT.STR.001]\n"
              << "VER. 1.0005\n";

    // print loading animation
    std::cout << "\n                 ";
    for (int i = 0; i < 3; i++)
    {
        std::cout << ". ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Use the standard sleep function
    }

    // print initialization message
    std::cout << "\n         I N I T I A L I Z I N G\n";

    // print loading animation
    std::cout << ".        .                    .        .\n\n";

    // flush output buffer to show the dots immediately
    std::cout.flush();
    std::cout << "\n                 ";
    for (int i = 0; i < 3; i++)
    {
        std::cout << ". ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Use the standard sleep function
    }

    system("start https://youtu.be/46ao3qU-QvQ");

    return 0;
}
