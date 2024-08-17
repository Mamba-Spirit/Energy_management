#!/bin/bash
echo "suppression la BdD existante"
dropdb -h serveur -U anb PROJET_6_DATA_BASE
echo "création de la BdD"
createdb -h serveur -U anb PROJET_6_DATA_BASE
echo "création des tables"
psql -h serveur -U anb -d PROJET_6_DATA_BASE < ./data_base_with_random_value.sql
