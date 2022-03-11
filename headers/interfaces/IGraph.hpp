#pragma once
#include <vector>
#include "IVertex.hpp"

template <typename T>
class IGraph{
    public:
        virtual void insertVertex(T value) = 0;

        virtual IVertex<T>* getVertex(T value) = 0;
};