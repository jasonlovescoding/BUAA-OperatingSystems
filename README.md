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

![init](https://user-images.githubusercontent.com/12913794/28102213-765c13b0-6700-11e7-99f6-916f88adb63b.png)

![ls](https://user-images.githubusercontent.com/12913794/28102218-799ecbc6-6700-11e7-93e8-dd884777c7d8.png)

![lscat](https://user-images.githubusercontent.com/12913794/28102220-7b25f898-6700-11e7-8914-394a345a1b43.png)

![cat](https://user-images.githubusercontent.com/12913794/28102222-7da5eefc-6700-11e7-966c-43a7555a6620.png)
