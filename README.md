# GeneralMakefile
A c++ single Makefile which can using support OS in win/unix-like(linux mac ...),and no config(if you using g++).

* [GeneralMakefile](#generalmakefile )
	* [How to use?](#how-to-use )
		* [source code in which?](#source-code-in-which )
		* [using make](#using-make )
			* [Default version is Release](#default-version-is-release )
			* [Make Debug version](#make-debug-version )
			* [Run or debug what your make](#run-or-debug-what-your-make )
			* [Clean](#clean )
			* [Other configure](#other-configure )
	* [try test](#try-test )


## How to use?
### source code in which?
Source code all in path *"src"*
Only support source *".cpp"*
```cpp
.cpp
```
And support both ".h" ".hpp" all header
```cpp
.h .hpp .hxx ...
```
You can contain **child-path** what you want in path *"src"*
like:
```
src
├── class_test
│   ├── cat.cpp
│   ├── cat.hpp
│   ├── child_path
│   │   ├── rose.cpp
│   │   └── rose.hpp
│   ├── dog.cpp
│   └── dog.hpp
└── main.cpp
```

*Notice:In unix-like system, child-path should be less than 4 level depth,otherwise should config the Makefile line 59 about ,to change the
"-maxdepth **4**"(4 change to other depth number).*
```
DIRS := $(shell find $(SRC_PATH) -maxdepth 4 -type d)
```

### using make
#### Default version is Release
```
make
```
if you using other library you should config "INCLUDE_PATH" "LIB_PATH" "LIBS" in Makefile ,or after "make" command to set it like:
```
make INCLUDE_PATH=-Ipath/to/include ...
```


#### Make Debug version
using:
```
make MODE=Debug
```

#### Run or debug what your make
```
make run
```
or
```
make run  MODE=Debug
```
if you want to add params you should append **"ARGS=myparams"**
likes:
```
make run ARGS=100
```
```
make run ARGS=100 MODE=Debug
```

If you want to used *"gdb"* or *"cgdb"* to debug, setting **"USEDEBUG=gdb"** or **"USEDEBUG=cgdb"**, likes:
```
make run ARGS=100 MODE=Debug USEDEBUG=cgdb
```

#### Clean
```
make clean
```

#### Other configure

configure OS system different in section
```
#OS detecting
```


## try test
you can using command-line try **"make"** or **"make MODE=Debug"** in the project-root path to observed the result.
**TRY:**
```
make
make run
make clean
```
**OR:**
```
make MODE=Debug
make run MODE=Debug
make clean
```
