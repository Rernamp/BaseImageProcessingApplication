#include "Application.h"

#include <iostream>

using namespace cv;
int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        std::cout << "usage: DisplayImage.out <Image_Path>" << std::endl;
        return -1;
    }

    UDA::Application app = UDA::Application(argv[1]);

    app.run();
    return 0;
}