cl /c /EHsc  "./uso_geral/src/*.c" "./aula1/src/*.c"
lib /out:"./lib/estatisticas.lib" "./*.obj"
del *.obj