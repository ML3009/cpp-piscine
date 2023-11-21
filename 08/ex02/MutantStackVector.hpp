#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T, std::vector<T> > {
    public:
        MutantStack<T>(); // necessaire pour indiquer que le constructeur est un template de fonction avec le mm parametre de type que la classe
        MutantStack<T>(const MutantStack& rhs);
        MutantStack& operator=(const MutantStack& rhs);
        ~MutantStack<T>();  
        typedef typename std::vector<T>::iterator iterator;  // reduce syntax utilisation - modele de conception diff de std::queue 
        iterator begin();
        iterator end();
        // ajout surcharge de pop_back et push_back puisque std::stqck ne dispose pas de ces methodes
        void push_back(const T& value) {
            this->push(value);
    }
        void pop_back() {
            this->pop();
    }

};

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T, std::vector<T> > (){}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& rhs) : std::stack<T, std::vector<T> >(rhs) {}

template<typename T>
MutantStack<T>&    MutantStack<T>::operator=(const MutantStack& rhs) {
    if (this != &rhs) {
        std::stack<T, std::vector<T> >::operator=(rhs); //  appelle l'operateur d'assignation de la classe de base et garantit que les elements de la pile sont correctement copie depuis l'objet src vers l'objet dest
    }
    return *this;
}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();
}






