#!/bin/bash

clear
echo "Bem vindo!"
sleep 3
echo "Como vai o seu dia?"
read ans

clear
echo "Você digitou $ans"
echo "$ans" >> resposta.txt

