#include <gtest/gtest.h>
extern "C" {
  #include "../src/mymath.h"
}

TEST(MathTest, Add) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(MathTest, Subtract) {
    EXPECT_EQ(subtract(3, 2), 1);
}

TEST(MathTest, Divide){
    EXPECT_EQ(divide(6, 3), 2);
}

TEST(MathTest, Multiply){
    EXPECT_EQ(multiply(3,3), 9);
}

TEST(MathTest, Divide_By_Zero){
    EXPECT_EQ(divide(3,0), -1);
}

TEST(MathTest, Sqrt){
    EXPECT_EQ(sqrd(25), 5.0d);
}

TEST(MathTest, Pow){
    EXPECT_EQ(power(5.0,5.0), 25.0d);
}

TEST(MathTest, ZeroPow){
    EXPECT_EQ(power(5.0,0), 1.0d);
}
