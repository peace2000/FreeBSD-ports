PORTNAME=	azure-data-tables
DISTVERSION=	12.4.0
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Microsoft Azure Data Tables Client Library for Python
WWW=		https://pypi.org/project/azure-data-tables/

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msrest>=0.6.21:net-mgmt/py-msrest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-core>=1.15.0<2.0.0:devel/py-azure-core@${PY_FLAVOR}

USES=		azurepy python:3.6+ zip
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
