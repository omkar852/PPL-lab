Study use of files created by option save-temps 

1. use command save-temps options while comiplation of all program 
2. use objdump tool to read object file (explore option of objdump namely l,d,r, prefix-addresses)

Assignment 3: 

 

gcc filename.c -fdump-tree-cfg-graph or gcc filename.c -fdump-tree-all-graph

 

#Graphviz
sudo apt-get install graphviz
dot -Tpng filename.c.011t.cfg.dot -o filename.png

 

GCC developer options
https://gcc.gnu.org/onlinedocs/gcc/Developer-Options.html
