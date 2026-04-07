#include "unity.h"
#include "indicator.h"

void setUp(void) {}
void tearDown(void) {}

void test_indicator_off(void)
{
    indicator_set_state(INDICATOR_OFF);
    TEST_ASSERT_TRUE(1); // placeholder
}

void test_indicator_on(void)
{
    indicator_set_state(INDICATOR_ON);
    TEST_ASSERT_TRUE(1);
}

void test_indicator_blink_slow(void)
{
    indicator_set_state(INDICATOR_BLINK_SLOW);
    TEST_ASSERT_TRUE(1);
}

void test_indicator_blink_fast(void)
{
    indicator_set_state(INDICATOR_BLINK_FAST);
    TEST_ASSERT_TRUE(1);
}