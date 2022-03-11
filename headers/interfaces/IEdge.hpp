#pragma once
#include "IVertex.hpp"

template<typename T>
class IVertex;

template<typename T>
class IEdge{
    protected:
        IVertex<T>* destination = nullptr;
    public:
        IVertex<T>* getDestination(){
            return destination;
        }
        void setDestination(IVertex<T>* newDestination){
            this->destination = newDestination;
        }
        #ifndef WEIGHTED
            IEdge(IVertex<T>* destination){
                this->destination = destination;
            }
        #endif
        #ifdef WEIGHTED
            IEdge(IVertex<T>* destination, double weight){
                this->destination = destination;
                this->weight = weight;
            }
        #endif
    #ifdef WEIGHTED
        protected:
            double weight;
        public:
            double getWeight(){
                return weight;
            }
            void setWeight(double weight){
                this->weight = weight;
            }
    #endif

};