# Objetivo predeterminado
all:	Main

# Objetivos que no son archivos
.PHONY:	clean	clean_bin

DT		= DTFecha DTInfoEstudiante
MODULOS	= $(DT) ChatGPT Estudiante Informacion Libro PaginaWeb

# Directorios
HDIR	= include
CPPDIR	= src
ODIR	= obj

# Extensión de los archivos
HEAD	= hh	# Header: Puede ser H o HH
EXT		= cpp

# Compilador
CC	= g++

# Opciones de compilación
CCFLAGS	= -Wall -Werror -I$(HDIR) -g

# Cadena de archivos, con directorio y extensión
HS		= $(MODULOS:%=$(HDIR)%/.$(HEAD))
CPPS	= $(MODULOS:%=$(CPPDIR)%/.$(EXT))
OS		= $(MODULOS:%=$(ODIR)%/.o)

MAIN	= Main
EXE		= Main	# Ejecutable

# $@ se expande para transformarse en el objetivo
# $< se expande para transformarse en la 1ra dependencia
$(ODIR)/$(MAIN).o: $(MAIN).$(EXT)
	@printf 'Compilando $(<) \n'; \
	$(CC) $(CCFLAGS) -c $< -o $@

$(ODIR)/%.o: $(CPPDIR)/%.$(EXT) $(HDIR)/%.$(HEAD)
	@printf 'Compilando $(<) \n'; \
	$(CC) $(CCFLAGS) -c $< -o $@

# $^ se expande para transformarse en todas las dependencias
$(EXE):$(ODIR)/$(MAIN).o $(OS)
	@printf 'Compilando y enlazando $(@) \n'; \
	$(CC) $(CCFLAGS) $^ -o $@

# Borra binarios
clean_bin:
	@rm -f $(EXE) $(ODIR)/$(MAIN).o $(OS)

# Borra binarios y copias de respaldo
clean: clean_bin
	@rm -f *~ $(HDIR)/*~ $(CPPDIR)/*~ $(ODIR)/*~