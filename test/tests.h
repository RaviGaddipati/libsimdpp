/*  Copyright (C) 2011-2012  Povilas Kanapickas <povilas@radix.lt>

    Distributed under the Boost Software License, Version 1.0.
        (See accompanying file LICENSE_1_0.txt or copy at
            http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef SIMDPP_TEST_SIMD_H
#define SIMDPP_TEST_SIMD_H

#include "test_helpers.h"
#include "test_results.h"

#include <cstdint>
#include <iostream>

namespace SIMDPP_ARCH_NAMESPACE {

void main_test_function(TestResults& res);
void test_bitwise(TestResults& res);
void test_blend(TestResults& res);
void test_compare(TestResults& res);
void test_convert(TestResults& res);
void test_construct(TestResults& res);
void test_math_fp(TestResults& res);
void test_math_int(TestResults& res);
void test_math_shift(TestResults& res);
void test_memory_load(TestResults& res);
void test_memory_store(TestResults& res);
void test_set(TestResults& res);
void test_shuffle(TestResults& res);
void test_shuffle_bytes(TestResults& res);
void test_shuffle_generic(TestResults& res);
void test_shuffle_transpose(TestResults& res);
void test_transpose(TestResults& res);

} // namespace SIMDPP_ARCH_NAMESPACE

#endif
