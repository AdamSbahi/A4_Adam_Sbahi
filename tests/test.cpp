//test.cpp

// you may write array comparison function to compare true/actual and expected use in test cases to see if the array is in reverse or not.
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>


#include "reverse.hpp"
#include <cstring>   // strlen, strcmp
#include <string>

// Helper: compare arrays of any type
template <typename T>
bool arrays_equal(const T* a, const T* b, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i]) return false;
    }
    return true;
}

TEST_CASE("int: reverses even-length array correctly")
{
    int a[] = {1, 2, 3, 4};
    int expected[] = {4, 3, 2, 1};

    reverse_array(a, 4);

    REQUIRE(arrays_equal(a, expected, 4));
}

TEST_CASE("int: reverses odd-length array correctly")
{
    int a[] = {10, 20, 30, 40, 50};
    int expected[] = {50, 40, 30, 20, 10};

    reverse_array(a, 5);

    REQUIRE(arrays_equal(a, expected, 5));
}

TEST_CASE("double: reverses values including negatives and decimals")
{
    double a[] = {1.5, -2.25, 3.0, 4.75};
    double expected[] = {4.75, 3.0, -2.25, 1.5};

    reverse_array(a, 4);

    REQUIRE(arrays_equal(a, expected, 4));
}

TEST_CASE("char array (not a C-string): reverses characters correctly")
{
    char letters[] = {'E','C','E','3','5','1','4'};
    char expected[] = {'4','1','5','3','E','C','E'};

    reverse_array(letters, 7);

    REQUIRE(arrays_equal(letters, expected, 7));
}

TEST_CASE("std::string: reverses array of strings correctly")
{
    std::string a[] = {"ECE", "3514", "templates"};
    std::string expected[] = {"templates", "3514", "ECE"};

    reverse_array(a, 3);

    REQUIRE(arrays_equal(a, expected, 3));
}

TEST_CASE("C-string: reverses only characters (does not move the null terminator)")
{
    char word[] = "hello";

    int n = static_cast<int>(std::strlen(word)); // excludes '\0'
    reverse_array(word, n);

    REQUIRE(std::strcmp(word, "olleh") == 0);
}

TEST_CASE("Edge case: n = 0 does nothing and does not crash")
{
    int a[] = {99, 100};
    int expected[] = {99, 100};

    reverse_array(a, 0);

    // array should remain unchanged
    REQUIRE(arrays_equal(a, expected, 2));
}

TEST_CASE("Edge case: n = 1 does nothing")
{
    int a[] = {42};
    int expected[] = {42};

    reverse_array(a, 1);

    REQUIRE(arrays_equal(a, expected, 1));
}

TEST_CASE("Edge case: n = 2 swaps elements")
{
    char a[] = {'A', 'B'};
    char expected[] = {'B', 'A'};

    reverse_array(a, 2);

    REQUIRE(arrays_equal(a, expected, 2));
}