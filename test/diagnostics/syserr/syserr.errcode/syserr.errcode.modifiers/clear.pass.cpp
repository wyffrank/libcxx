//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <system_error>

// class error_code

// void clear();

#include <system_error>
#include <cassert>

int main()
{
    {
        std::error_code ec;
        ec.assign(6, std::generic_category());
        assert(ec.value() == 6);
        assert(ec.category() == std::generic_category());
        ec.clear();
        assert(ec.value() == 0);
        assert(ec.category() == std::system_category());
    }
}
