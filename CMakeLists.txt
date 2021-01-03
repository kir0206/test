cmake_minimum_required(VERSION 3.0)
project(MyProgram)
add_executable(Multi src/Multi.c)

set(MULTI_TIMEOUT 1)

# Включить поддержку тестирования:
enable_testing()

# Добавить тесты:
add_test(1Test Multi 1 5 5)
add_test(2Test Multi 1 -5 -5)
add_test(3Test Multi 1 0 5.25)
add_test(4Test Multi 1 -5.31 0)
add_test(5Test Multi 2 5 5)
add_test(6Test Multi 2 -5 -5)
add_test(7Test Multi 2 0 5.25)
add_test(8Test Multi 2 5.31 0)
add_test(9Test Multi 3 5 5)
add_test(10Test Multi 3 -5 -5)
add_test(11Test Multi 3 0 5.25)
add_test(12Test Multi 3 -5.31 0)
add_test(13Test Multi 4 5 5)
add_test(14Test Multi 4 -5 -5)
add_test(15Test Multi 4 0 5.25)
add_test(16Test Multi 4 5.31 0)


# Установить поведение тестов:
set_tests_properties(1Test 2Test 3Test 4Test 5Test 6Test 7Test 8Test 9Test 10Test 11Test 12Test 13Test 14Test 15Test 16Test
PROPERTIES TIMEOUT ${MULTI_TIMEOUT})

set_tests_properties(1Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 10"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(2Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: -10"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(3Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 5.25"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(4Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: -5.31"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(5Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 0"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(6Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 0"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(7Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: -5.25"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(8Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 5.31"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(9Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 25"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(10Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 25"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(11Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 0"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(12Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: -0"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(13Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 1"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(14Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 1"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(15Test PROPERTIES
PASS_REGULAR_EXPRESSION "The result is: 0"
FAIL_REGULAR_EXPRESSION "Error!")

set_tests_properties(16Test PROPERTIES
PASS_REGULAR_EXPRESSION "Error")

