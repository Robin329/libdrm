
```sh
sudo apt-get install python3-docutils valgrind libcunit1-dev pkg-config libcairo2-dev  libcairo2-dev libcunit1-dev libpciaccess-dev python3-pip meson -y
pip3 install ninja meson rst2man
sudo chmod -R 777 intel/tests
```

1. mkdir build && cd build
2. meson --cross-file=../cross_file.txt
OR # Maybe compile error
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
    -D intel=auto \
    -D man-pages=auto \
    -D nouveau=auto \
    -D omap=auto \
    -D radeon=auto \
    -D tegra=auto \
    -D udev=false \
    -D valgrind=auto  -D vc4=auto -D vmwgfx=auto
```
1. ninja
