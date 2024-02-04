#!/bin/bash

# Nom du fichier source
source_file="./test_output/main_standard.c"
# Nom du fichier de destination
destination_file="./test_output/main_build.c"

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
	sed -i '' -E 's/([^_])printf/\1ft_printf/g' "$destination_file"
fi

gcc -w $source_file -I ./includes -L . -lftprintf -o standard.out
gcc -w $destination_file -I ./includes -L . -lftprintf -o build.out
./standard.out > ./test_output/standard.txt
./build.out > ./test_output/build.txt

diff_result=$(delta ./test_output/standard.txt ./test_output/build.txt)

# Vérifie si le résultat de la commande diff est vide
if [ -z "$diff_result" ]; then
    echo "Aucune différence!"
#    rm -rf $destination_file  ./test_output/build.txt ./test_output/standard.txt
else
    # Affiche les différences seulement s'il y en a
    echo "$diff_result"
fi
rm -rf build.out standard.out

