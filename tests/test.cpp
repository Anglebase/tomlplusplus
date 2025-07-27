#include "toml++/toml.hpp"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        cerr << "Usage: " << argv[0] << " <file.toml>" << endl;
        return 1;
    }
    try
    {
        const auto tbl = toml::parse_file(argv[1]);
        cout << tbl << endl;
    }
    catch (const std::exception &e)
    {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}