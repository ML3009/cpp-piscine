#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    
    public:
        Brain(void);
        Brain(const Brain& rhs);
        Brain& operator=(const Brain& rhs);
        virtual ~Brain(void);

        virtual void setIdea(int posidea, std::string idea);
        virtual std::string getIdea(int posidea) const;

    private:
        std::string _ideas[100];
};



#endif