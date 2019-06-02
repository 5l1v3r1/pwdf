# pwdf


## Description 
prints the absolute path of a selected file/folder or all files/folders in the current working directory. Note that by not specifying a file name/folder name , will print the absolute path of all files/folders in the current working directory.


## Usage
Print the absolute path of all files in the current working directory
```
$ pwdf 
/home/luke/documents/c/pwdf/pwdf.1p.gz
/home/luke/documents/c/pwdf/.git
/home/luke/documents/c/pwdf/pwdf
/home/luke/documents/c/pwdf/makefile
/home/luke/documents/c/pwdf/pwdf.c
```
Print the absoulte path of a file single file in the current working directory
```
$ pwdf makefile
/home/luke/documents/c/pwdf/makefile
```

## Installation 
## Manual Compilation
### Installation
```
$ git clone https://github.com/Hack-Hut/pwdf.git
$ cd pwdf
$ make
$ sudo make install
```

### Uninstall
```
$ sudo make uninstall
```
