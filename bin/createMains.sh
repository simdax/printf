for i in {0..23}
do
	mkdir -p ex`printf "%02d" $i` 
	touch ex`printf "%02d" $i`/main.c
	cat ~/bin/protoMain.c > ex`printf "%02d" $i`/main.c
done