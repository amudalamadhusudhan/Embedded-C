all: prod area
prod: prod_main.o prod_fun.o
        gcc prod_main.o prod_fun.o -o prod
prod_main.o: prod_main.c
        gcc -c prod_main.c
prod_fun.o: prod_fun.c
        gcc -c prod_fun.c

area: area.o prod_fun.o
        gcc area.o prod_fun.o -o area
area.o: area.c
        gcc -c area.c
clean:
        rm *.o prod area

