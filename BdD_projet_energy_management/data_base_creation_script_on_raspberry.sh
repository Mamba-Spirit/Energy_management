#!/bin/bash
#data_base_creation_script.sh

echo "suppression la BdD existante"
dropdb -h 192.168.1.8 -U axel_p6 PROJET_6_DATA_BASE
echo "création de la BdD"
createdb -h 192.168.1.8 -U axel_p6 PROJET_6_DATA_BASE
echo "création des tables"
psql -h 192.168.1.8 -U axel_p6 -d PROJET_6_DATA_BASE < ./data_base_with_random_value.sql
