
```sh
sudo apt-get install python-docutils valgrind libcunit1-dev libcairo2-dev cunit cairo libpciaccess-dev python3-pip meson -y
pip3 install ninja meson rst2man
sudo chmod -R 777 intel/tests
```
1. mkdir build
2. meson setup build && cd build 
3.
```
meson --cross-file=../cross_file.txt \
    -D amdgpu=disabled \
    -D cairo-tests=auto \
    -D etnaviv=auto \
    -D exynos=auto \
    -D freedreno=enabled \
    -D freedreno-kgsl=false \
    -D install-test-programs=false \
    -D intel=enabled \
    -D man-pages=disabled \
    -D nouveau=disabled \
    -D omap=disabled \
    -D radeon=disabled \
    -D tegra=disabled \
    -D udev=false \
    -D valgrind=disabled  -D vc4=disabled -D vmwgfx=disabled 
```
4. ninja
