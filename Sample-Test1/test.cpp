#include "pch.h"
#include "../ConsoleApplication1/func.h"
#include "../ConsoleApplication1/MyClass.h"

TEST(Case1, FirstTest) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Case2, FirstTest) {
	EXPECT_EQ(func(), 42);
	EXPECT_TRUE(true);
}

class MyClassTest : public ::testing::Test {
protected:
	MyClassTest() : c{ 3 } {}
    void SetUp() override {
		
    }

	MyClass c;
};

TEST_F(MyClassTest, Ctor) {
	EXPECT_EQ(c.getA(), 3);
}