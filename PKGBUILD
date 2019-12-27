# Contributor: ivanp7
# Maintainer: ivanp7

_pkgname=tabbed
pkgname=$_pkgname-ivanp7-git
pkgver=0.6
pkgrel=1
pkgdesc="Simple generic tabbed fronted to xembed aware applications"
arch=('i686' 'x86_64')
url="http://tools.suckless.org/tabbed/"
license=('custom:MIT/X')
depends=('libxft')
makedepends=('git')
provides=("$_pkgname")
conflicts=("$_pkgname")
source=('arg.h' 'config.h' 'config.mk' 'LICENSE' 'Makefile' 'tabbed.1' 'tabbed.c')
md5sums=('0f576a5a618691f34ef7d5a80c57a3dd' 'SKIP'
         'e87674ecba4938537ffb39c49899d7d2' '3b68a2f193620a75f06d4e58ba0d1859' 
         '2988505cf7121e3d0d3edf8fd3b886cd' 'SKIP' 'SKIP')

build() {
  make PREFIX=/usr DESTDIR="$pkgdir"
}

package() {
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -Dm644 LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
}

# vim:set ts=2 sw=2 et:
