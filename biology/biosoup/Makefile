PORTNAME=	biosoup
DISTVERSION=	0.10.0-2
DISTVERSIONSUFFIX=	-g62b942c
CATEGORIES=	biology devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Collection of C++ header-only data structures for bioinformatics
WWW=		https://github.com/rvaser/biosoup

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	googletest>0:devel/googletest

USES=		cmake compiler:gcc-c++11-lib

USE_GITHUB=	yes
GH_ACCOUNT=	rvaser

CMAKE_OFF=	biosoup_build_tests

NO_ARCH=	yes

PLIST_FILES=	include/biosoup/nucleic_acid.hpp \
		include/biosoup/overlap.hpp \
		include/biosoup/progress_bar.hpp \
		include/biosoup/sequence.hpp \
		include/biosoup/timer.hpp

do-install:
	cd ${WRKSRC}/include && ${COPYTREE_SHARE} ${PORTNAME} ${STAGEDIR}${PREFIX}/include

do-test:
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -D${PORTNAME}_build_tests:BOOL=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${BUILD_WRKSRC}/bin/${PORTNAME}_test

.include <bsd.port.mk>
