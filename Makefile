main : main.cpp
	g++ -Iinclude -Llib *.cpp -o main -lraylib -lopengl32 -lgdi32 -lwinmm
