
Debian
====================
This directory contains files used to package herenciad/herencia-qt
for Debian-based Linux systems. If you compile herenciad/herencia-qt yourself, there are some useful files here.

## herencia: URI support ##


herencia-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install herencia-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your herencia-qt binary to `/usr/bin`
and the `../../share/pixmaps/herencia128.png` to `/usr/share/pixmaps`

herencia-qt.protocol (KDE)

