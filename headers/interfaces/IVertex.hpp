#pragma once
#include <vector>
#include "IEdge.hpp"

template<typename T>
class IEdge;

template<typename T>
class IVertex{
    protected:
        T value;
        std::vector<IEdge<T>*> edges;
    public:
        void setValue() = 0;
        T getValue() = 0;
        bool hasEdgeWithVertex(IVertex<T> vertex) = 0;
        void addEdge(IVertex<T> vertex) = 0;
        void removeEdge(IVertex<T> vertex) = 0;
};