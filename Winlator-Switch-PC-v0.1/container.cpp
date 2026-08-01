#include "container.hpp"

#include <filesystem>


bool Container::create(
std::string name
)
{

std::filesystem::create_directories(

"containers/"+name

);


return true;

}
