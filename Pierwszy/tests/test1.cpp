#include <gtest/gtest.h>
#include <cmath>
#include "../kwadratowa.h"

TEST(prosty_test, test_wartosci)
{
   const float tolerance = 1e-5f;
   float a = 1;
   float b = 4;
   float c = -5;
   auto val = kwadratowa(a, b, c );

   EXPECT_NEAR(val.first, -5.0, tolerance);
   EXPECT_NEAR(val.second, 1.0, tolerance);
}

TEST(prosty_test, test_0)
{
    const float tolerance = 1e-5f;
    float a = 1;
    float b = 2;
    float c = 1;
    auto val = kwadratowa(a, b, c );

    EXPECT_NEAR(val.first, -1, tolerance);
    EXPECT_TRUE(std::isnan(val.second));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
