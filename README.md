
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
    -D cairo-tests=false \
    -D etnaviv=false \
    -D exynos=true \
    -D freedreno=false \
    -D freedreno-kgsl=false \
    -D install-test-programs=true \
    -D intel=false \
    -D libkms=false \
    -D man-pages=false \
    -D nouveau=false \
    -D omap=false \
    -D radeon=false \
    -D tegra=false \
    -D udev=false \
    -D valgrind=false  -D vc4=false -D vmwgfx=false
```
4. ninja
