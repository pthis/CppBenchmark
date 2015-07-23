//
// Created by Ivan Shynkarenka on 07.07.2015.
//

#include "context.h"

namespace CppBenchmark {

std::string Context::to_string() const
{
    if ((_x < 0) && (_y < 0) && (_z < 0))
        return "()";
    else if ((_y < 0) && (_z < 0))
        return '(' + std::to_string(_x) + ')';
    else if ((_z < 0))
        return '(' + std::to_string(_x) + ',' + std::to_string(_y) + ')';
    else
        return '(' + std::to_string(_x) + ',' + std::to_string(_y) + ',' + std::to_string(_z) + ')';
}

} // namespace CppBenchmark
