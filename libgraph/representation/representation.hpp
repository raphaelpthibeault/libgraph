#ifndef REPRESENTATION_HPP
#define REPRESENTATION_HPP

#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>

// vector with n*n entries with _adj[i][j] being at n*i+j
// weighted, undirected graph
class AdjacencyMatrix {
    std::vector<double> _adj;
    AdjacencyMatrix() = delete;
public:
    AdjacencyMatrix(std::istream &input);
    void print();
};


class State {
    size_t _vertex;
    double _dist;
public:
    State(size_t vertex, double dist) : _vertex{vertex}, _dist{dist} {}
    inline size_t vertex() const {
        return _vertex;
    }
    inline double  dist() const {
        return _dist;
    }
};


class AdjacencyList {
    std::vector<std::vector<State>> _adj;
    AdjacencyList() = delete;
public:
    AdjacencyList(std::istream &input);
    inline size_t size() const {
        return _adj.size();
    }
    inline const std::vector<State> &adj(size_t node) const {
        return _adj[node];
    }
    void print();
};

inline bool operator<(const State &a, const State &b) {
    return a.dist() > b.dist();
}


#endif // REPRESENTATION_HPP
