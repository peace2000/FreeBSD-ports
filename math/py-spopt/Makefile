PORTNAME=	spopt
PORTVERSION=	0.5.0
CATEGORIES=	math python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Spatial Optimization in PySAL
WWW=		https://github.com/pysal/spopt

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}geopandas>=0.10.0:graphics/py-geopandas@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}libpysal>=0:science/py-libpysal@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}networkx>=0.1:math/py-networkx@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}numpy>=1.21,1:math/py-numpy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pandas>=1.0.5,1:math/py-pandas@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}PuLP>=0:math/py-PuLP@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scikit-learn>=0.22:science/py-scikit-learn@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>=1.3.2:science/py-scipy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}spaghetti>=0:science/py-spaghetti@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tqdm>=4.27.0:misc/py-tqdm@${PY_FLAVOR}

USES=		python:3.8+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
