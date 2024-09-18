#!/bin/bash
#Para modificar el FT usar export FT_USER=nours   
id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'
