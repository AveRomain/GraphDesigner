#ifndef GRAPHE_H
#define GRAPHE_H

#include <fstream>

class Graphe
{
	public:
		/**
		 * Constructeur par défaut d'un Graphe.
		 */ 
		Graphe();

		/**
		 * Méthode virtuelle pure permettant d'afficher un Graphe
		 * sur une sortie standard.
		 * 
		 * @param ost - Une sortie standard.
		 */
		virtual void affiche(std::ostream& ost) const = 0;
		
	private:
};

#endif
