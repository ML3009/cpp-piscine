#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

    public:
        Brain(void);
        Brain(const Brain& rhs);
        Brain& operator=(const Brain& rhs);
        ~Brain(void);

        void setIdea(int posidea, std::string idea);
        std::string getIdea(int posidea) const;

    private:
        std::string _ideas[100];
};



#endif
