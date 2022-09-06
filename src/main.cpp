/* TODO
 *
*/

#include "io.h"

#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    if (argc <= 1)
    {
        no_commandline_arguments();
    }

    else
    {
        std::vector<std::string> argument_vector;

        for (int i{ 0 }; i < argc; ++i)
        {
            argument_vector.push_back(static_cast<std::string>(argv[i]));
        }

        handle_commandline_arguments(argument_vector);
    }

    return 0;
}
