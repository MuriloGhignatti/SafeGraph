#pragma once
#include <vector>
#include "interfaces/IGraph.hpp"
#include "interfaces/IVertex.hpp"

template<typename T>
class IGraph;

template<typename T>
class IVertex;

template<typename T>
class Graph: public IGraph<T> {
    protected:
        std::vector<IVertex<T>*> vertexes;
};