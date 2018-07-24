#include <fstream>


int main()
{
    std::ofstream outfile("test.txt");
    outfile << "Hi" << std::endl;
    outfile.close();
    return 0;
}
