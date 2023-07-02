#include <gtest/gtest.h>
#include "mst.hpp"
#include <string>

double get_expected_output(std::istream &input) {
    double weight;
    input >> weight;
    return weight;
}

TEST(primjarnik_adjlist, t1) {
    std::ifstream input {"mst-test-vectors/mst.1.in"};
    std::ifstream ans_file{"mst-test-vectors/mst.1.out"};
    // if file doesn't exist, will break; this is planned
    auto adj = AdjacencyList{input};
    double res = primjarnik_adjlist(adj);
    double expected = get_expected_output(ans_file);
    ASSERT_NEAR(expected, res, 0.001);
}

TEST(primjarnik_adjlist, t2) {
    std::ifstream input {"mst-test-vectors/mst.2.in"};
    std::ifstream ans_file{"mst-test-vectors/mst.2.out"};
    auto adj = AdjacencyList{input};
    double res = primjarnik_adjlist(adj);
    double expected = get_expected_output(ans_file);
    ASSERT_NEAR(expected, res, 0.001);
}

TEST(primjarnik_adjlist, t3) {
    std::ifstream input {"mst-test-vectors/mst.3.in"};
    std::ifstream ans_file{"mst-test-vectors/mst.3.out"};
    auto adj = AdjacencyList{input};
    double res = primjarnik_adjlist(adj);
    double expected = get_expected_output(ans_file);
    ASSERT_NEAR(expected, res, 0.001);
}

TEST(primjarnik_adjlist, t4) {
    std::ifstream input {"mst-test-vectors/mst.4.in"};
    std::ifstream ans_file{"mst-test-vectors/mst.4.out"};
    auto adj = AdjacencyList{input};
    double res = primjarnik_adjlist(adj);
    double expected = get_expected_output(ans_file);
    ASSERT_NEAR(expected, res, 0.001);
}

TEST(primjarnik_adjlist, t5) {
    std::ifstream input {"mst-test-vectors/mst.5.in"};
    std::ifstream ans_file{"mst-test-vectors/mst.5.out"};
    auto adj = AdjacencyList{input};
    double res = primjarnik_adjlist(adj);
    double expected = get_expected_output(ans_file);
    ASSERT_NEAR(expected, res, 0.001);
}

TEST(primjarnik_adjlist, t6) {
    std::ifstream input {"mst-test-vectors/mst.6.in"};
    std::ifstream ans_file{"mst-test-vectors/mst.6.out"};
    auto adj = AdjacencyList{input};
    double res = primjarnik_adjlist(adj);
    double expected = get_expected_output(ans_file);
    ASSERT_NEAR(expected, res, 0.001);
}


TEST(primjarnik_adjlist, t7) {
    std::ifstream input {"mst-test-vectors/mst.7.in"};
    std::ifstream ans_file{"mst-test-vectors/mst.7.out"};
    auto adj = AdjacencyList{input};
    double res = primjarnik_adjlist(adj);
    double expected = get_expected_output(ans_file);
    ASSERT_NEAR(expected, res, 0.001);
}

TEST(primjarnik_adjlist, t8) {
    std::ifstream input {"mst-test-vectors/mst.8.in"};
    std::ifstream ans_file{"mst-test-vectors/mst.8.out"};
    auto adj = AdjacencyList{input};
    double res = primjarnik_adjlist(adj);
    double expected = get_expected_output(ans_file);
    ASSERT_NEAR(expected, res, 0.001);
}

TEST(primjarnik_adjlist, t9) {
    std::ifstream input {"mst-test-vectors/mst.9.in"};
    std::ifstream ans_file{"mst-test-vectors/mst.9.out"};
    auto adj = AdjacencyList{input};
    double res = primjarnik_adjlist(adj);
    double expected = get_expected_output(ans_file);
    ASSERT_NEAR(expected, res, 0.001);
}

TEST(primjarnik_adjlist, t10) {
    std::ifstream input {"mst-test-vectors/mst.10.in"};
    std::ifstream ans_file{"mst-test-vectors/mst.10.out"};
    auto adj = AdjacencyList{input};
    double res = primjarnik_adjlist(adj);
    double expected = get_expected_output(ans_file);
    ASSERT_NEAR(expected, res, 0.001);
}


int main(int argc, char**argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
