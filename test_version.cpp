#define BOOST_TEST_MODULE test_version

#include "lib.h"

//#include <boost/test/unit_test.hpp>
#include <gtest/gtest.h>

//BOOST_AUTO_TEST_SUITE(test_version)

//BOOST_AUTO_TEST_CASE(test_valid_version)
//{
//    BOOST_CHECK(version() > 0);
//}

//BOOST_AUTO_TEST_SUITE_END()

TEST(check_version, test_valid_version_project) {
    EXPECT_TRUE(version() > 0);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


