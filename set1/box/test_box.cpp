#include "box.h"
#include <gtest/gtest.h>

TEST(Box, Default_Constructor) 
{
  Box b1;
  EXPECT_EQ(0, b1.length());
  EXPECT_EQ(0, b1.breadth());
  EXPECT_EQ(0, b1.height());
  EXPECT_EQ(0, b1.volume());
}

TEST(Box, Parameterized_Constructor) 
{
  Box b1(2, 2, 2);
  EXPECT_EQ(2, b1.length());
  EXPECT_EQ(2, b1.breadth());
  EXPECT_EQ(2, b1.height());
  EXPECT_EQ(8, b1.volume());
}

TEST(Box, Copy_Constructor) 
{
  Box b1(5, 3, 10);
  Box b2 = b1;
  EXPECT_EQ(5, b1.length());
  EXPECT_EQ(3, b1.breadth());
  EXPECT_EQ(10, b1.height());
  EXPECT_EQ(150, b1.volume());
}

int main()
{
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
