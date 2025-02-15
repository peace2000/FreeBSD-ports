PORTNAME=	git-cliff
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.2
PORTREVISION=	2
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Highly customizable changelog generator
WWW=		https://git-cliff.org

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/../LICENSE

USES=		cargo

USE_GITHUB=	yes
GH_ACCOUNT=	orhun

WRKSRC_SUBDIR=	git-cliff
CARGO_CARGOLOCK=	${WRKSRC}/../Cargo.lock

CARGO_CRATES=	adler-1.0.2 \
		aho-corasick-0.7.20 \
		android_system_properties-0.1.5 \
		async-trait-0.1.62 \
		atty-0.2.14 \
		autocfg-1.1.0 \
		base64-0.13.1 \
		bitflags-1.3.2 \
		block-buffer-0.10.3 \
		bstr-1.1.0 \
		bumpalo-3.12.0 \
		cc-1.0.78 \
		cfg-if-1.0.0 \
		chrono-0.4.23 \
		chrono-tz-0.6.3 \
		chrono-tz-build-0.0.3 \
		clap-3.2.23 \
		clap_complete-3.2.5 \
		clap_derive-3.2.18 \
		clap_lex-0.2.4 \
		clap_mangen-0.1.11 \
		codespan-reporting-0.11.1 \
		config-0.13.3 \
		core-foundation-sys-0.8.3 \
		cpufeatures-0.2.5 \
		crc32fast-1.3.2 \
		crypto-common-0.1.6 \
		ctor-0.1.26 \
		cxx-1.0.87 \
		cxx-build-1.0.87 \
		cxxbridge-flags-1.0.87 \
		cxxbridge-macro-1.0.87 \
		deunicode-0.4.3 \
		diff-0.1.13 \
		digest-0.10.6 \
		directories-4.0.1 \
		dirs-next-2.0.0 \
		dirs-sys-0.3.7 \
		dirs-sys-next-0.1.2 \
		doc-comment-0.3.3 \
		env_logger-0.7.1 \
		errno-0.2.8 \
		errno-dragonfly-0.1.2 \
		flate2-1.0.25 \
		fnv-1.0.7 \
		form_urlencoded-1.1.0 \
		generic-array-0.14.6 \
		getrandom-0.2.8 \
		git-conventional-0.12.1 \
		git2-0.16.0 \
		glob-0.3.1 \
		globset-0.4.10 \
		globwalk-0.8.1 \
		hashbrown-0.12.3 \
		heck-0.4.0 \
		hermit-abi-0.1.19 \
		humansize-1.1.1 \
		humantime-1.3.0 \
		iana-time-zone-0.1.53 \
		iana-time-zone-haiku-0.1.1 \
		idna-0.3.0 \
		ignore-0.4.20 \
		indexmap-1.9.2 \
		io-lifetimes-1.0.4 \
		itoa-1.0.5 \
		jobserver-0.1.25 \
		js-sys-0.3.60 \
		lazy-regex-2.4.1 \
		lazy-regex-proc_macros-2.4.1 \
		lazy_static-1.4.0 \
		libc-0.2.139 \
		libgit2-sys-0.14.1+1.5.0 \
		libz-sys-1.1.8 \
		link-cplusplus-1.0.8 \
		linked-hash-map-0.5.6 \
		linux-raw-sys-0.1.4 \
		log-0.4.17 \
		memchr-2.5.0 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.6.2 \
		nom-7.1.3 \
		num-integer-0.1.45 \
		num-traits-0.2.15 \
		once_cell-1.17.0 \
		os_str_bytes-6.4.1 \
		output_vt100-0.1.3 \
		parse-zoneinfo-0.3.0 \
		pathdiff-0.2.1 \
		percent-encoding-2.2.0 \
		pest-2.5.3 \
		pest_derive-2.5.3 \
		pest_generator-2.5.3 \
		pest_meta-2.5.3 \
		phf-0.11.1 \
		phf_codegen-0.11.1 \
		phf_generator-0.11.1 \
		phf_shared-0.11.1 \
		pkg-config-0.3.26 \
		ppv-lite86-0.2.17 \
		pretty_assertions-1.3.0 \
		pretty_env_logger-0.4.0 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro2-1.0.50 \
		quick-error-1.2.3 \
		quote-1.0.23 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.4 \
		redox_syscall-0.2.16 \
		redox_users-0.4.3 \
		regex-1.7.1 \
		regex-syntax-0.6.28 \
		ring-0.16.20 \
		roff-0.2.1 \
		rust-embed-6.4.2 \
		rust-embed-impl-6.3.1 \
		rust-embed-utils-7.3.0 \
		rustix-0.36.7 \
		rustls-0.20.8 \
		ryu-1.0.12 \
		same-file-1.0.6 \
		scratch-1.0.3 \
		sct-0.7.0 \
		semver-1.0.16 \
		serde-1.0.152 \
		serde_derive-1.0.152 \
		serde_json-1.0.91 \
		serde_regex-1.1.0 \
		sha2-0.10.6 \
		siphasher-0.3.10 \
		slug-0.1.4 \
		spin-0.5.2 \
		strsim-0.10.0 \
		syn-1.0.107 \
		tera-1.17.1 \
		termcolor-1.2.0 \
		terminal_size-0.2.3 \
		textwrap-0.16.0 \
		thiserror-1.0.38 \
		thiserror-impl-1.0.38 \
		thread_local-1.1.4 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.0 \
		toml-0.5.11 \
		typenum-1.16.0 \
		ucd-trie-0.1.5 \
		uncased-0.9.7 \
		unic-char-property-0.9.0 \
		unic-char-range-0.9.0 \
		unic-common-0.9.0 \
		unic-segment-0.9.0 \
		unic-ucd-segment-0.9.0 \
		unic-ucd-version-0.9.0 \
		unicase-2.6.0 \
		unicode-bidi-0.3.9 \
		unicode-ident-1.0.6 \
		unicode-normalization-0.1.22 \
		unicode-width-0.1.10 \
		untrusted-0.7.1 \
		update-informer-0.6.0 \
		ureq-2.6.2 \
		url-2.3.1 \
		vcpkg-0.2.15 \
		version_check-0.9.4 \
		walkdir-2.3.2 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.83 \
		wasm-bindgen-backend-0.2.83 \
		wasm-bindgen-macro-0.2.83 \
		wasm-bindgen-macro-support-0.2.83 \
		wasm-bindgen-shared-0.2.83 \
		web-sys-0.3.60 \
		webpki-0.22.0 \
		webpki-roots-0.22.6 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.42.0 \
		windows_aarch64_gnullvm-0.42.1 \
		windows_aarch64_msvc-0.42.1 \
		windows_i686_gnu-0.42.1 \
		windows_i686_msvc-0.42.1 \
		windows_x86_64_gnu-0.42.1 \
		windows_x86_64_gnullvm-0.42.1 \
		windows_x86_64_msvc-0.42.1 \
		yaml-rust-0.4.5 \
		yansi-0.5.1

PLIST_FILES=	bin/${PORTNAME} \
		bin/git-cliff-completions \
		bin/git-cliff-mangen

post-install:
	@${STRIP_CMD} \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin/git-cliff-completions \
		${STAGEDIR}${PREFIX}/bin/git-cliff-mangen

.include <bsd.port.mk>
