# BUAA-OperationSystems
A rudimental operation system with a tiny shell based on mips32 architecture.
Finished as a final project for the course 'Operation Systems' in Beihang University.

Make first. 


Specify test scripts in init/init.c


To test the tiny shell or the file system, enter 'gxemul -E testmips -C R3000 -M 64 -d gxemul/fs.img gxemul/vmlinux'


To test others, enter '/OSLAB/gxemul -E testmips -C R3000 -M 64 gxemul/vmlinux'


For a detailed walk-through from lab1 to lab6, refer to the guidebook.


lab1: kernel, boot and printf


lab2: memory management


lab3: process and exception


lab4: system call and fork


lab5: file system


lab6: pipe and shell
