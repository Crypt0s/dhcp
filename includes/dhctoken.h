/* dhctoken.h

   Tokens for config file lexer and parser. */

/*
 * Copyright (c) 1996-1999 Internet Software Consortium.
 * Use is subject to license terms which appear in the file named
 * ISC-LICENSE that should have accompanied this file when you
 * received it.   If a file named ISC-LICENSE did not accompany this
 * file, or you are not sure the one you have is correct, you may
 * obtain an applicable copy of the license at:
 *
 *             http://www.isc.org/isc-license-1.0.html. 
 *
 * This file is part of the ISC DHCP distribution.   The documentation
 * associated with this file is listed in the file DOCUMENTATION,
 * included in the top-level directory of this release.
 *
 * Support and other services are available for ISC products - see
 * http://www.isc.org for more information.
 */

enum dhcp_token {
	SEMI = ';',
	DOT = '.',
	COLON = ':',
	COMMA = ',',
	SLASH = '/',
	LBRACE = '{',
	RBRACE = '}',
	LPAREN = '(',
	RPAREN = ')',
	EQUAL = '=',

	HOST = 256,
	FIRST_TOKEN = HOST,
	HARDWARE = 257,
	FILENAME = 258,
	FIXED_ADDR = 259,
	OPTION = 260,
	ETHERNET = 261,
	STRING = 262,
	NUMBER = 263,
	NUMBER_OR_NAME = 264,
	NAME = 265,
	TIMESTAMP = 266,
	STARTS = 267,
	ENDS = 268,
	UID = 269,
	CLASS = 270,
	LEASE = 271,
	RANGE = 272,
	PACKET = 273,
	CIADDR = 274,
	YIADDR = 275,
	SIADDR = 276,
	GIADDR = 277,
	SUBNET = 278,
	NETMASK = 279,
	DEFAULT_LEASE_TIME = 280,
	MAX_LEASE_TIME = 281,
	VENDOR_CLASS = 282,
	USER_CLASS = 283,
	SHARED_NETWORK = 284,
	SERVER_NAME = 285,
	DYNAMIC_BOOTP = 286,
	SERVER_IDENTIFIER = 287,
	DYNAMIC_BOOTP_LEASE_CUTOFF = 288,
	DYNAMIC_BOOTP_LEASE_LENGTH = 289,
	BOOT_UNKNOWN_CLIENTS = 290,
	NEXT_SERVER = 291,
	TOKEN_RING = 292,
	GROUP = 293,
	ONE_LEASE_PER_CLIENT = 294,
	GET_LEASE_HOSTNAMES = 295,
	USE_HOST_DECL_NAMES = 296,
	SEND = 297,
	CLIENT_IDENTIFIER = 298,
	REQUEST = 299,
	REQUIRE = 300,
	TIMEOUT = 301,
	RETRY = 302,
	SELECT_TIMEOUT = 303,
	SCRIPT = 304,
	INTERFACE = 305,
	RENEW = 306,
	REBIND = 307,
	EXPIRE = 308,
	UNKNOWN_CLIENTS = 309,
	ALLOW = 310,
	BOOTP = 311,
	DENY = 312,
	BOOTING = 313,
	DEFAULT = 314,
	MEDIA = 315,
	MEDIUM = 316,
	ALIAS = 317,
	REBOOT = 318,
	ABANDONED = 319,
	BACKOFF_CUTOFF = 320,
	INITIAL_INTERVAL = 321,
	NAMESERVER = 322,
	DOMAIN = 323,
	SEARCH = 324,
	SUPERSEDE = 325,
	APPEND = 326,
	PREPEND = 327,
	HOSTNAME = 328,
	CLIENT_HOSTNAME = 329,
	REJECT = 330,
	USE_LEASE_ADDR_FOR_DEFAULT_ROUTE = 331,
	MIN_LEASE_TIME = 332,
	MIN_SECS = 333,
	AND = 334,
	OR = 335,
#if 0
	NOT = 336,
#endif
	SUBSTRING = 337,
	SUFFIX = 338,
	CHECK = 339,
	EXTRACT_INT = 340,
	IF = 341,
	TOKEN_ADD = 342,
	BREAK = 343,
	ELSE = 344,
	ELSIF = 345,
	SUBCLASS = 346,
	MATCH = 347,
	SPAWN = 348,
	WITH = 349,
	EXISTS = 350,
	POOL = 351,
	UNKNOWN = 352,
	CLIENTS = 353,
	KNOWN = 354,
	AUTHENTICATED = 355,
	UNAUTHENTICATED = 356,
	ALL = 357,
	DYNAMIC = 358,
	MEMBERS = 359,
	OF = 360,
	PSEUDO = 361,
	LIMIT = 362,
	BILLING = 363,
	PEER = 364,
	FAILOVER = 365,
	MY = 366,
	PARTNER = 367,
	PRIMARY = 368,
	SECONDARY = 369,
	IDENTIFIER = 370,
	PORT = 371,
	MAX_TRANSMIT_IDLE = 372,
	MAX_RESPONSE_DELAY = 373,
	PARTNER_DOWN = 374,
	NORMAL = 375,
	COMMUNICATIONS_INTERRUPTED = 376,
	POTENTIAL_CONFLICT = 377,
	RECOVER = 378,
	FDDI = 379,
	AUTHORITATIVE = 380,
	TOKEN_NOT = 381,
	AUTH_KEY = 382,
	AUTHENTICATION = 383,
	IGNORE = 384,
	ACCEPT = 385,
	PREFER = 386,
	DONT = 387,
	CODE = 388,
	ARRAY = 389,
	BOOLEAN = 390,
	INTEGER = 391,
	SIGNED = 392,
	UNSIGNED = 393,
	IP_ADDRESS = 394,
	TEXT = 395,
	STRING_TOKEN = 396,
	SPACE = 397,
	CONCAT = 398,
	ENCODE_INT = 399,
	DDNS_FWD_NAME = 400,
	DDNS_REV_NAME = 401,
	REVERSE = 402,
	LEASED_ADDRESS = 403,
	BINARY_TO_ASCII = 404,
	PICK_FIRST_VALUE = 405,
	CONFIG_OPTION = 406,
	HOST_DECL_NAME = 407,
	ON = 408,
	EXPIRY = 409,
	RELEASE = 410,
	COMMIT = 411,
	DNS_UPDATE = 412,
	LEASE_TIME = 413,
	STATIC = 414,
	NEVER = 415,
	INFINITE = 416,
	DELETED = 417,
	UPDATED_DNS_RR = 418,
	DNS_DELETE = 419
};

#define is_identifier(x)	((x) >= FIRST_TOKEN &&	\
				 (x) != STRING &&	\
				 (x) != NUMBER &&	\
				 (x) != EOF)
