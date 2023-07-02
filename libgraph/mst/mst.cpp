#include "mst.hpp"
#include <unordered_map>
#include <queue>


double primjarnik_adjlist(const AdjacencyList &adj) {
    std::unordered_map<size_t, bool> visited;
    std::priority_queue<State> pq;

    pq.push(State{0, 0.0});
    double weight = 0.0;

    while (visited.size() < adj.size()) {
        State top = pq.top(); pq.pop();
        if (visited.count(top.vertex()) == 0) {
            visited[top.vertex()] = true;
            weight += top.dist();

            for (auto vertex: adj.adj(top.vertex())) {
                pq.push(vertex);
            }
        }
    }

    return weight;
}

//double primjarnik_adjmatrix(const AdjacencyMatrix &adj) {}

// add methods to return an AdjacencyList or AdjacencyMatrix of the mst



