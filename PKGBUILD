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
source=('arg.h' 'config.h' 'LICENSE' 'Makefile' 'README' 'tabbed.1' 'tabbed.c' 'xembed.1' 'xembed.c')
sha256sums=('4ef2ab8f70e9d4db88e1889f79b16bfe198e4f5ed10d8b26580bd82454fe756f'
            '17c9079b1a7ab2918b5fc3f2fb31af85d44a80bf0051ca8ee905ccaba651748d'
            '6b2713c659dfdda73429f5993fd522159dcf55eaeb8da5079be77bc9e95fec2b'
            'a3a77ad362f4d2903d72ad58c01238e83d5eaea643e39aa57fae33f3a65a9db4'
            'aa0c8caa4fd5e7b7213a06ae496d41b42d2044fa16db244e4fdebab4ede19f8e'
            '1cea01c6b65499fc3bd397ff17c087d84056a62079667e97f1a6aebfa97bd541'
            '329199a1d7222268284d32fe093b4248759e1dfe40eb53267fc583c8745360b4'
            '868e3d5de7edc6caf7dd35bca97a22083c7be9bc06357811c8dc519778b8a85d'
            '7ea2a05f1856fb1592440bb443b22c11a459d70a322c614ae9e1d0109e1d3f6e')

build() {
  make PREFIX=/usr DESTDIR="$pkgdir"
}

package() {
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -Dm644 LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
}

