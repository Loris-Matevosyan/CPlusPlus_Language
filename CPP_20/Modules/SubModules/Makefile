# To work with gcc(14.1.0 version) or clang(18.1.5 version) on windows

.PHONY: g++ clear_g++ execute
# clang++ clear_clang++

g++:
	@g++ -fmodules-ts -x c++-system-header iostream
	@g++ -fmodules-ts -c -x c++ addSub.ixx
	@g++ -fmodules-ts -c -x c++ multSub.ixx
	@g++ -fmodules-ts -c -x c++ math.ixx
	@g++ -fmodules-ts main.cpp addSub.o multSub.o math.o -o math.exe

# clang++:
# 	@clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
# 	@clang++ -std=c++20 -x c++-module addSub.ixx --precompile -o math.addition.pcm
# 	@clang++ -std=c++20 -x c++-module multSub.ixx --precompile -o math.multiplication.pcm
# 	@clang++ -std=c++20 -x c++-module math.ixx -fprebuilt-module-path=. --precompile -o math.pcm
# 	@clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
# 	@clang++ -std=c++20 math.addition.pcm -c -o math.addition.o
# 	@clang++ -std=c++20 math.multiplication.pcm -c -o math.multiplication.o
# 	@clang++ -std=c++20 math.pcm -c -o math.o
# 	@clang++ -std=c++20 main.o math.addition.o math.multiplication.o math.o -o math

execute:
	@math.exe

clear_g++:
	@rmdir /S gcm.cache
	@del *.o
	@del *.exe

# clear_clang++:
# 	@del *.pcm
# 	@del *.o
# 	@del *.exe