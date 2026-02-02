compile: main.c 
	 gcc main.c -o namo

run: namo
	 ./namo

clean: namo
	 rm namo
