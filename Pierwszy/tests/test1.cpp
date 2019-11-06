#include <gtest/gtest.h>
#include "../kwadratowa.h"

TEST(prosty_test, test_wartosci)
{
   const float tolerance = 1e-5;
   float a = 1;
   float b = 4;
   float c = -5;
   auto val = kwadratowa(a, b, c );

   EXPECT_NEAR(val.first, -5.0, tolerance);
   EXPECT_NEAR(val.second, 1.0, tolerance);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
