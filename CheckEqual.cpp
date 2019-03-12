#include <iostream>
#include <exception>

void checkEqual(const std::string& left, const std::string& right)
{
    if (left != right)
        throw std::runtime_error(left + " != " + right);
}

int main()
{
    try {
        checkEqual("Hello C++", "Hello C++");
        checkEqual("Hello C++", "Bye C++");
    } catch (std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
