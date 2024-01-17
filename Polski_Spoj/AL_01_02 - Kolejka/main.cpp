#include <iostream>
static int foo();

/* Tu mo¿na dopisywaæ swój kod */

/* Koniec miejsca na dopisywanie */
static int foo()
{
    std::cout << "foo()" << std::endl;
    return 0;
}

int main()
{
   std::cout << "main()" << std::endl;
   std::cout << "foo()" << std::endl;
   foo();
   return 0;
}
