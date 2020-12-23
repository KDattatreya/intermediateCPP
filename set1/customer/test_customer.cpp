#include "customer.h"
#include <gtest/gtest.h>

TEST(Customer, credit) 
{
  Customer p1("888", "ABC", "765432198", 100.23);
  EXPECT_EQ(100.23, p1.getBalance());
  p1.credit(200);
  EXPECT_EQ(300.23, p1.getBalance());
}
TEST(Customer, makeCall) 
{
  Customer p1("888", "ABC", "765432198", 100.23);
  EXPECT_EQ(100.23, p1.getBalance());
  p1.makeCall(1.30);
  EXPECT_EQ(98.93, p1.getBalance());
}

TEST(Customer, getBalance)
{
  Customer p1("888", "ABC", "765432198", 10.98);
  EXPECT_EQ(10.98,p1.getBalance());
}

int main()
{
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
