// READ: <https://stackoverflow.com/questions/156767/whats-the-difference-between-an-argument-and-a-parameter>
// TODO: 为下列 ASSERT 填写正确的值

#include "../exercise.h"

void func(int);

int main(int argc, char **argv) {
    auto arg = 99;
    ASSERT(arg == ?, "arg should be ?");
    std::cout << "befor func call: " << arg << std::endl;
    func(arg);
    ASSERT(arg == ?, "arg should be ?");
    std::cout << "after func call: " << arg << std::endl;
    return 0;
}

static void func(int param) {
    ASSERT(param == ?, "param should be ?");
    std::cout << "befor add: " << param << std::endl;
    param += 1;
    ASSERT(param == ?, "param should be ?");
    std::cout << "after add: " << param << std::endl;
}
