# Contributor: ivanp7
# Maintainer: ivanp7

_pkgname=tabbed
pkgname=$_pkgname-ivanp7
pkgver=0.7
pkgrel=1
pkgdesc="Simple generic tabbed fronted to xembed aware applications"
arch=('i686' 'x86_64')
url="http://tools.suckless.org/tabbed/"
license=('custom:MIT/X')
depends=('libxft')
makedepends=('git')
provides=("$_pkgname")
conflicts=("$_pkgname")
source=('arg.h' 'config.h' 'LICENSE' 'Makefile' 'tabbed.1' 'tabbed.c' 'xembed.1' 'xembed.c')

build() {
  make PREFIX=/usr DESTDIR="$pkgdir"
}

package() {
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -Dm644 LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
}

