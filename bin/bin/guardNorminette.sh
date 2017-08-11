while [ 1 ]
do
	clean
	for i in ex*/*.c
	do
		norminette -R CheckForbiddenSourceHeader $i
	done
	sleep 2
	clear
done
