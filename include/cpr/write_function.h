#ifndef CPR_WRITE_FUNCTION
#define CPR_WRITE_FUNCTION

#include <functional>

#include "defines.h"

namespace cpr {

struct WriteFunction
{
    WriteFunction() : write_data(nullptr) {}

    template <typename Func>
    WriteFunction(Func&& write_function, void* write_data)
        : write_function{CPR_FWD(write_function)}, write_data{write_data} {}

    std::function<size_t(void*, size_t, size_t, void*)> write_function;
    void* write_data;
};


} // namespace cpr

#endif
