#!/bin/bash

# Nom du fichier source
source_file="main_standard.c"
# Nom du fichier de destination
destination_file="main_build.c"

# Vérifier si le fichier source existe
if [ ! -f "$source_file" ]; then
    echo "Le fichier $source_file n'existe pas."
    exit 1
fi

# Vérifier si le fichier de destination existe
if [ ! -f "$destination_file" ]; then
    # Créer une copie du fichier source
    cp "$source_file" "$destination_file"
else
    cp "$source_file" "$destination_file"
    # Remplacer "printf" par "ft_printf" dans la copie
	sed -i '' -E 's/([^_]|^)printf/\1ft_printf/g' "$destination_file"
fi

gcc -w main_standard.c -I ./includes -L . -lftprintf -o standard.out
gcc -w main_build.c -I ./includes -L . -lftprintf -o build.out
./standard.out > standard.txt
./build.out > build.txt

diff_result=$(delta standard.txt build.txt)

# Vérifie si le résultat de la commande diff est vide
if [ -z "$diff_result" ]; then
    echo "Aucune différence!"
    rm -rf build.txt main_build.c standard.txt
else
    # Affiche les différences seulement s'il y en a
    echo "$diff_result"
fi
rm -rf build.out standard.out

