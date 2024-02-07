
#!/bin/bash

function win() {
    

echo "´´´´´´´´´´´´´´´´´´´´´´¶¶¶¶¶¶¶¶¶"
echo "´´´´´´´´´´´´´´´´´´´´¶¶´´´´´´´´´´¶¶"
echo "´´´´´´¶¶¶¶¶´´´´´´´¶¶´´´´´´´´´´´´´´¶¶"
echo "´´´´´¶´´´´´¶´´´´¶¶´´´´´¶¶´´´´¶¶´´´´´¶¶"
echo "´´´´´¶´´´´´¶´´´¶¶´´´´´´¶¶´´´´¶¶´´´´´´´¶¶"
echo "´´´´´¶´´´´¶´´¶¶´´´´´´´´¶¶´´´´¶¶´´´´´´´´¶¶"
echo "´´´´´´¶´´´¶´´´¶´´´´´´´´´´´´´´´´´´´´´´´´´¶¶"
echo "´´´´¶¶¶¶¶¶¶¶¶¶¶¶´´´´´´´´´´´´´´´´´´´´´´´´¶¶"
echo "´´´¶´´´´´´´´´´´´¶´¶¶´´´´´´´´´´´´´¶¶´´´´´¶¶"
echo "´´¶¶´´´´´´´´´´´´¶´´¶¶´´´´´´´´´´´´¶¶´´´´´¶¶"
echo "´¶¶´´´¶¶¶¶¶¶¶¶¶¶¶´´´´¶¶´´´´´´´´¶¶´´´´´´´¶¶"
echo "´¶´´´´´´´´´´´´´´´¶´´´´´¶¶¶¶¶¶¶´´´´´´´´´¶¶"
echo "´¶¶´´´´´´´´´´´´´´¶´´´´´´´´´´´´´´´´´´´´¶¶"
echo "´´¶´´´¶¶¶¶¶¶¶¶¶¶¶¶´´´´´´´´´´´´´´´´´´´¶¶"
echo "´´¶¶´´´´´´´´´´´¶´´¶¶´´´´´´´´´´´´´´´´¶¶"
echo "´´´¶¶¶¶¶¶¶¶¶¶¶¶´´´´´¶¶´´´´´´´´´´´´¶¶"
echo "´´´´´´´´´´´´´´´´´´´´´´´¶¶¶¶¶¶¶¶¶¶¶"

}


function lose() {

echo "+88"
echo "+880"
echo "+880"
echo "+880"
echo "+880"
echo "+8880"
echo "_++880"
echo "_++888_____+++88"
echo "_++8888__+++8880++88"
echo "_+++8888+++8880++8888"
echo "__++888++8888+++888888++8888"
echo "__++88++8888++8888888++888888"
echo "__++++++888888888888888888_+88"
echo "___++++++88888888888888888_++8"
echo "___++++++++000888888888888+88"
echo "____+++++++000088888888888_88"
echo "_____+++++++00088888888888"
echo "_____+++++++088888888888"
echo "______+++++++088888888888"
echo "_______+++++++8888888888"
echo "_______+++++++0088888888"
echo "_______++++++0088888888"
echo "_______++++++00888888"

}

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

echo "=============START PRINTF==========="

cat ./test_output/standard.txt

echo "=============END====================="

echo ""

echo "=============START FT_PRINTF========="

cat ./test_output/build.txt

echo "=============END====================="

diff_result=diff --color=always -u ./test_output/standard.txt ./test_output/build.txt

# Vérifie si le résultat de la commande diff est vide
if [ -z "$diff_result" ]; then
	win
#    rm -rf $destination_file  ./test_output/build.txt ./test_output/standard.txt
else
    # Affiche les différences seulement s'il y en a
    echo "$diff_result"
    lose
fi
rm -rf build.out standard.out

