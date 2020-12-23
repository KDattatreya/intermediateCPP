#include "image.h"
#include <gtest/gtest.h>

TEST(Image, move) 
{
  Image a1(1, 2, 100, 200);
  EXPECT_EQ((10, 12), a1.move(9, 10));
}
TEST(Image, scale) 
{
  Image a1(3, 4, 1066, 1600);
  EXPECT_EQ((3, 4), a1.scale(1));
}
TEST(Image, resize) {
  Image a1(4, 6, 1066, 1600);
  EXPECT_EQ((2152, 3200), a1.resize(2152, 3200));
}
