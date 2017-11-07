for i in `ls -d */`
do
	cd $i
	gcc -Wall -Wextra -Werror main.c
	./a.out
	echo '\\\'
	echo '\\\'
	echo '\\\'
	echo '\\\'
	cd ..
done
