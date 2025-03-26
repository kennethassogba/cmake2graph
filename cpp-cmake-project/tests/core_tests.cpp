#include <gtest/gtest.h>
#include "core/logger.hpp"
#include "core/utils.hpp"

TEST(LoggerTest, LogMessage) {
    Logger logger;
    logger.log("Test message");
    // Here you would typically check the output of the logger
    ASSERT_TRUE(true); // Placeholder assertion
}

TEST(UtilsTest, Add) {
    int result = add(2, 3);
    ASSERT_EQ(result, 5);
}

TEST(UtilsTest, Subtract) {
    int result = subtract(5, 3);
    ASSERT_EQ(result, 2);
}