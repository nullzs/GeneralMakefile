#include "class_test/cat.hpp"
#include "class_test/child_path/rose.hpp"
#include "class_test/dog.hpp"
#include <iostream>
#include <memory>

int main(int argc, char const *argv[])
{
    if (argc >= 2)
    {
        std::cout << argv[1] << std::endl;
    }
    auto mycat = std::make_shared<cat>();
    mycat->display();
    auto mydog = std::make_shared<dog>();
    mydog->display();
    auto myflower = std::make_shared<rose>();
    myflower->display();
    std::cout << "test" << std::endl;
    /* code */
    return 0;
}
