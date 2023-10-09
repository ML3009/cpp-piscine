#!/bin/bash

# Vérifier si le nombre d'arguments est correct
if [ $# -ne 2 ]; then
  echo "Utilisation : $0 fichier1.txt fichier2.txt"
  exit 1
fi

# Assigner les noms de fichiers aux variables
fichier1="$1"
fichier2="$2"

# Vérifier si les fichiers existent
if [ ! -e "$fichier1" ]; then
  echo "Le fichier $fichier1 n'existe pas."
  exit 1
fi

if [ ! -e "$fichier2" ]; then
  echo "Le fichier $fichier2 n'existe pas."
  exit 1
fi

# Fonction pour supprimer le contenu entre crochets
function remove_brackets_content() {
  local ligne="$1"
  # Utilisez 'sed' pour supprimer tout ce qui est entre crochets
  echo "$ligne" | sed 's/\[[^]]*\]//g'
}

# Comparer les fichiers ligne par ligne après avoir supprimé le contenu entre crochets
while IFS= read -r ligne1 && IFS= read -r ligne2 <&3; do
  ligne1_no_brackets=$(remove_brackets_content "$ligne1")
  ligne2_no_brackets=$(remove_brackets_content "$ligne2")

  if [ "$ligne1_no_brackets" != "$ligne2_no_brackets" ]; then
    echo "Différence détectée :"
    echo "Dans $fichier1 : $ligne1"
    echo "Dans $fichier2 : $ligne2"
  fi
done < "$fichier1" 3< "$fichier2"

# Afficher un message de succès si aucune différence n'est trouvée
echo "Comparaison terminée."
