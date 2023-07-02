#include "representation.hpp"
#include <cmath>

AdjacencyMatrix::AdjacencyMatrix(std::istream &input ) : _adj{} {
    size_t V; size_t E;
    input >> V >> E;
    _adj.resize(V*V);
    for (size_t e = 0; e < E; ++e) {
        size_t u, v;
        double weight;
        input >> u >> v >> weight;
        // add to both entries
        _adj[V * u + v] = weight;
        _adj[V * v + u] = weight;
    }
}

void AdjacencyMatrix::print() {
    size_t V = std::sqrt(_adj.size());
    std::cout << _adj[0] << " "; // avoids checking i == 0
    for (size_t i = 1; i < _adj.size(); ++i) {
        std::cout << _adj[i] << " ";
        if ((i+1) % V == 0)
            std::cout << "\n";
    }
}

AdjacencyList::AdjacencyList(std::istream &input) :_adj{} {
    size_t V; size_t E;
    input >> V >> E;
    _adj.resize(V);

    for (size_t e = 0; e < E; ++e) {
        size_t u, v;
        double weight;
        input >> u >> v >> weight;
        _adj[u].push_back(State{v, weight});
        _adj[v].push_back(State{u, weight});
    }
}

void AdjacencyList::print() {
    for (size_t i = 0; i < _adj.size(); ++i) {
        std::cout << i << ": ";
        for (State state: _adj[i]) {
            std::cout << "(" << state.vertex() << ", " << state.dist() << ") ";
        }
        std::cout << "\n";
    }
}


