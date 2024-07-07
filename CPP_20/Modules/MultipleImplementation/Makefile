# To work with gcc(14.1.0 version) or clang(18.1.5 version) on windows

.PHONY: g++ clang++ clear_g++ clear_clang++ execute


g++:
	@g++ -fmodules-ts -x c++-system-header iostream
	@g++ -fmodules-ts -c -x c++ math.ixx
	@g++ -fmodules-ts -c addition.cpp
	@g++ -fmodules-ts -c multiplication.cpp
	@g++ -fmodules-ts main.cpp addition.o multiplication.o math.o -o math.exe

clang++:
	@clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
	@clang++ -std=c++20 -x c++-module math.ixx --precompile -o math.pcm
	@clang++ -std=c++20 addition.cpp -fmodule-file=math=math.pcm -c -o addition.o
	@clang++ -std=c++20 -fmodule-file=iostream.pcm multiplication.cpp -fmodule-file=math=math.pcm -c -o multiplication.o
	@clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
	@clang++ -std=c++20 math.pcm -c -o math.o
	@clang++ -std=c++20 main.o addition.o multiplication.o math.o -o math

execute:
	@math.exe

clear_g++:
	@rmdir /S gcm.cache
	@del *.o
	@del *.exe

clear_clang++:
	@del *.pcm
	@del *.o
	@del *.exe