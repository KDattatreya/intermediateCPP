#include "account.h"
#include <gtest/gtest.h>

TEST(Account, DefaultConstructor) {
  Account a1;
  EXPECT_EQ(0.0, a1.getBalance());
}

TEST(Account, ParameterizedConstructor) {
  Account a1("001", "ABC", 1000.0);
  EXPECT_EQ(1000.0, a1.getBalance());
}

TEST(Account, CopyConstructor) {
  Account a1("001", "ABC", 1000.0);
  Account a2(a1);
  EXPECT_EQ(1000.0, a2.getBalance());
}

TEST(Account, Credit) {
  Account a1("001", "ABC", 1000.0);
  a1.credit(2000);
  EXPECT_EQ(3000.0, a1.getBalance());
}

TEST(Account, Debit) {
  Account a1("001", "ABC", 1000.0);
  a1.debit(500);
  EXPECT_EQ(500.0, a1.getBalance());
}

TEST(Account, Transaction) {
  Account a1("001", "ABC", 1000.0);
  a1.debit(500);
  a1.credit(600);
  a1.credit(200);
  EXPECT_EQ(1300.0, a1.getBalance());
}

int main() {
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
