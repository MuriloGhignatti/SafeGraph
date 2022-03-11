#include "../headers/Graph.hpp"

template<typename T>
void Graph<T>::insertVertex(T value){
    this->vertexes.push_back(new IVertex<T>(value))
}

template<typename T>
IVertex<T>* Graph<T>::getVertex(T value){
    for(auto& v: this->vertexes){
        if(v->g)
    }
}