PORTNAME=	wwplot
DISTVERSIONPREFIX=	v
DISTVERSION=	0.0.9
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Plotting tool for experimental physics classes
WWW=		https://github.com/wwmm/wwplot

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	${PY_DEPENDS}
RUN_DEPENDS=	${PY_DEPENDS} \
		qt5-core>0:devel/qt5-core \
		qt5-declarative>0:x11-toolkits/qt5-declarative \
		qt5-gui>0:x11-toolkits/qt5-gui
PY_DEPENDS=	${PYTHON_PKGNAMEPREFIX}matplotlib>0:math/py-matplotlib@${PY_FLAVOR} \
		${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}pyside2>0:devel/pyside2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${PY_FLAVOR}

USES=		desktop-file-utils gettext meson python:3.7+ shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	wwmm

SHEBANG_FILES=	wwplot.in

NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} "s|find_installation('python3',|find_installation('python${PYTHON_VER}',|" ${WRKSRC}/meson.build

.include <bsd.port.mk>
