# CPP20 simple GUI test (for Manjaro

## pre-install
```bash
sudo pacman -Syu gtk3 lib32-gtk3
sudo pacman -Syyu --needed base-devel

sudo pacman -Rd gdk-pixbuf2
sudo pacman -S gdk-pixbuf2

sudo ln -s /usr/include/gdk-pixbuf-2.0/gdk-pixbuf /usr/include/gtk-3.0/gdk

sudo pacman -Syu gtk3 lib32-gtk3
```

## try to compile
```bash
gcc -std=c++20 -fmodules-ts -I /usr/include/gtk-3.0 -I /usr/include/gtk-3.0/gdk `pkg-config --cflags --libs gtk+-3.0 glib-2.0 dbus-glib-1 xft pango atk` main.cpp -o show_a_window

#or 

g++ -std=c++20 -fmodules-ts -I /usr/include/gtk-3.0 -I /usr/include/gtk-3.0/gdk `pkg-config --cflags --libs gtk+-3.0 glib-2.0 dbus-glib-1 xft pango atk` main.cpp -o show_a_window

#or

g++ -std=c++20 -fmodules-ts `pkg-config --cflags --libs gtk+-3.0` main.cpp -o show_a_window
#gcc -std=c++20 -fmodules-ts `pkg-config --cflags --libs gtk+-3.0` main.cpp -o show_a_window
```
