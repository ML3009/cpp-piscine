#include <iostream>
#include <fstream>
#include <string>

/*Les principales classes fournies par <fstream> sont :

ifstream (input file stream) : Cette classe est utilisée pour lire à partir
de fichiers. Vous pouvez l'utiliser pour ouvrir un fichier existant et
lire son contenu.

ofstream (output file stream) : Cette classe est utilisée pour écrire dans
des fichiers. Vous pouvez l'utiliser pour créer un fichier ou écrire dans
un fichier existant.

fstream (file stream) : Cette classe est une combinaison des deux classes
précédentes, ce qui signifie qu'elle peut être utilisée à la fois pour la
lecture et l'écriture de fichiers. Elle permet donc de manipuler un fichier
en mode lecture/écriture.*/


/*Concevez un programme prenant trois paramètres dans l’ordre suivant : un nom de
fichier et deux strings, s1 et s2.

Le fichier <filename> sera ouvert et son contenu copié dans un nouveau fichier
<filename>.replace, où chaque occurrence de s1 sera remplacée par s2.

Avoir recours aux fonctions C de manipulation de fichiers est interdit et sera considéré
comme de la triche. Toutes les fonctions membres de la classe std::string sont autorisées sauf replace. Utilisez-les intelligemment !

Bien entendu, vous devez gérer les entrées inattendues et les erreurs possibles. Créez
et rendez vos propres tests afin de prouver que votre programme fonctionne.*/

int main (int ac, char **av) {

    if (ac != 4)
        return std::cout << "usage: ./replace <filename> <s1> <s2>" << std::endl, 1;

    std::string s1(av[2]);
    std::string s2(av[3]);
    //std::string filename(av[1]);

    if (s1.empty() || s2.empty())
        return std::cout << "s1 and s2 must not be empty" << std::endl, 1;

    std::ifstream ifs(av[1]);
    if (!ifs.is_open())
        return std::cout << "could not open file" << std::endl, 1;

    std::string replace_file_name((std::string)av[1] + ".replace");
    std::ofstream ofs(replace_file_name.c_str(), std::ios::app); // std::ios::app : append to the end of the file
    if (!ofs.is_open())
        return std::cout << "could not create replace file" << std::endl, ifs.close(), 1;

    int pos;
    std::string line;
    while (std::getline(ifs, line)) {
        pos = 0;
        while (pos != -1){
            pos = line.find(s1, pos);
            if (pos != -1){
                line.erase(pos, s1.length());
                line.insert(pos, s2);
                pos += s2.length();
            }
        }
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
    return 0;
}
