#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/doctest.h"
#include "../include/lab4part2.h"

TEST_CASE("Testing load function") {
    int a[5];
    load(a, 5, "test_data.txt");
    CHECK(a[0] == 10);
    CHECK(a[1] == 2);
    CHECK(a[2] == 3);
    CHECK(a[3] == 4);
    CHECK(a[4] == 5);
}
TEST_CASE("Testing sort function") {
    int a[5] = {10, 2, 3, 4, 5};
    sort(a, 5);
    CHECK(a[0] == 2);
    CHECK(a[1] == 3);
    CHECK(a[2] == 4);
    CHECK(a[3] == 5);
    CHECK(a[4] == 10);
}   