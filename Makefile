Main: obj/Main.o obj/DTFecha.o obj/Informacion.o obj/ChatGPT.o  obj/DTInfoEstudiante.o obj/Estudiante.o  obj/Libro.o obj/PaginaWeb.o 
	g++ obj/Main.o obj/DTFecha.o obj/Informacion.o obj/ChatGPT.o  obj/DTInfoEstudiante.o obj/Estudiante.o  obj/Libro.o obj/PaginaWeb.o -o Main

obj/Main.o: Main.cpp
	g++ -c Main.cpp -o obj/Main.o

obj/DTFecha.o: src/DTFecha.cpp include/DTFecha.hh
	g++ -c src/DTFecha.cpp -o obj/DTFecha.o

obj/Informacion.o: src/Informacion.cpp include/Informacion.hh
	g++ -c src/Informacion.cpp -o obj/Informacion.o	

obj/ChatGPT.o: src/ChatGPT.cpp include/ChatGPT.hh
	g++ -c src/ChatGPT.cpp -o obj/ChatGPT.o
	
obj/DTInfoEstudiante.o: src/DTInfoEstudiante.cpp include/DTInfoEstudiante.hh
	g++ -c src/DTInfoEstudiante.cpp -o obj/DTInfoEstudiante.o

obj/Estudiante.o: src/Estudiante.cpp include/Estudiante.hh
	g++ -c src/Estudiante.cpp -o obj/Estudiante.o

obj/Libro.o: src/Libro.cpp include/Libro.hh
	g++ -c src/Libro.cpp -o obj/Libro.o

obj/PaginaWeb.o: src/PaginaWeb.cpp include/PaginaWeb.hh
	g++ -c src/PaginaWeb.cpp -o obj/PaginaWeb.o

clean:
	@rm -f obj/*.o Main