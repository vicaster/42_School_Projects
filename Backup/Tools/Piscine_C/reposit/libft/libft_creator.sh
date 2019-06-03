rm -rf *.o *.a
gcc -c *.c
ar rc libft.a *.o
ranlib libft.a
rm -rf *.o
