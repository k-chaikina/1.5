#include <iostream>;


namespace  namespace1
{
    int x = 10;
}

namespace namespace2
{
    int x = 100;
    
}

namespace  namespace1
{
    int y = 20;
}

int main()
{
    
    std::cout << " x1 = " << namespace1::x << std::endl;
    std::cout << " x2 = " << namespace2::x << std::endl;
    std::cout << " y = " << namespace1::y << std::endl;
    
    
    
    return 0;
}


