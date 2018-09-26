#include "sayhello.h"

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        initSayHello(argv[1]);
    }
    else
    {
        initSayHello("Hello world!");
    }

    sayHello();

    closeSayHello();

    return 0;
}
