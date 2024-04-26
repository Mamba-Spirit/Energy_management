#!/bin/bash
#data_base_creation_script.sh
##### REMPLACEZ nom_user par votre login
##### REMPLACEZ nomBD par le nom que vous voulez donner à votre BD
echo "suppression la BdD existante"
dropdb -h serveur -U anb PROJET_6_DATA_BASE
echo "création de la BdD"
createdb -h serveur -U anb PROJET_6_DATA_BASE
echo "création des tables"
psql -h serveur -U anb -d PROJET_6_DATA_BASE < ./data_base_with_random_value.sql
