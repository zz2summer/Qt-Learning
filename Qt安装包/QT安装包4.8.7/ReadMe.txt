1.先装qt-creator-win-opensource-2.2.1，均默认
2.打开4.8.2i686-4.8.2-release-posix-dwarf-rt_v3-rev3，找到其中的mingw482_32，解压
3.打开qtcreator-2.2.1的目录下的mingw，将第二步中的mingw482_32中的文件全部拷贝到该文件里，替换
4.安装qt-opensource-windows-x86-mingw482-4.8.7，第一个安装位置默认，第二个安装位置更改为qtcreator-2.2.1的目录下的mingw，安装
5.修改环境变量，将C:\Qt\qtcreator-2.2.1\mingw，C:\Qt\4.8.7\bin拷贝到环境变量中的path路径中
6.重启
注：安装路径不能有中文！！！