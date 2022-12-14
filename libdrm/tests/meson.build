# Copyright © 2017-2018 Intel Corporation

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

inc_tests = include_directories('.')

subdir('util')
subdir('kms')
subdir('modeprint')
subdir('modeset')
subdir('modeset-vsync')
subdir('modeset-double-buffered')
subdir('modeset-single-buffer')
subdir('modeset-plane-test')
subdir('modeset-plane-scale')
subdir('modeset-plane-rotate')
subdir('modeset-plane-move')
subdir('modeset-page-flip')
subdir('modeset-plane-alpha')
subdir('modeset-double-buffer')
subdir('modesetting')
subdir('modeset-vsync-1')
subdir('drm-hello')
subdir('camera_test')
subdir('modeset-atomic')
subdir('proptest')
subdir('modetest')
subdir('vbltest')
subdir('modelist')
subdir('selectres')
subdir('showfb')
subdir('animatefb')
subdir('modeset-showimg')
if with_libkms
  subdir('kmstest')
endif
if with_radeon
  subdir('radeon')
endif
if with_amdgpu
  subdir('amdgpu')
endif
if with_exynos
  subdir('exynos')
endif
if with_tegra
  subdir('tegra')
endif
if with_etnaviv
  subdir('etnaviv')
endif
if with_nouveau
  subdir('nouveau')
endif

drmsl = executable(
  'drmsl',
  files('drmsl.c'),
  include_directories : [inc_root, inc_drm],
  link_with : libdrm,
  c_args : libdrm_c_args,
)

hash = executable(
  'hash',
  files('hash.c'),
  include_directories : [inc_root, inc_drm],
  link_with : libdrm,
  c_args : libdrm_c_args,
)

random = executable(
  'random',
  files('random.c'),
  include_directories : [inc_root, inc_drm],
  link_with : libdrm,
  c_args : libdrm_c_args,
)

drmdevice = executable(
  'drmdevice',
  files('drmdevice.c'),
  include_directories : [inc_root, inc_drm],
  link_with : libdrm,
  c_args : libdrm_c_args,
)

test('random', random, timeout : 240)
test('hash', hash)
test('drmsl', drmsl)
test('drmdevice', drmdevice)
