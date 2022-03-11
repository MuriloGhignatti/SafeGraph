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
        T getValue(){
            return value;
        }
};