@echo off

set CC=gcc

%CC% triangle.c -o "triangle.exe" -O2
%CC% formatted.c -o "formatted_triangle.exe" -O2