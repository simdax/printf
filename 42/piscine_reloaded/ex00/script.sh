#!/bin/bash

rm -rf test0 test2
find . -not -name script.sh -delete
mkdir test0 test2
touch test1 test3 test4
ln test3 test5
ln -s test0 test6
rights=(715 714 504 404 641 404 755)
times=(06012047 06012146 06012245 06012344 06012343 06012344 06012220)
echo -n abcd > test1
echo -n a > test3
echo -n ab > test4
for i in "${!rights[@]}"; do
	echo test$i
	echo ${rights[$i]}
	chmod "${rights[$i]}" test$i
done
for i in "${!rights[@]}"; do
	touch -ht "${times[$i]}" test$i
done
chmod 715 test0
tar -cf exo.tar test*
