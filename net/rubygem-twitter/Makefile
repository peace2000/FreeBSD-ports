PORTNAME=	twitter
PORTVERSION=	7.0.0
PORTREVISION=	3
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby interface to the Twitter API
WWW=		https://sferik.github.io/twitter/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-addressable>=2.3<3:www/rubygem-addressable \
		rubygem-buftok>=0.2.0<1:devel/rubygem-buftok \
		rubygem-equalizer>=0.0.11<0.1:devel/rubygem-equalizer \
		rubygem-http4>=4.0<5:www/rubygem-http4 \
		rubygem-http-form_data>=2.0<3:www/rubygem-http-form_data \
		rubygem-http_parser.rb>=0.6.0<1:net/rubygem-http_parser.rb \
		rubygem-memoizable>=0.4.0<0.5:devel/rubygem-memoizable \
		rubygem-multipart-post>=2.0<3:www/rubygem-multipart-post \
		rubygem-naught>=1.0<2:devel/rubygem-naught \
		rubygem-simple_oauth>=0.3.0<0.4:net/rubygem-simple_oauth

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
