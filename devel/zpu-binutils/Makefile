PORTNAME=	zpu-binutils
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	LOCAL/db
DISTNAME=	zpu-toolchain-${PORTVERSION}

MAINTAINER=	db@FreeBSD.org
COMMENT=	ZPU toolchain
WWW=		https://opensource.zylin.com/zpu.htm

LICENSE=	GPLv2

DEPRECATED=	Broken with latest C compiler and port unused
EXPIRATION_DATE=	2023-04-30
BROKEN=		Broken with latest C compilers will not fix

WRKSRC=		${WRKDIR}/${DISTNAME}/toolchain
INSTALL_WRKSRC=	${WRKSRC}/build
MANDIRS=	${PREFIX}/zpu/man

USES=		gettext gmake

INFO=		zpu/as zpu/bfd zpu/binutils zpu/configure zpu/ld zpu/standards

post-patch:
	@${REINPLACE_CMD} -e 's|%%CC%%|${CC}|' ${WRKSRC}/build.sh
	@${REINPLACE_CMD} -e 's|%%GMAKE%%|${MAKE_CMD}|g' ${WRKSRC}/build.sh
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' ${WRKSRC}/build.sh

do-build:
	@cd ${WRKSRC} && ${SETENV} CONFIG_SITE=${CONFIG_SITE} ${SH} build.sh

.include <bsd.port.mk>
