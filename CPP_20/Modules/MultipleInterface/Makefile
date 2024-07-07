# To work with gcc(14.1.0 version) or clang(18.1.5 version) on windows

.PHONY: g++ clang++ clear_g++ clear_clang++ execute


g++:
	@g++ -fmodules-ts -x c++-system-header iostream
	@g++ -fmodules-ts -c -x c++ add.ixx
	@g++ -fmodules-ts -c -x c++ mult.ixx
	@g++ -fmodules-ts -c addImpl.cpp
	@g++ -fmodules-ts -c multImpl.cpp
	@g++ -fmodules-ts main.cpp add.o mult.o addImpl.o multImpl.o -o math.exe

clang++:
	@clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
	@clang++ -std=c++20 -x c++-module add.ixx --precompile -o addition.pcm
	@clang++ -std=c++20 -x c++-module mult.ixx --precompile -o multiplication.pcm
	@clang++ -std=c++20 addImpl.cpp -fmodule-file=addition=addition.pcm -c -o addImpl.o
	@clang++ -std=c++20 multImpl.cpp -fmodule-file=multiplication=multiplication.pcm -c -o multImpl.o
	@clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
	@clang++ -std=c++20 addition.pcm -c -o addition.o
	@clang++ -std=c++20 multiplication.pcm -c -o multiplication.o
	@clang++ -std=c++20 main.o addition.o multiplication.o addImpl.o multImpl.o -o math

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