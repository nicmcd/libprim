/*
 * Copyright (c) 2012-2016, Nic McDonald
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * - Neither the name of prim nor the names of its contributors may be used to
 * endorse or promote products derived from this software without specific prior
 * written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#include <gtest/gtest.h>

#include <cmath>

#include "prim/prim.h"

TEST(prim, size) {
  ASSERT_EQ(sizeof(s8), 1u);
  ASSERT_EQ(sizeof(u8), 1u);
  ASSERT_EQ(sizeof(s16), 2u);
  ASSERT_EQ(sizeof(u16), 2u);
  ASSERT_EQ(sizeof(s32), 4u);
  ASSERT_EQ(sizeof(u32), 4u);
  ASSERT_EQ(sizeof(s64), 8u);
  ASSERT_EQ(sizeof(u64), 8u);
  ASSERT_EQ(sizeof(f32), 4u);
  ASSERT_EQ(sizeof(f64), 8u);
}

TEST(prim, values) {
  ASSERT_EQ(S8_MIN, (s8)0x80);
  ASSERT_EQ(S8_MAX, (s8)0x7f);

  ASSERT_EQ(U8_MAX, (u8)0xff);

  ASSERT_EQ(S16_MIN, (s16)0x8000);
  ASSERT_EQ(S16_MAX, (s16)0x7fff);

  ASSERT_EQ(U16_MAX, (u16)0xffff);

  ASSERT_EQ(S32_MIN, (s32)0x80000000);
  ASSERT_EQ(S32_MAX, (s32)0x7fffffff);

  ASSERT_EQ(U32_MAX, (u32)0xffffffff);


  ASSERT_EQ(S64_MIN, (s64)0x8000000000000000);
  ASSERT_EQ(S64_MAX, (s64)0x7fffffffffffffff);

  ASSERT_EQ(U64_MAX, (u64)0xffffffffffffffff);

  ASSERT_TRUE(std::isnan(F32_NAN));
  ASSERT_TRUE(std::isinf(F32_POS_INF));
  ASSERT_TRUE(std::isinf(F32_NEG_INF));
  ASSERT_FALSE(std::isinf(F32_MIN));
  ASSERT_FALSE(std::isinf(F32_MAX));
  ASSERT_TRUE(std::isinf(F32_MAX * (f32)2.0));

  ASSERT_TRUE(std::isnan(F64_NAN));
  ASSERT_TRUE(std::isinf(F64_POS_INF));
  ASSERT_TRUE(std::isinf(F64_NEG_INF));
  ASSERT_FALSE(std::isinf(F64_MIN));
  ASSERT_FALSE(std::isinf(F64_MAX));
  ASSERT_TRUE(std::isinf(F64_MAX * (f64)2.0));
}
