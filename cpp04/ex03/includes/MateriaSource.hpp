#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* _materias[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        ~MateriaSource();
        MateriaSource& operator=(const MateriaSource& other);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif