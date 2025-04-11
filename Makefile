# Variáveis do compilador e flags
CXX         = g++
CXXFLAGS    = -Wall -Wextra -std=c++17 -Isrc -Iexternal/SFML/include -Iexternal/imgui -Iexternal/imgui-sfml
LDFLAGS     = -Lexternal/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system -Lexternal/imgui-sfml/lib -lImGui-SFML

# Arquivos fonte e objeto (use barras invertidas ou normais conforme o shell)
SRC         = src/main.cpp
OBJ         = build/main.o
TARGET      = programa.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) $(LDFLAGS)

build/main.o: src/main.cpp
	if not exist build mkdir build
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	if exist build rmdir /S /Q build
	if exist $(TARGET) del $(TARGET)
