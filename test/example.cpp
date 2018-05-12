#include "gtest/gtest.h"
#include "example.hpp"

TEST(ExampleTest, StringComparisonWorks) {
  EXPECT_STREQ("Ala", "Ala");
  EXPECT_STRNE("Ala", "kot");
}

TEST(ExampleTest, BrokenTest) {
    const char* text = "Ala";
    char buf[sizeof(text)];
    strcpy(buf, text);
    EXPECT_EQ(text, buf);
}

TEST(ExampleTest, FiveReturnsFive) {
    EXPECT_EQ(five(), 5);
}
