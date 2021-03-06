/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0




/* Copy the first part of user declarations.  */

#line 67 "bison-chapel.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison-chapel.h".  */
#ifndef YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
# define YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 33 "chapel.ypp" /* yacc.c:355  */

  #include <string>
  extern int         captureTokens;
  extern std::string captureString;
#line 47 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_0_
  #define _BISON_CHAPEL_DEFINES_0_

  #define YYLEX_NEWLINE                  -1
  #define YYLEX_SINGLE_LINE_COMMENT      -2
  #define YYLEX_BLOCK_COMMENT            -3

  typedef void* yyscan_t;

  int processNewline(yyscan_t scanner);
  void stringBufferInit();

  #endif
#line 67 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_1_
  #define _BISON_CHAPEL_DEFINES_1_

  #include "symbol.h"

  #include "ImportStmt.h"

  #include <cstdio>
  #include <utility>
  #include <vector>

  class ArgSymbol;
  class BlockStmt;
  class CallExpr;
  class DefExpr;
  class EnumType;
  class Expr;
  class FnSymbol;
  class NamedExpr;
  class Type;

  enum   ProcIter {
    ProcIter_PROC,
    ProcIter_ITER
  };

  struct PotentialRename {
    enum{SINGLE, DOUBLE} tag;

    union {
      Expr*  elem;
      std::pair<Expr*, Expr*>* renamed;
    };
  };

  struct WhereAndLifetime {
    Expr* where;
    Expr* lifetime;
  };
  static inline
  WhereAndLifetime makeWhereAndLifetime(Expr* w, Expr* lt) {
    WhereAndLifetime ret;
    ret.where = w;
    ret.lifetime = lt;
    return ret;
  }

  // The lexer only uses pch.
  // The remaining types are for parser productions
  union  YYSTYPE {
    const char*               pch;

    Vec<const char*>*         vpch;
    RetTag                    retTag;
    AggregateTag              aggrTag;
    bool                      b;
    IntentTag                 pt;
    Expr*                     pexpr;
    DefExpr*                  pdefexpr;
    CallExpr*                 pcallexpr;
    BlockStmt*                pblockstmt;
    Type*                     ptype;
    EnumType*                 penumtype;
    std::vector<DefExpr*>*    pvecOfDefs;
    FnSymbol*                 pfnsymbol;
    ModuleSymbol*             pmodsymbol;
    ImportStmt*               pimportstmt;
    ProcIter                  procIter;
    FlagSet*                  flagSet;
    ShadowVarSymbol*          pShadowVar;
    ShadowVarPrefix           pShadowVarPref;
    std::vector<PotentialRename*>* ponlylist;
    std::set<Flag>*           pflagset;
    WhereAndLifetime          lifetimeAndWhere;
  };

  #endif
#line 151 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_2_
  #define _BISON_CHAPEL_DEFINES_2_

  struct YYLTYPE {
    int         first_line;
    int         first_column;
    int         last_line;
    int         last_column;
    const char* comment;
    const char* prevModule;
  };

  #define YYLTYPE_IS_DECLARED 1
  #define YYLTYPE_IS_TRIVIAL  1

  #endif
#line 174 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_3_
  #define _BISON_CHAPEL_DEFINES_3_

  class ParserContext {
  public:
    ParserContext()
    {
      scanner       = 0;
      latestComment = 0;
      generatedStmt = 0;
    }

    ParserContext(yyscan_t scannerIn)
    {
      scanner       = scannerIn;
      latestComment = 0;
      generatedStmt = 0;
    }

    yyscan_t    scanner;
    const char* latestComment;
    BaseAST*    generatedStmt;
  };

  #endif

#line 242 "bison-chapel.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TIDENT = 258,
    TQUERIEDIDENT = 259,
    INTLITERAL = 260,
    REALLITERAL = 261,
    IMAGLITERAL = 262,
    STRINGLITERAL = 263,
    BYTESLITERAL = 264,
    CSTRINGLITERAL = 265,
    EXTERNCODE = 266,
    TALIGN = 267,
    TAS = 268,
    TATOMIC = 269,
    TBEGIN = 270,
    TBREAK = 271,
    TBOOL = 272,
    TBORROWED = 273,
    TBY = 274,
    TBYTES = 275,
    TCATCH = 276,
    TCLASS = 277,
    TCOBEGIN = 278,
    TCOFORALL = 279,
    TCOMPLEX = 280,
    TCONFIG = 281,
    TCONST = 282,
    TCONTINUE = 283,
    TDEFER = 284,
    TDELETE = 285,
    TDMAPPED = 286,
    TDO = 287,
    TDOMAIN = 288,
    TELSE = 289,
    TENUM = 290,
    TEXCEPT = 291,
    TEXPORT = 292,
    TEXTERN = 293,
    TFALSE = 294,
    TFOR = 295,
    TFORALL = 296,
    TFORWARDING = 297,
    TIF = 298,
    TIMAG = 299,
    TIMPORT = 300,
    TIN = 301,
    TINCLUDE = 302,
    TINDEX = 303,
    TINLINE = 304,
    TINOUT = 305,
    TINT = 306,
    TITER = 307,
    TINITEQUALS = 308,
    TLABEL = 309,
    TLAMBDA = 310,
    TLET = 311,
    TLIFETIME = 312,
    TLOCAL = 313,
    TLOCALE = 314,
    TMINUSMINUS = 315,
    TMODULE = 316,
    TNEW = 317,
    TNIL = 318,
    TNOINIT = 319,
    TNONE = 320,
    TNOTHING = 321,
    TON = 322,
    TONLY = 323,
    TOTHERWISE = 324,
    TOUT = 325,
    TOVERRIDE = 326,
    TOWNED = 327,
    TPARAM = 328,
    TPLUSPLUS = 329,
    TPRAGMA = 330,
    TPRIMITIVE = 331,
    TPRIVATE = 332,
    TPROC = 333,
    TPROTOTYPE = 334,
    TPUBLIC = 335,
    TREAL = 336,
    TRECORD = 337,
    TREDUCE = 338,
    TREF = 339,
    TREQUIRE = 340,
    TRETURN = 341,
    TSCAN = 342,
    TSELECT = 343,
    TSERIAL = 344,
    TSHARED = 345,
    TSINGLE = 346,
    TSPARSE = 347,
    TSTRING = 348,
    TSUBDOMAIN = 349,
    TSYNC = 350,
    TTHEN = 351,
    TTHIS = 352,
    TTHROW = 353,
    TTHROWS = 354,
    TTRUE = 355,
    TTRY = 356,
    TTRYBANG = 357,
    TTYPE = 358,
    TUINT = 359,
    TUNDERSCORE = 360,
    TUNION = 361,
    TUNMANAGED = 362,
    TUSE = 363,
    TVAR = 364,
    TVOID = 365,
    TWHEN = 366,
    TWHERE = 367,
    TWHILE = 368,
    TWITH = 369,
    TYIELD = 370,
    TZIP = 371,
    TALIAS = 372,
    TAND = 373,
    TASSIGN = 374,
    TASSIGNBAND = 375,
    TASSIGNBOR = 376,
    TASSIGNBXOR = 377,
    TASSIGNDIVIDE = 378,
    TASSIGNEXP = 379,
    TASSIGNLAND = 380,
    TASSIGNLOR = 381,
    TASSIGNMINUS = 382,
    TASSIGNMOD = 383,
    TASSIGNMULTIPLY = 384,
    TASSIGNPLUS = 385,
    TASSIGNREDUCE = 386,
    TASSIGNSL = 387,
    TASSIGNSR = 388,
    TBANG = 389,
    TBAND = 390,
    TBNOT = 391,
    TBOR = 392,
    TBXOR = 393,
    TCOLON = 394,
    TCOMMA = 395,
    TDIVIDE = 396,
    TDOT = 397,
    TDOTDOT = 398,
    TDOTDOTDOT = 399,
    TEQUAL = 400,
    TEXP = 401,
    TGREATER = 402,
    TGREATEREQUAL = 403,
    THASH = 404,
    TIO = 405,
    TLESS = 406,
    TLESSEQUAL = 407,
    TMINUS = 408,
    TMOD = 409,
    TNOTEQUAL = 410,
    TOR = 411,
    TPLUS = 412,
    TQUESTION = 413,
    TSEMI = 414,
    TSHIFTLEFT = 415,
    TSHIFTRIGHT = 416,
    TSTAR = 417,
    TSWAP = 418,
    TLCBR = 419,
    TRCBR = 420,
    TLP = 421,
    TRP = 422,
    TLSBR = 423,
    TRSBR = 424,
    TNOELSE = 425,
    TDOTDOTOPENHIGH = 426,
    TUPLUS = 427,
    TUMINUS = 428,
    TLNOT = 429
  };
#endif

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



#ifndef YYPUSH_MORE_DEFINED
# define YYPUSH_MORE_DEFINED
enum { YYPUSH_MORE = 4 };
#endif

typedef struct yypstate yypstate;

int yypush_parse (yypstate *ps, int pushed_char, YYSTYPE const *pushed_val, YYLTYPE *pushed_loc, ParserContext* context);

yypstate * yypstate_new (void);
void yypstate_delete (yypstate *ps);
/* "%code provides" blocks.  */
#line 205 "chapel.ypp" /* yacc.c:355  */

  extern int yydebug;

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str);

#line 462 "bison-chapel.cpp" /* yacc.c:355  */

#endif /* !YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 468 "bison-chapel.cpp" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 39 "chapel.ypp" /* yacc.c:359  */

  #include <string>
  int         captureTokens;
  std::string captureString;
  bool        parsingPrivate=false;
#line 213 "chapel.ypp" /* yacc.c:359  */

  #include "build.h"
  #include "CatchStmt.h"
  #include "DeferStmt.h"
  #include "DoWhileStmt.h"
  #include "driver.h"
  #include "flex-chapel.h"
  #include "ForallStmt.h"
  #include "ForLoop.h"
  #include "IfExpr.h"
  #include "misc.h"
  #include "parser.h"
  #include "stmt.h"
  #include "stringutil.h"
  #include "TryStmt.h"
  #include "vec.h"
  #include "WhileDoStmt.h"

  #include <cstdio>
  #include <cstdlib>
  #include <cstring>
  #include <stdint.h>

  #define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
    if (N) {                                                              \
      (Current).first_line   = (Rhs)[1].first_line;                       \
      (Current).first_column = (Rhs)[1].first_column;                     \
      (Current).last_line    = (Rhs)[N].last_line;                        \
      (Current).last_column  = (Rhs)[N].last_column;                      \
      (Current).comment      = NULL;                                      \
                                                                          \
      if ((Current).first_line)                                           \
        yystartlineno = (Current).first_line;                             \
                                                                          \
    } else  {                                                             \
      (Current) = yylloc;                                                 \
    }

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str) {

    // like USR_FATAL_CONT
    setupError("parser", __FILE__, __LINE__, 3);

    // TODO -- should this begin with error:
    if (!chplParseString) {
      const char* yyText = yyget_text(context->scanner);
      fprintf(stderr, "%s:%d: %s", yyfilename, chplLineno, str);

      if (strlen(yyText) > 0) {
        fprintf(stderr, ": near '%s'", yyText);
      }
    } else {
      fprintf(stderr, "%s: %s", yyfilename, str);

      if (chplParseStringMsg && (strlen(chplParseStringMsg) > 0)) {
        fprintf(stderr, " %s", chplParseStringMsg);
      }
    }

    fprintf(stderr, "\n");
  }

#line 541 "bison-chapel.cpp" /* yacc.c:359  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   18986

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  152
/* YYNRULES -- Number of rules.  */
#define YYNRULES  645
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1156

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   429

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   506,   506,   511,   512,   518,   519,   524,   525,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   565,   578,   583,   588,   596,   597,   598,   602,   603,
     607,   608,   609,   614,   613,   634,   635,   636,   641,   642,
     647,   652,   657,   661,   670,   675,   680,   685,   689,   693,
     701,   706,   710,   715,   719,   720,   721,   725,   726,   727,
     728,   729,   730,   731,   735,   740,   741,   742,   746,   747,
     751,   755,   757,   759,   761,   763,   765,   772,   773,   777,
     778,   779,   780,   781,   782,   785,   786,   787,   788,   789,
     790,   802,   803,   814,   815,   816,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,   836,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   854,   855,   856,   857,   861,   862,
     866,   867,   871,   872,   873,   883,   883,   888,   889,   890,
     891,   892,   893,   894,   898,   899,   900,   901,   906,   905,
     921,   920,   937,   936,   952,   951,   967,   971,   976,   984,
     995,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,
    1026,  1032,  1038,  1044,  1051,  1058,  1062,  1069,  1073,  1074,
    1075,  1076,  1077,  1079,  1081,  1083,  1088,  1091,  1092,  1093,
    1094,  1095,  1096,  1100,  1101,  1105,  1106,  1107,  1111,  1112,
    1116,  1119,  1121,  1126,  1127,  1131,  1133,  1135,  1142,  1152,
    1166,  1171,  1176,  1184,  1185,  1190,  1191,  1193,  1198,  1214,
    1221,  1230,  1238,  1242,  1249,  1250,  1255,  1260,  1254,  1287,
    1290,  1294,  1302,  1312,  1301,  1344,  1348,  1353,  1357,  1362,
    1369,  1370,  1374,  1375,  1376,  1377,  1378,  1379,  1380,  1381,
    1382,  1383,  1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,
    1392,  1393,  1394,  1395,  1396,  1397,  1398,  1399,  1400,  1401,
    1405,  1406,  1407,  1408,  1409,  1410,  1411,  1412,  1413,  1414,
    1415,  1416,  1420,  1421,  1425,  1429,  1430,  1431,  1435,  1437,
    1439,  1441,  1443,  1448,  1449,  1453,  1454,  1455,  1456,  1457,
    1458,  1459,  1460,  1461,  1465,  1466,  1467,  1468,  1469,  1470,
    1474,  1475,  1479,  1480,  1481,  1482,  1483,  1484,  1488,  1489,
    1492,  1493,  1497,  1498,  1502,  1507,  1511,  1512,  1513,  1521,
    1522,  1524,  1526,  1528,  1533,  1535,  1540,  1541,  1542,  1543,
    1544,  1545,  1546,  1550,  1552,  1557,  1559,  1561,  1566,  1579,
    1596,  1597,  1599,  1604,  1605,  1606,  1607,  1608,  1612,  1618,
    1626,  1627,  1635,  1637,  1642,  1644,  1646,  1651,  1653,  1655,
    1662,  1663,  1664,  1669,  1671,  1673,  1677,  1681,  1683,  1687,
    1695,  1696,  1697,  1698,  1699,  1704,  1705,  1706,  1707,  1708,
    1728,  1732,  1736,  1744,  1751,  1752,  1753,  1757,  1759,  1765,
    1767,  1769,  1774,  1775,  1776,  1777,  1778,  1784,  1785,  1786,
    1787,  1791,  1792,  1796,  1797,  1798,  1802,  1803,  1807,  1808,
    1812,  1813,  1817,  1818,  1819,  1820,  1824,  1825,  1836,  1838,
    1840,  1846,  1847,  1848,  1849,  1850,  1851,  1853,  1855,  1857,
    1859,  1861,  1863,  1866,  1868,  1870,  1872,  1874,  1876,  1878,
    1880,  1883,  1885,  1890,  1892,  1894,  1896,  1898,  1900,  1902,
    1904,  1906,  1908,  1910,  1912,  1914,  1921,  1927,  1933,  1939,
    1948,  1958,  1966,  1967,  1968,  1969,  1970,  1971,  1972,  1973,
    1978,  1979,  1983,  1987,  1988,  1992,  1996,  1997,  2001,  2005,
    2009,  2016,  2017,  2018,  2019,  2020,  2021,  2025,  2026,  2031,
    2033,  2037,  2041,  2045,  2053,  2058,  2064,  2070,  2077,  2086,
    2090,  2097,  2105,  2106,  2107,  2108,  2109,  2110,  2111,  2112,
    2113,  2115,  2117,  2119,  2134,  2136,  2138,  2140,  2145,  2146,
    2150,  2151,  2152,  2156,  2157,  2158,  2159,  2170,  2171,  2172,
    2173,  2177,  2178,  2179,  2183,  2184,  2185,  2186,  2187,  2195,
    2196,  2197,  2198,  2202,  2203,  2207,  2208,  2209,  2210,  2211,
    2212,  2213,  2214,  2215,  2217,  2219,  2220,  2221,  2225,  2233,
    2234,  2238,  2239,  2240,  2241,  2242,  2243,  2244,  2245,  2246,
    2247,  2248,  2249,  2250,  2251,  2252,  2253,  2254,  2255,  2256,
    2257,  2258,  2259,  2260,  2265,  2266,  2267,  2268,  2269,  2270,
    2271,  2275,  2276,  2277,  2278,  2282,  2283,  2284,  2285,  2290,
    2291,  2292,  2293,  2294,  2295,  2296
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENT", "TQUERIEDIDENT", "INTLITERAL",
  "REALLITERAL", "IMAGLITERAL", "STRINGLITERAL", "BYTESLITERAL",
  "CSTRINGLITERAL", "EXTERNCODE", "TALIGN", "TAS", "TATOMIC", "TBEGIN",
  "TBREAK", "TBOOL", "TBORROWED", "TBY", "TBYTES", "TCATCH", "TCLASS",
  "TCOBEGIN", "TCOFORALL", "TCOMPLEX", "TCONFIG", "TCONST", "TCONTINUE",
  "TDEFER", "TDELETE", "TDMAPPED", "TDO", "TDOMAIN", "TELSE", "TENUM",
  "TEXCEPT", "TEXPORT", "TEXTERN", "TFALSE", "TFOR", "TFORALL",
  "TFORWARDING", "TIF", "TIMAG", "TIMPORT", "TIN", "TINCLUDE", "TINDEX",
  "TINLINE", "TINOUT", "TINT", "TITER", "TINITEQUALS", "TLABEL", "TLAMBDA",
  "TLET", "TLIFETIME", "TLOCAL", "TLOCALE", "TMINUSMINUS", "TMODULE",
  "TNEW", "TNIL", "TNOINIT", "TNONE", "TNOTHING", "TON", "TONLY",
  "TOTHERWISE", "TOUT", "TOVERRIDE", "TOWNED", "TPARAM", "TPLUSPLUS",
  "TPRAGMA", "TPRIMITIVE", "TPRIVATE", "TPROC", "TPROTOTYPE", "TPUBLIC",
  "TREAL", "TRECORD", "TREDUCE", "TREF", "TREQUIRE", "TRETURN", "TSCAN",
  "TSELECT", "TSERIAL", "TSHARED", "TSINGLE", "TSPARSE", "TSTRING",
  "TSUBDOMAIN", "TSYNC", "TTHEN", "TTHIS", "TTHROW", "TTHROWS", "TTRUE",
  "TTRY", "TTRYBANG", "TTYPE", "TUINT", "TUNDERSCORE", "TUNION",
  "TUNMANAGED", "TUSE", "TVAR", "TVOID", "TWHEN", "TWHERE", "TWHILE",
  "TWITH", "TYIELD", "TZIP", "TALIAS", "TAND", "TASSIGN", "TASSIGNBAND",
  "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE", "TASSIGNEXP",
  "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNREDUCE", "TASSIGNSL",
  "TASSIGNSR", "TBANG", "TBAND", "TBNOT", "TBOR", "TBXOR", "TCOLON",
  "TCOMMA", "TDIVIDE", "TDOT", "TDOTDOT", "TDOTDOTDOT", "TEQUAL", "TEXP",
  "TGREATER", "TGREATEREQUAL", "THASH", "TIO", "TLESS", "TLESSEQUAL",
  "TMINUS", "TMOD", "TNOTEQUAL", "TOR", "TPLUS", "TQUESTION", "TSEMI",
  "TSHIFTLEFT", "TSHIFTRIGHT", "TSTAR", "TSWAP", "TLCBR", "TRCBR", "TLP",
  "TRP", "TLSBR", "TRSBR", "TNOELSE", "TDOTDOTOPENHIGH", "TUPLUS",
  "TUMINUS", "TLNOT", "$accept", "program", "toplevel_stmt_ls",
  "toplevel_stmt", "pragma_ls", "stmt", "module_decl_start",
  "module_decl_stmt", "access_control", "opt_prototype",
  "include_access_control", "include_module_stmt", "$@1", "block_stmt",
  "stmt_ls", "renames_ls", "use_renames_ls", "opt_only_ls", "except_ls",
  "use_access_control", "use_stmt", "import_stmt", "import_expr",
  "import_ls", "require_stmt", "assignment_stmt", "opt_label_ident",
  "ident_fn_def", "ident_def", "ident_use", "internal_type_ident_def",
  "scalar_type", "reserved_type_ident_use", "do_stmt", "return_stmt",
  "class_level_stmt", "@2", "private_decl", "forwarding_stmt",
  "extern_export_decl_stmt", "$@3", "$@4", "$@5", "$@6",
  "extern_block_stmt", "loop_stmt", "zippered_iterator", "if_stmt",
  "defer_stmt", "try_stmt", "catch_stmt_ls", "catch_stmt", "catch_expr",
  "throw_stmt", "select_stmt", "when_stmt_ls", "when_stmt",
  "class_decl_stmt", "class_tag", "opt_inherit", "class_level_stmt_ls",
  "enum_decl_stmt", "enum_header", "enum_ls", "enum_item",
  "lambda_decl_expr", "$@7", "$@8", "linkage_spec", "fn_decl_stmt", "$@9",
  "$@10", "fn_decl_stmt_inner", "fn_decl_receiver_expr", "fn_ident",
  "assignop_ident", "opt_formal_ls", "req_formal_ls", "formal_ls",
  "formal", "opt_intent_tag", "required_intent_tag", "opt_this_intent_tag",
  "proc_or_iter", "opt_ret_tag", "opt_throws_error",
  "opt_function_body_stmt", "function_body_stmt", "query_expr",
  "var_arg_expr", "opt_lifetime_where", "lifetime_components_expr",
  "lifetime_expr", "lifetime_ident", "type_alias_decl_stmt",
  "type_alias_decl_stmt_inner", "opt_init_type", "var_decl_type",
  "var_decl_stmt", "var_decl_stmt_inner_ls", "var_decl_stmt_inner",
  "tuple_var_decl_component", "tuple_var_decl_stmt_inner_ls",
  "opt_init_expr", "ret_array_type", "opt_ret_type", "opt_type",
  "array_type", "opt_formal_array_elt_type", "formal_array_type",
  "opt_formal_type", "expr_ls", "simple_expr_ls", "tuple_component",
  "tuple_expr_ls", "opt_actual_ls", "actual_ls", "actual_expr",
  "ident_expr", "type_level_expr", "sub_type_level_expr", "for_expr",
  "cond_expr", "nil_expr", "stmt_level_expr", "opt_task_intent_ls",
  "task_intent_clause", "task_intent_ls", "forall_intent_clause",
  "forall_intent_ls", "intent_expr", "shadow_var_prefix", "io_expr",
  "new_maybe_decorated", "new_expr", "let_expr", "expr", "opt_expr",
  "opt_try_expr", "lhs_expr", "fun_expr", "call_expr", "dot_expr",
  "parenthesized_expr", "bool_literal", "literal_expr", "assoc_expr_ls",
  "binary_op_expr", "unary_op_expr", "reduce_expr", "scan_expr",
  "reduce_scan_op_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429
};
# endif

#define YYPACT_NINF -993

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-993)))

#define YYTABLE_NINF -596

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -993,   122,  2851,  -993,   -54,  -993,  -993,  -993,  -993,  -993,
    -993,  -993,  4203,   216,   389,  -993, 13689,  -993, 17127,   216,
   10428,  -993,    41,   290,   389,  4203, 10428,  4203,   239, 18676,
   10595,  7573,  -993,  7740,  8750,  6229, 10428,  -993,  -993,   250,
    -993,  -993, 18726,  -993, 14034,  8917,  -993, 10428,   204,  -993,
    -993,  -993, 10428,  -993, 13689,  -993, 10428,   441,   284,   428,
    1225,  -993, 18776,  -993,  9086,  7070, 10428,  8917, 13689, 10428,
     376,  -993,   299,  4203,  -993, 10428,  -993, 10762, 10762, 18726,
    -993,  -993, 13689,  -993,  -993, 10428, 10428,  -993, 10428,  -993,
   10428,  -993,  -993, 13225, 10428,  -993, 10428,  -993,  -993,  -993,
    3189,  6398,  7909, 10428,  -993,  4034,  -993,   316,  -993,   402,
    -993,  -993,     0,  -993,  -993,  -993,  -993,  -993,  -993,  -993,
    -993,  -993,  -993,  -993,  -993,  -993,  -993,  -993,  -993,  -993,
    -993,  -993, 18726,  -993, 18726,   -57,   249,  -993,  -993, 14034,
    -993,   332,  -993,   345,  -993,  -993,   355,   386,   369, 10428,
     391,   392, 18122, 13218,   -13,   399,   408,  -993,  -993,  -993,
    -993,  -993,  -993,  -993,   360,  -993,  -993, 18122,   372,  4203,
    -993,  -993,   411, 10428,  -993,  -993, 10428, 10428, 10428,  -993,
   10428,  9086,  9086,   146,  -993,  -993,  -993,  -993,   190,   151,
    -993,  -993,   373,  2611, 18726, 14034,  -993,   424,  -993,   226,
   18122,   442,  7239,   504, 18826, 18122,   520,   507,  -993, 18876,
   18726,   520, 18726,   426,    -1, 15048,    35, 14972,   157,  -993,
   15138, 14268,   182,  7239,  -993,  -993,  -993,  -993,  -993,  -993,
    -993,  -993,  -993,  -993,  -993,  -993,  -993,  -993,  -993,  -993,
    -993,  -993,  -993,  -993,  -993,  -993,  -993,  -993,  4203,  -993,
     430,  2614,    94,    57,  -993,  4203,  -993,  -993, 15384,   379,
    -993,   440,   445,  -993, 15384,   190,   379,  -993,  7239,   988,
    -993,  -993,  9253,  -993,  -993,  -993, 18726,  -993,   264, 18122,
   10428, 10428,  -993, 18122,   431, 15919,  -993, 15384,   190, 18122,
     455,  7239,  -993, 18122, 15959,  -993,  -993, 16008, 13682,  -993,
    -993, 16105,   479,   449,   190, 15384, 16154,   415,   415,  2002,
     379,   379,    96,  -993,  -993,  3358,   105,  -993, 10428,  -993,
      11,   114,  -993,     3,     2, 16200,   -82,  2002,   611,  -993,
    3527,  -993,   562, 10428, 10428,   487,   463,  -993,  -993,  -993,
     305,   378,  -993, 10428,   489, 10428, 10428, 10428,  8750,  8750,
   10428,   396, 10428, 10428, 10428, 10428, 10428,   270, 13225, 10428,
   10428, 10428, 10428, 10428, 10428, 10428, 10428, 10428, 10428, 10428,
   10428, 10428, 10428, 10428, 10428,   568,  -993,  -993,  -993,  -993,
    -993,  8076,  8076,  -993,  -993,  -993,  -993,  8076,  -993,  -993,
    8076,  8076,  7239,  7239,  8750,  8750,  6903,  -993,  -993, 15460,
   15540, 16300,    54,  3696,  -993,  8750,    -1,   474,   308,  -993,
   10428,  -993, 10428,   517,  -993,   467,   497,  -993,  -993,  -993,
   18726,  -993, 14034,  -993, 18726,   482,  -993, 14034,   597,  9086,
    -993,  4372,  8750,  -993,   480,  -993,    -1,  4541,  8750,  -993,
      -1, 10929, 10428,  -993,  4203,  -993,   615, 10428,  -993,  -993,
     402,   485,  -993,   532,  -993,  -993,  2614,  -993,   519,   488,
    -993, 11096,   542, 10428, 14034,  -993,  -993, 10428, 10428,  -993,
     496,  -993,  -993,  9086,  -993, 18122, 18122,  -993,    28,  -993,
    7239,   510,  -993,   652,  -993,   652,  -993, 11263,   538,  -993,
    -993,  -993,  -993,  -993,  -993,  8245,  -993, 16346,  6567,  -993,
    6736,  -993,  4203,   511,  8750,  8414,  3020,   512, 10428,  9420,
    -993,  -993,   143,  -993,  3865, 18726,  -993,   317, 16386,   318,
   15228,  9086,   521, 18626,   212,  -993, 16499, 18422, 18422,   414,
    -993,   414,  -993,   414,  2437,  1376,   633,   675,   190,   415,
     525,  -993,  -993,  -993,  -993,  2002,  1808,   414,  1340,  1340,
   18422,  1340,  1340,  1582,   415,  1808, 18471,  1582,   379,   379,
     415,  2002,   524,   533,   534,   535,   536,   537,   531,   539,
    -993,   414,  -993,   414,    34,  -993,  -993,  -993,   137,  -993,
    1110, 18235,   425, 11430,  8750, 11597,  8750, 10428,  8750, 13953,
     216, 16544,  -993,  -993,  -993, 18122, 16584,  7239,  -993,  7239,
   18726,   487,   364, 18726,   487,  -993,   371, 10428,   138, 10428,
   18122,    51, 15616,  6903,  -993, 10428, 18122,    61, 15304,  -993,
     543,   563,   545, 16697,   563,   546,   673, 16737,  4203, 15696,
     648,  -993,   198,  -993,  -993,  -993,  -993,  -993,  -993,   225,
     159,  -993, 14084,  -993,   432,   548,  2614,    94,   239,   250,
   10428, 10428,  6062,  -993,  -993,   614,  7406,  -993, 18122,  -993,
   16777, 16890,  -993,  -993, 18122,   547,     8,   554,  -993,  2155,
    -993,  -993,   384, 18726,  -993,  -993,  -993,  -993,  -993,  -993,
    -993,  4203,    74, 15772,  -993,  -993, 18122,  4203, 18122,  -993,
   16931,  -993,  -993,  -993, 10428,  -993,   107,   123, 10428,  -993,
    9587, 10929, 10428,   570,  2301,   558,   605,   246,  -993,   641,
    -993,  -993,  -993,  -993, 13063,   564,  -993,  -993,  -993,  -993,
    -993,  -993,  -993,  -993,  -993,  -993,  6903,  -993,    40,  8750,
    8750, 10428,   698, 16971, 10428,   700, 17117,   565, 17157,    -1,
      -1,  -993,  -993,  -993,  -993,   487,   571,  -993,   487,   575,
    -993, 15384,  -993, 14344,  4710,  -993,  4879,  -993,   224,  -993,
   14424,  5048,  -993,    -1,  5217,  -993,    -1, 10428,  -993, 10428,
    -993,  4203, 10428,  -993,  4203,   706, 18726,  -993,  -993, 18726,
     572,  -993,  2614,   602,   659,  -993,  -993,  -993,    50,  -993,
    -993,   542,   576,    58,  -993,  -993,   581,   584,  -993,  5386,
    9086,  -993,  -993,  -993, 18726,  -993,   612,   373,  -993,  -993,
    5555,   587,  5724,   595,  -993, 10428,  -993,  -993, 10428, 17197,
     199, 15862,   594,   607,   604,  1275,  -993, 10428, 18726,  -993,
    -993,   432,   616,   229,  -993,   635,  -993,   638,   644,   649,
     647,   650,  -993,   654,   663,   657,   662,   666,   310,   667,
     671,   676,  -993,  -993, 18726,  -993,  -993,  -993,  -993,  -993,
    -993,  -993,  -993,  -993,  -993,  -993,  -993,  -993,  -993,  -993,
    -993,  -993,  -993,  -993, 10428,  -993,   689,   690,   683,   616,
     616,  -993,  -993,  -993,   542,   228,   236, 17310, 11764, 11931,
   17350, 12098, 12265, 12432, 12599,  -993,  -993,   668,  -993,   669,
    -993,  -993,  4203, 10428, 18122, 10428, 18122,  6903,  -993,  4203,
   10428, 18122,  -993, 10428, 18122,  -993, 17390, 18122,  -993, 18122,
     792,  4203,   681,   602,  -993,   660,  9756,   289,  -993,   180,
    -993,  -993,  8750, 13821,  7239,  7239,  4203,  -993,    27,   674,
   10428,  -993, 10428,  -993, 18122,  4203, 10428,  -993, 18122,  4203,
   18122,   269,  9923, 10929, 10428, 10929, 10428,  -993,  -993,  -993,
    -993,   988,  -993, 14191,  -993, 18122,  -993,    42,   532,  -993,
    -993, 17503,  -993, 14186,  -993,  -993,  -993, 10428, 10428, 10428,
   10428, 10428, 10428, 10428, 10428,  -993, 18259,  -993, 18372, 16737,
   14500, 14580,  -993, 16737, 14656, 14736, 10428,  4203,  -993,  -993,
     542,   602,  8583,  -993,  -993,  -993,   153,  9086,  -993,  -993,
     145, 10428,    -7, 17543,  -993,   719,   677,   679,   442,  -993,
     373, 18122, 14812,  -993, 14892,  -993,  -993,  -993, 18122,   684,
     688,   691,   692,  -993,  -993, 12766,   749,   257,  -993,   718,
     720,   616,   616, 17656, 17696, 17736, 17849, 17889, 17929, 18390,
    -993, 18442,  -993,  4203,  4203,  4203,  4203, 18122,  -993,  -993,
     289, 10092,    88,  -993, 18122,  -993,   124,  -993,   -20,  -993,
     506, 18042,  -993,  -993,  -993, 12599,   695,   699,  -993,  4203,
    4203,  -993,  -993,  -993,  -993,  5893,  -993,  -993,   315,  -993,
     180,  -993,  -993,  -993, 10428, 10428, 10428, 10428, 10428, 10428,
    -993,  -993, 16737, 16737, 16737, 16737,  -993,  -993,  -993,  -993,
    -993,   296,  8750, 13391,  -993, 10428,   145,   124,   124,   124,
     124,   124,   124,   145,   950,  -993,  -993, 16737, 16737,   687,
   12933,    89,   -26, 18082,  -993,  -993, 18122,  -993,  -993,  -993,
    -993,  -993,  -993,  -993,   721,  -993,  -993,   342, 13557,  -993,
    -993,  -993, 10261,  -993,   453,  -993
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,     0,   111,   586,   587,   588,   589,
     590,   591,     0,   510,    97,   132,   479,   139,   481,   510,
       0,   138,     0,   384,    97,     0,     0,     0,     0,   133,
     558,   558,   583,     0,     0,     0,     0,   137,    53,     0,
     260,   134,     0,   256,     0,     0,   141,     0,   529,   501,
     592,   142,     0,   261,   473,   383,     0,     0,     0,   155,
      46,   136,   482,   385,     0,     0,     0,     0,   477,     0,
       0,   140,     0,     0,   112,     0,   584,     0,     0,     0,
     135,   242,   475,   387,   143,     0,     0,   641,     0,   643,
       0,   644,   645,   557,     0,   642,   639,   460,   152,   640,
       0,     0,     0,     0,     4,     0,     5,     0,     9,    48,
      10,    11,     0,    12,    13,    14,    16,   456,   457,    24,
      15,   153,   162,   163,    17,    19,    18,    21,    22,    23,
      20,   161,     0,   159,     0,   547,     0,   157,   160,     0,
     158,   563,   543,   458,   544,   463,   461,     0,     0,     0,
     548,   549,     0,   462,     0,   564,   565,   566,   585,   542,
     465,   464,   545,   546,     0,    40,    26,   471,     0,     0,
     511,    98,     0,     0,   481,   133,     0,     0,     0,   482,
       0,     0,     0,   547,   563,   461,   548,   549,   480,   462,
     564,   565,     0,   510,     0,     0,   386,     0,   216,     0,
     441,     0,   448,   589,   482,   559,   259,   589,   180,   482,
       0,   259,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,    50,   448,   105,   113,   125,   119,   118,   127,
     108,   117,   128,   114,   129,   106,   130,   123,   116,   124,
     122,   120,   121,   107,   109,   115,   126,   131,     0,   110,
       0,     0,     0,     0,   390,     0,   149,    34,     0,   626,
     533,   530,   531,   532,     0,   474,   627,     7,   448,   259,
     240,   250,   558,   241,   154,   355,   460,   438,     0,   437,
       0,     0,   150,   562,     0,     0,    37,     0,   478,   466,
       0,   448,    38,   472,     0,   223,   219,     0,   462,   223,
     220,     0,   380,     0,   476,     0,     0,   628,   630,   555,
     625,   624,     0,    55,    58,     0,     0,   443,     0,   445,
       0,     0,   444,     0,     0,   437,     0,   556,     0,     6,
       0,    49,     0,     0,     0,   243,     0,   341,   340,   262,
       0,   459,    25,     0,   534,     0,     0,     0,     0,     0,
       0,   629,     0,     0,     0,     0,     0,     0,   554,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   300,   307,   308,   309,   304,
     306,     0,     0,   302,   305,   303,   301,     0,   311,   310,
       0,     0,   448,   448,     0,     0,     0,    27,    28,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,    30,
       0,    31,     0,   456,   454,     0,   449,   450,   455,   174,
       0,   177,     0,   170,     0,     0,   176,     0,     0,     0,
     189,     0,     0,   188,     0,   197,     0,     0,     0,   195,
       0,     0,    70,   164,     0,   300,   209,     0,    52,    51,
      48,     0,    32,   323,   257,   394,     0,   395,   397,     0,
     419,     0,   400,     0,     0,   148,    33,     0,     0,    35,
       0,   156,   354,     0,    90,   560,   561,   151,     0,    36,
     448,     0,   230,   221,   217,   222,   218,     0,   378,   375,
     182,    39,    57,    56,    59,     0,   593,     0,     0,   579,
       0,   581,     0,     0,     0,     0,     0,     0,     0,     0,
     597,     8,     0,    42,     0,     0,    88,     0,    85,     0,
      64,     0,     0,     0,   334,   389,   509,   621,   620,   623,
     632,   631,   636,   635,   617,   614,   615,   616,   551,   604,
       0,   576,   577,   575,   574,   552,   608,   619,   613,   611,
     622,   612,   610,   602,   607,   609,   618,   601,   605,   606,
     603,   553,     0,     0,     0,     0,     0,     0,     0,     0,
     634,   633,   638,   637,   521,   522,   524,   526,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   595,
     510,   510,   185,   376,   388,   442,     0,     0,   468,     0,
       0,   243,     0,     0,   243,   377,     0,     0,     0,     0,
     485,     0,     0,     0,   198,     0,   491,     0,     0,   196,
     640,    73,     0,    60,    71,     0,   208,     0,     0,     0,
       0,   467,   328,   325,   326,   327,   331,   332,   333,   323,
       0,   316,     0,   324,   342,     0,   398,     0,   146,   147,
     145,   144,     0,   418,   417,   543,     0,   392,   541,   391,
       0,     0,   573,   440,   439,     0,     0,     0,   469,     0,
     224,   382,   543,     0,   594,   550,   580,   446,   582,   447,
     205,     0,     0,     0,   596,   203,   495,     0,   599,   598,
       0,    44,    43,    41,     0,    84,     0,     0,     0,    77,
       0,     0,    70,   244,     0,     0,   254,     0,   251,   338,
     335,   336,   339,   263,     0,     0,    96,    94,    95,    93,
      92,    91,   571,   572,   523,   525,     0,   512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   452,   453,   451,   243,     0,   179,   243,     0,
     178,     0,   207,     0,     0,   187,     0,   186,     0,   516,
       0,     0,   193,     0,     0,   191,     0,     0,   165,     0,
     166,     0,     0,   211,     0,   213,     0,   329,   330,     0,
     323,   314,     0,   432,   343,   346,   345,   347,     0,   396,
     399,   400,     0,     0,   401,   402,   539,   540,   232,     0,
       0,   231,   234,   470,     0,   225,   228,     0,   379,   206,
       0,     0,     0,     0,   204,     0,    89,    86,     0,    67,
      66,    65,     0,     0,     0,   259,   249,     0,   252,   248,
     337,   342,   312,    99,   295,   113,   293,   119,   118,   102,
     117,   114,   298,   129,   100,   130,   116,   120,   101,   103,
     115,   131,   292,   274,   277,   275,   276,   287,   278,   291,
     283,   281,   294,   297,   282,   280,   285,   290,   279,   284,
     288,   289,   286,   296,     0,   272,     0,   104,     0,   312,
     312,   270,   578,   514,   400,   563,   563,     0,     0,     0,
       0,     0,     0,     0,     0,   184,   183,     0,   245,     0,
     245,   190,     0,     0,   484,     0,   483,     0,   515,     0,
       0,   490,   194,     0,   489,   192,    62,    61,   210,   500,
     212,     0,     0,   432,   317,     0,     0,   400,   344,   359,
     393,   423,     0,   595,   448,   448,     0,   236,     0,     0,
       0,   226,     0,   201,   497,     0,     0,   199,   496,     0,
     600,     0,     0,     0,    70,     0,    70,    78,    81,   239,
     155,   259,   238,   259,   246,   255,   253,     0,   323,   269,
     273,     0,   299,     0,   265,   266,   518,     0,     0,     0,
       0,     0,     0,     0,     0,   245,   259,   245,   259,   488,
       0,     0,   517,   494,     0,     0,     0,     0,   215,    54,
     400,   432,     0,   435,   434,   436,   543,   356,   320,   318,
       0,     0,     0,     0,   421,   543,     0,     0,   237,   235,
       0,   229,     0,   202,     0,   200,    87,    69,    68,     0,
       0,     0,     0,   247,   414,     0,   348,     0,   271,    99,
     101,   312,   312,     0,     0,     0,     0,     0,     0,   259,
     173,   259,   169,     0,     0,     0,     0,    63,   214,   319,
     400,   424,     0,   358,   357,   373,     0,   374,   361,   364,
       0,   360,   352,   353,   258,     0,   535,   536,   227,     0,
       0,    80,    83,    79,    82,     0,   413,   412,   543,   349,
     359,   313,   267,   268,     0,     0,     0,     0,     0,     0,
     175,   171,   487,   486,   493,   492,   322,   321,   426,   427,
     429,   543,     0,   595,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   543,   537,   538,   499,   498,     0,
     404,     0,     0,     0,   428,   430,   363,   365,   366,   369,
     370,   371,   367,   368,   362,   409,   407,   543,   595,   350,
     264,   351,   424,   408,   543,   431
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -993,  -993,  -993,     1,  -338,  1794,  -993,  -993,  -993,   410,
    -993,  -993,  -993,   173,   528,  -422,  -993,  -668,  -664,  -993,
    -993,  -993,   169,  -993,  -993,   171,   840,  -993,  2018,  -197,
    -689,  -993,  -877,   788,  -980,  -786,  -993,   -59,  -993,  -993,
    -993,  -993,  -993,  -993,  -993,  -993,    90,  -993,  -993,  -993,
     566,  -993,    62,  -993,  -993,  -993,  -993,  -993,  -993,  -529,
    -662,  -993,  -993,  -993,    39,   935,  -993,  -993,  -993,  -105,
    -993,  -993,  -993,  -993,  -104,  -151,  -833,  -993,  -100,    91,
     231,  -993,  -993,  -993,    43,  -993,  -993,  -260,   626,  -187,
    -215,  -239,  -231,  -452,  -993,  -183,  -993,     6,   852,  -109,
     435,  -993,  -443,  -753,  -884,  -993,  -583,  -480,  -967,  -992,
    -825,   -52,  -993,    68,  -993,  -206,  -993,   293,   515,  -451,
    -993,  -993,  -993,   951,  -993,   -10,  -993,  -993,  -211,  -993,
    -597,  -993,  -993,  -993,  1154,  1371,   -12,   858,    31,   734,
    -993,  1590,  1754,  -993,  -993,  -993,  -993,  -993,  -993,  -993,
    -993,  -381
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   314,   105,   626,   107,   108,   109,   332,
     450,   110,   222,   111,   315,   621,   519,   625,   622,   112,
     113,   114,   516,   517,   115,   116,   172,   875,   252,   117,
     249,   118,   653,   257,   119,   120,   269,   121,   122,   123,
     424,   603,   420,   600,   124,   125,   737,   126,   127,   128,
     483,   670,   807,   129,   130,   666,   802,   131,   132,   522,
     825,   133,   134,   707,   708,   183,   250,   644,   136,   137,
     524,   831,   713,   878,   879,   447,   969,   454,   640,   641,
     642,   643,   714,   339,   788,  1090,  1150,  1074,   277,  1008,
    1012,  1068,  1069,  1070,   138,   303,   488,   139,   140,   253,
     254,   458,   459,   657,  1087,  1036,   462,   654,  1109,  1005,
     927,   316,   199,   320,   321,   415,   416,   417,   184,   142,
     143,   144,   145,   185,   147,   169,   170,   578,   436,   758,
     579,   580,   148,   149,   186,   187,   152,   211,   418,   189,
     154,   190,   191,   157,   158,   159,   326,   160,   161,   162,
     163,   164
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     167,   274,   391,   104,   188,   413,   440,   671,   193,   192,
     655,   407,   278,   645,   200,   582,   759,   451,   205,   205,
     624,   215,   217,   220,   221,   877,   413,   425,   195,   665,
     340,   255,  1073,   258,   823,   259,   672,   822,   930,   964,
     264,   460,   265,  1034,   266,   333,   974,   975,   504,  1003,
     324,   460,   279,   283,   285,   287,   288,   289,   509,   255,
      65,   293,   470,   294,   791,   297,   301,   255,    23,  1110,
     304,   413,   746,   305,   306,   749,   307,   799,   308,    65,
     724,   309,   310,   754,   311,   481,   408,   510,   279,   283,
     325,   327,  1115,   761,   413,   460,   284,  -233,  1000,  -410,
     588,   421,  -506,   463,   932,   165,   426,  -415,   334,  -570,
       5,  -570,   503,   507,    55,   639,   434,   434,   725,   800,
    1116,  1135,     3,   214,   216,    63,     5,  1065,  -410,   883,
     402,   976,   322,  1149,  1112,   588,  -415,   344,   403,  -233,
    -415,  -410,   505,   540,   194,   884,  1134,   391,  1065,   434,
      83,   498,  1073,   392,  -410,   393,   541,   403,  1086,  -415,
     544,   167,  -415,   403,   399,   400,   401,   473,   293,   279,
     325,   506,   502,   801,  1009,   434,  1060,  1033,   499,   461,
    -415,  1035,   542,   406,    23,  1155,   568,   569,   434,   461,
     283,   403,   323,  -233,   505,   413,   413,   464,   505,   403,
     964,  -410,   964,   790,    74,   929,  -410,  -415,  1092,  1093,
     471,   283,   422,  -415,  -415,   403,   897,   427,   256,   899,
      74,  1067,   260,   589,   195,   403,   543,   933,   505,   505,
      55,  1066,   582,   461,  -415,   953,   986,  1010,   988,   709,
     256,    63,  1067,   810,   777,   495,  1146,  1059,   296,   300,
     295,   299,   632,  -415,   500,   165,   283,  1113,  1148,   448,
     205,   492,   449,   964,  1153,   964,    83,   954,   475,   476,
     496,   633,  -433,     5,   667,   634,   261,   726,   473,   283,
     624,   501,   778,   413,   877,   710,  1030,   818,  1032,  1029,
     540,  1031,  1011,  -433,   262,   635,   711,  -433,   636,   780,
     328,   337,   165,   541,   727,   752,   497,  1107,   691,   637,
     992,   263,  -570,   602,  -570,   712,   494,  -567,   606,  -567,
    -433,   518,   520,  1049,   351,  1051,   781,   338,   638,   542,
     168,   526,   357,   527,   528,   529,   531,   533,   534,   925,
     535,   536,   537,   538,   539,   582,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,  -105,   907,   404,   410,    74,  -520,   283,
     283,  -111,  -411,   543,   196,   283,  -519,   608,   283,   283,
     283,   283,   571,   573,   581,   411,   828,   256,   256,   256,
     256,   908,   171,   591,   446,  -520,   951,   780,   595,  -403,
     596,  -411,   413,  -519,   473,   202,   763,   766,   656,   767,
     347,   829,   563,   564,  -411,  -425,   223,   279,   565,   610,
     612,   566,   567,   474,  1091,   616,   618,  -411,  -403,   623,
     623,   256,   627,  1007,  1026,   629,  -425,   256,   530,   532,
    -425,  -403,   639,   394,  -107,   464,   347,   395,   464,   267,
     268,   658,  -112,  1014,  -403,   660,   661,   694,   698,   784,
     256,   664,   348,  -425,   525,   291,   349,   594,   283,   703,
     290,   811,   813,   -76,  -411,  1006,   695,   699,   256,  -411,
     330,   331,  1015,   664,   570,   572,   283,   963,   283,   -47,
     808,  -503,   683,   664,   686,   590,   688,   690,   348,   817,
     544,  -403,   349,   341,   464,   785,  -403,   -47,   730,   279,
    -405,   464,   395,   351,  -502,   494,   786,   141,   355,   343,
     356,   357,   611,   747,  -381,   360,   582,   141,   617,   322,
     750,   322,   624,   367,   624,   787,   -76,   403,   396,  -405,
     141,   373,   141,  -381,  -569,   342,  -569,    23,   351,   351,
    -507,  -508,  -405,   355,   355,   412,   357,   357,  -505,   632,
     360,   360,  -568,   880,  -568,  -405,   677,  -504,   679,    40,
     398,   610,   733,   616,   736,   627,   738,   686,   633,   256,
     739,   740,   634,   409,  1088,   283,   419,   283,   141,   423,
     477,    53,   429,    55,   682,   751,   453,   753,   487,   632,
     793,   581,   635,   760,    63,   636,   467,    57,   489,   256,
    1111,   468,  -405,   256,  1114,   141,   637,  -405,   633,   511,
     141,   480,   634,   515,  1124,  1117,   521,   523,   743,    83,
     639,   357,   562,   593,   598,   638,   597,   599,   289,   293,
     325,   605,   635,   607,   283,   636,   613,    57,   963,   628,
     963,  1118,   631,  1119,  1120,   647,   637,  1121,  1122,   646,
    -416,   656,  1111,   662,   347,  1138,  1139,  1140,  1141,  1142,
    1143,  -416,  -315,   669,   732,   638,   735,   668,   673,  1147,
     681,   687,   518,   716,   141,   704,   819,   795,   821,   623,
     623,   715,   717,   718,   719,   720,   721,  1154,   722,  -315,
    -416,  1111,   -72,   767,   768,   770,   347,   771,   723,   776,
     473,   963,   798,   963,   581,   789,   348,   531,   571,   887,
     349,   803,   890,   826,   827,   830,  -416,   319,  1016,  1017,
     888,   882,   891,  -416,   893,   898,   153,   413,   413,   900,
     921,   926,   904,   928,   906,   931,   153,   934,   938,   911,
     935,   940,   914,   957,  -416,   916,   945,   917,   348,   153,
     919,   153,   349,   141,   949,  -420,   958,   351,   352,   959,
     141,   354,   355,  -416,   356,   357,  -420,  -132,  -416,   360,
    -139,  -416,   968,  -108,   256,   256,  -138,   367,   279,  -137,
     256,   256,  -134,   371,   372,   373,  -141,  -106,   944,  -142,
     948,  -109,   775,   950,  -136,  -420,   623,   153,  -140,   351,
     352,   298,   298,  -135,   355,   965,   356,   357,  -143,   530,
     570,   360,  1042,   972,  -110,   973,   997,  1001,   414,   367,
     141,  -420,   985,   987,   153,   371,   372,   373,  -420,   153,
     999,  1020,   805,  1081,  1076,   141,  1077,  1082,  1089,   414,
    1083,  1084,  -105,  1125,  -107,   286,  1145,  1126,   514,  -420,
     630,  1116,   971,   816,   197,   485,   939,   966,  1037,  1041,
     779,   924,  1151,  1106,   967,  1132,   904,   906,  -420,   911,
     914,   944,   948,  -420,  1144,  1137,  -420,   219,   206,     0,
     989,   990,   744,   991,   414,   581,     0,   993,   994,   659,
       0,   995,   274,   153,     0,     0,     0,     0,     0,     0,
       0,     0,   256,   256,     0,     0,     0,   414,   141,     0,
    1013,   686,   283,   283,   256,     0,   446,     0,  1021,     0,
    1022,     0,     0,   446,  1024,     0,   256,   135,     0,   256,
    1028,   623,   623,   623,   623,     0,   141,   135,     0,     0,
    1062,     0,   141,   146,     0,     0,     0,     0,     0,   141,
     135,     0,   135,   146,     0,   989,  1043,  1044,   993,  1045,
    1046,  1047,  1048,     0,     0,     0,   146,     0,   146,     0,
     941,     0,   153,     0,  1057,     0,     0,     0,     0,   153,
     325,     0,     0,     0,     0,  1064,  -422,     0,     0,  1071,
       0,     0,   430,   433,   435,   439,     0,  -422,   135,     0,
     270,     0,     0,     0,    22,    23,     0,   141,   414,   414,
       0,   141,     0,   271,   146,    30,   272,     0,     0,   141,
      35,     0,     0,  1131,     0,   135,  -422,    40,     0,     0,
     135,  1102,  1103,  1104,  1105,     0,   466,     0,     0,   153,
       0,   146,   469,     0,     0,     0,   146,     0,     0,    53,
       0,    55,  -422,   948,   153,     0,     0,  1127,  1128,  -422,
     273,     0,    63,   325,     0,   479,     0,     0,     0,     0,
       0,     0,  1102,  1103,  1104,  1105,  1127,  1128,     0,     0,
    -422,    79,     0,   490,    81,   728,     0,    83,     0,   663,
    1133,   686,     0,  1136,   135,     0,   414,     0,     0,  -422,
       0,   256,     0,     5,  -422,     0,     0,  -422,     0,     0,
     146,   663,     0,     0,   319,     0,   319,    15,     0,     0,
      17,   663,     0,     0,     0,    21,   686,   153,     0,     0,
     948,     0,     0,   141,     0,   175,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,   150,     0,     0,     0,
       0,    41,     0,   446,   446,   153,   150,   446,   446,    46,
       0,   153,     0,     0,     0,     0,    51,     0,   153,   150,
       0,   150,     0,   135,     0,  1072,     0,     0,     0,     0,
     135,    61,     0,  1078,   592,   446,   141,   446,     0,   146,
       0,     0,   141,    71,     0,     0,   146,    74,     0,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
      84,     0,     0,   742,   614,   414,     0,   150,   619,   881,
       0,     0,     0,     0,     0,     0,   153,     0,     0,     0,
     153,     0,     0,     0,   885,   886,     0,   270,   153,     0,
     135,    22,    23,     0,   150,     0,     0,     0,     0,   150,
     271,     0,    30,   272,     0,   135,   146,    35,     0,   141,
     -75,   141,     0,     0,    40,     0,   141,  -259,     0,   141,
       0,   146,     0,     0,     0,     0,   141,     0,     0,   141,
       0,     0,     0,     0,     0,     0,    53,   270,    55,     0,
       0,    22,    23,  -259,     0,  1072,     0,   273,     0,    63,
     271,     0,    30,   272,   141,     0,     0,    35,     0,     0,
       0,     0,     0,   150,    40,   141,     0,   141,    79,     0,
       0,    81,     0,   -75,    83,     0,     0,     0,   135,     0,
       0,     0,     0,     0,     0,     0,    53,     0,    55,     0,
      57,     0,   960,     0,   146,   961,     0,   273,     0,    63,
       0,     0,   153,     0,     0,     0,   135,     0,     0,     0,
       0,   347,   135,   151,     0,     0,     0,     0,    79,   135,
       0,    81,   146,   151,    83,     0,     0,     0,   146,     0,
       0,     0,     0,     0,     0,   146,   151,     0,   151,   755,
     757,     0,   150,     0,     0,   762,   765,   347,     0,   150,
       0,     0,     0,     0,     0,   153,     0,   141,     0,     0,
       0,   153,     0,   348,   141,     0,     0,   349,     0,     0,
       0,     0,     0,     0,    98,     0,   141,   135,     0,     0,
     962,   135,     0,     0,   151,     0,     0,     0,     0,   135,
       0,   141,     0,   146,     0,     0,     0,   146,     0,   348,
     141,     0,     0,   349,   141,   146,     0,     0,     0,   150,
       0,   151,     0,     0,   351,   352,   151,   353,   354,   355,
       0,   356,   357,   358,   150,     0,   360,     0,   153,     0,
     153,     0,     0,   366,   367,   153,     0,   370,   153,     0,
     371,   372,   373,     0,     0,   153,     0,     0,   153,     0,
     351,   374,   141,     0,     0,   355,     0,   356,   357,     0,
       0,     0,   360,     0,     0,     0,     0,   895,   896,     0,
     367,     0,     0,   153,     0,     0,   371,   372,   373,   901,
     151,     0,     0,     0,   153,     0,   153,     0,     0,     0,
       0,   912,  1004,     0,   915,     0,     0,   150,     0,     0,
     414,   414,     0,   135,     0,     0,     0,     0,   141,   141,
     141,   141,     0,     0,     0,     0,     0,     0,     0,   146,
       0,     0,     0,     0,     0,   150,     0,     0,     0,     0,
       0,   150,   155,     0,   141,   141,     0,     0,   150,     0,
       0,     0,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,   155,   135,   155,     0,   151,
       0,     0,   135,     0,     0,     0,   151,     0,     0,     0,
       0,     0,   146,  1063,     0,     0,   153,     0,   146,     0,
       0,     0,     0,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,   150,     0,     0,     0,
     150,     0,     0,   155,     0,   348,     0,     0,   150,   349,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     0,   153,     0,     0,   151,  1108,     0,   135,
     155,   135,     0,     0,     0,   155,   135,     0,     0,   135,
       0,   151,     0,     0,     0,   146,   135,   146,     0,   135,
       0,     0,   146,     0,     0,   146,   351,   352,     0,   353,
     354,   355,   146,   356,   357,   146,  1019,     0,   360,     0,
       0,   153,     0,     0,   135,     0,   367,     0,     0,  1108,
       0,     0,   371,   372,   373,   135,     0,   135,     0,     0,
     146,     0,     0,     0,     0,     0,   156,     0,     0,   155,
       0,   146,     0,   146,     0,     0,   156,     0,     0,     0,
       0,     0,     0,     0,   151,     0,     0,     0,  1108,   156,
       0,   156,   150,     0,     0,     0,     0,   153,   153,   153,
     153,     0,     0,     0,     0,     0,   106,     0,     0,     0,
       0,     0,   151,     0,     0,     0,   166,     0,   151,     0,
       0,     0,     0,   153,   153,   151,     0,     0,     0,   198,
       0,   201,     0,     0,     0,     0,     0,   156,     0,     0,
       0,     0,     0,     0,     0,   150,     0,   135,   155,   347,
       0,   150,     0,     0,   135,   155,     0,     0,     0,     0,
       0,     0,     0,   146,   156,     0,   135,     0,     0,   156,
     146,     0,     0,     0,     0,     0,     0,   292,     0,     0,
       0,   135,   146,   151,     0,     0,     0,   151,     0,     0,
     135,     0,     0,     0,   135,   151,     0,   146,     0,     0,
       0,   348,     0,     0,   106,   349,   146,     0,     0,   329,
     146,     0,     0,     0,     0,   155,     0,     0,   150,     0,
     150,     0,     0,     0,     0,   150,     0,     0,   150,     0,
     155,     0,     0,   156,     0,   150,     0,     0,   150,     0,
       0,     0,   135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,   146,   356,
     357,   358,     0,   150,   360,   361,   362,     0,     0,   364,
     365,   366,   367,   397,   150,   370,   150,     0,   371,   372,
     373,     0,     0,     0,     0,     0,     0,     0,     0,   374,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   135,
     135,   135,     0,   155,     0,     0,     0,     0,     0,   151,
       0,     0,   156,     0,   146,   146,   146,   146,     0,   156,
       0,     0,     0,     0,   135,   135,     0,     0,     0,     0,
       0,   155,     0,     0,     0,     0,     0,   155,     0,     0,
     146,   146,     0,   347,   155,     0,     0,     0,     0,     0,
       0,     0,   452,     0,     0,     0,     0,     0,     0,   465,
       0,     0,   151,     0,     0,     0,   150,     0,   151,     0,
     248,     0,     0,   150,     0,     0,     0,     0,     0,   156,
       0,     0,     0,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,     0,   156,   348,     0,     0,     0,   349,
     150,     0,   155,     0,     0,     0,   155,   302,     0,   150,
       0,     0,     0,   150,   155,     0,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   151,     0,   151,     0,     0,
       0,     0,   151,     0,     0,   151,   351,   352,     0,   353,
     354,   355,   151,   356,   357,   151,     0,     0,   360,     0,
     335,   150,   336,     0,     0,   366,   367,   156,   224,   370,
       0,     0,   371,   372,   373,     0,     0,     0,     0,     0,
     151,     0,   225,   226,     0,   227,     0,     0,     0,     0,
     228,   151,     0,   151,     0,   156,     0,     0,   229,     0,
       0,   156,     0,     0,   230,     0,     0,   106,   156,   231,
       0,     0,     0,   232,     0,     0,   233,   150,   150,   150,
     150,     0,   302,     0,   234,     0,     0,     0,   155,     0,
     235,   236,     0,     0,     0,   465,     0,   237,   302,     0,
     428,   465,     0,   150,   150,     0,   238,     0,     0,     0,
       0,     0,     0,     0,     0,   239,   240,     0,   241,     0,
     242,     0,   243,     0,     0,   244,   156,     0,     0,   245,
     156,     0,   246,     0,     0,   247,     0,     0,   156,   457,
       0,   155,     0,   151,     0,     0,     0,   155,     0,     0,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   151,     0,   472,     0,   680,     0,     0,     0,
     685,     0,   824,     0,     0,     0,     0,   151,   106,     0,
       0,     0,     0,     0,     0,     0,   151,     0,     0,   403,
     151,   804,     0,  -245,     0,     0,     0,  -245,  -245,     0,
       0,     0,     0,     0,     0,     0,  -245,     0,  -245,  -245,
       0,     0,     0,  -245,   155,     0,   155,     0,     0,     0,
    -245,   155,     0,  -245,   155,     0,     0,     0,     0,     0,
       0,   155,     0,     0,   155,     0,     0,     0,   151,     0,
       0,     0,  -245,     0,  -245,     0,  -245,     0,  -245,  -245,
       0,  -245,   156,  -245,     0,  -245,     0,     0,     0,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,   155,     0,  -245,     0,     0,  -245,     0,     0,
    -245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   773,     0,   151,   151,   151,   151,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,   601,     0,
       0,   156,   604,     0,     0,     0,     0,     0,     0,     0,
     151,   151,     0,     0,     0,     0,     0,     0,     0,     0,
    -245,     0,     0,     0,     0,     0,  -245,     0,   347,     0,
       0,     0,     0,     0,   457,   809,     0,     0,     0,     0,
       0,   814,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   155,     0,     0,     0,     0,     0,     0,   155,
       0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
     156,   155,     0,     0,     0,   156,     0,     0,   156,     0,
     348,     0,     0,     0,   349,   156,   155,     0,   156,     0,
       0,     0,     0,   693,     0,   155,     0,     0,     0,   155,
       0,   706,     0,     0,     0,     0,     0,     0,   465,     0,
     465,     0,     0,   156,     0,   465,     0,     0,   465,     0,
       0,     0,     0,     0,   156,   918,   156,     0,   920,     0,
       0,   351,   352,     0,   353,   354,   355,     0,   356,   357,
     358,     0,   359,   360,   361,   362,     0,   155,   364,   365,
     366,   367,   368,   937,   370,     0,     0,   371,   372,   373,
       0,     0,     0,     0,   943,     0,   947,     0,   374,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   745,     0,
       0,   748,     0,   345,     0,     0,     0,     0,     0,     0,
     346,   225,   226,     0,   227,     0,     0,     0,     0,   228,
       0,     0,   347,   155,   155,   155,   155,   229,     0,     0,
       0,     0,     0,   230,     0,     0,   156,   405,   231,     0,
     783,     0,   232,   156,   457,   233,     0,     0,     0,   155,
     155,     0,     0,   234,     0,   156,     0,     0,     0,   235,
     236,     0,     0,     0,     0,     0,   237,   806,     0,     0,
     156,   302,     0,     0,   348,   238,     0,     0,   349,   156,
       0,     0,     0,   156,   239,   240,     0,   241,     0,   242,
       0,   243,     0,     0,   244,   998,     0,     0,   245,   455,
       0,   246,     0,     0,   247,   168,     0,     0,     0,   350,
    1018,     0,   876,     0,     0,     0,     0,     0,     0,  1023,
       0,     0,     0,  1025,     0,   351,   352,     0,   353,   354,
     355,   156,   356,   357,   358,     0,   359,   360,   361,   362,
     363,     0,   364,   365,   366,   367,   368,   369,   370,     0,
       0,   371,   372,   373,     0,     0,     0,     0,     0,     0,
     456,     0,   374,     0,     0,     0,     0,     0,     0,     0,
       0,  1058,     0,     0,   922,     0,     0,   923,     0,     0,
     457,     0,     0,     0,     0,     0,     0,   156,   156,   156,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   806,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   706,     0,     0,     0,
       0,    -2,     4,     0,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,   970,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,     0,    29,     0,    30,    31,
      32,    33,    34,    35,    36,    37,   -74,     0,    38,    39,
      40,     0,    41,  -259,     0,    42,    43,    44,     0,    45,
      46,    47,   -45,    48,    49,     0,    50,    51,    52,     0,
       0,     0,    53,    54,    55,    56,    57,    58,    59,  -259,
     -45,    60,    61,    62,     0,    63,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
       0,    76,    77,    78,    79,    80,     0,    81,    82,   -74,
      83,    84,     0,     0,    85,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,   876,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
      98,     0,     0,    99,     0,   100,     0,   101,     0,   102,
       0,     4,   103,     5,     0,     6,     7,     8,     9,    10,
      11,     0,  -595,     0,    12,    13,    14,    15,    16,  -595,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,  -595,    27,    28,  -595,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,   -74,     0,    38,    39,    40,
       0,    41,  -259,     0,    42,    43,    44,     0,    45,    46,
      47,   -45,    48,    49,     0,    50,    51,    52,     0,     0,
       0,    53,    54,    55,    56,     0,    58,    59,  -259,   -45,
      60,    61,    62,  -595,    63,    64,    65,  -595,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,     0,
      76,    77,    78,    79,    80,     0,    81,    82,   -74,    83,
      84,     0,     0,    85,     0,    86,     0,     0,  -595,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -595,  -595,    90,  -595,  -595,  -595,
    -595,  -595,  -595,  -595,     0,  -595,  -595,  -595,  -595,  -595,
       0,  -595,  -595,  -595,  -595,  -595,  -595,  -595,  -595,    98,
    -595,  -595,  -595,     0,   100,  -595,   101,     0,   102,     0,
     312,  -595,     5,   275,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    12,    13,    14,    15,    16,     0,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,   -74,     0,    38,    39,    40,     0,
      41,  -259,     0,    42,    43,    44,     0,    45,    46,    47,
     -45,    48,    49,     0,    50,    51,    52,     0,     0,     0,
      53,    54,    55,    56,    57,    58,    59,  -259,   -45,    60,
      61,    62,     0,    63,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,     0,    76,
      77,    78,    79,    80,     0,    81,    82,   -74,    83,    84,
       0,     0,    85,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,   276,    98,     0,
       0,    99,     0,   100,   313,   101,     0,   102,     0,     4,
     103,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,   -74,     0,    38,    39,    40,     0,    41,
    -259,     0,    42,    43,    44,     0,    45,    46,    47,   -45,
      48,    49,     0,    50,    51,    52,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,  -259,   -45,    60,    61,
      62,     0,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,    75,     0,    76,    77,
      78,    79,    80,     0,    81,    82,   -74,    83,    84,     0,
       0,    85,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,    97,    98,     0,     0,
      99,     0,   100,   493,   101,     0,   102,     0,   512,   103,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,     0,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,   -74,     0,    38,    39,    40,     0,    41,  -259,
       0,    42,    43,    44,     0,    45,    46,    47,   -45,    48,
      49,     0,    50,    51,    52,     0,     0,     0,    53,    54,
      55,    56,    57,    58,    59,  -259,   -45,    60,    61,    62,
       0,    63,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,     0,    76,    77,    78,
      79,    80,     0,    81,    82,   -74,    83,    84,     0,     0,
      85,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,    98,     0,     0,    99,
       0,   100,   513,   101,     0,   102,     0,   312,   103,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,   -74,     0,    38,    39,    40,     0,    41,  -259,     0,
      42,    43,    44,     0,    45,    46,    47,   -45,    48,    49,
       0,    50,    51,    52,     0,     0,     0,    53,    54,    55,
      56,    57,    58,    59,  -259,   -45,    60,    61,    62,     0,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,     0,    76,    77,    78,    79,
      80,     0,    81,    82,   -74,    83,    84,     0,     0,    85,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,    98,     0,     0,    99,     0,
     100,   313,   101,     0,   102,     0,     4,   103,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,    12,
      13,    14,    15,    16,     0,    17,     0,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,     0,
      29,     0,    30,    31,    32,    33,    34,    35,    36,    37,
     -74,     0,    38,    39,    40,     0,    41,  -259,     0,    42,
      43,    44,     0,    45,    46,    47,   -45,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    59,  -259,   -45,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -74,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
     692,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,   -74,
       0,    38,    39,    40,     0,    41,  -259,     0,    42,    43,
      44,     0,    45,    46,    47,   -45,    48,    49,     0,    50,
      51,    52,     0,     0,     0,    53,    54,    55,    56,   328,
      58,    59,  -259,   -45,    60,    61,    62,     0,    63,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,     0,    76,    77,    78,    79,    80,     0,
      81,    82,   -74,    83,    84,     0,     0,    85,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
      95,    96,    97,    98,     0,     0,    99,     0,   100,     0,
     101,     0,   102,     0,     4,   103,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,     0,    29,     0,
      30,    31,    32,    33,    34,    35,    36,    37,   -74,     0,
      38,    39,    40,     0,    41,  -259,     0,    42,    43,    44,
       0,    45,    46,    47,   -45,    48,    49,     0,    50,    51,
      52,     0,     0,     0,    53,    54,    55,    56,     0,    58,
      59,  -259,   -45,    60,    61,    62,     0,    63,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,     0,    76,    77,    78,    79,    80,     0,    81,
      82,   -74,    83,    84,     0,     0,    85,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,    98,     0,     0,    99,     0,   100,     0,   101,
       0,   102,     0,     4,   103,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,   609,    37,   -74,     0,    38,
      39,    40,     0,    41,  -259,     0,    42,    43,    44,     0,
      45,    46,    47,   -45,    48,    49,     0,    50,    51,    52,
       0,     0,     0,    53,    54,    55,    56,     0,    58,    59,
    -259,   -45,    60,    61,    62,     0,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,     0,    76,    77,    78,    79,    80,     0,    81,    82,
     -74,    83,    84,     0,     0,    85,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
      97,    98,     0,     0,    99,     0,   100,     0,   101,     0,
     102,     0,     4,   103,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,     0,    29,     0,    30,    31,
      32,    33,    34,    35,   615,    37,   -74,     0,    38,    39,
      40,     0,    41,  -259,     0,    42,    43,    44,     0,    45,
      46,    47,   -45,    48,    49,     0,    50,    51,    52,     0,
       0,     0,    53,    54,    55,    56,     0,    58,    59,  -259,
     -45,    60,    61,    62,     0,    63,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    74,    75,
       0,    76,    77,    78,    79,    80,     0,    81,    82,   -74,
      83,    84,     0,     0,    85,     0,    86,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
      98,     0,     0,    99,     0,   100,     0,   101,     0,   102,
       0,     4,   103,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,   903,    37,   -74,     0,    38,    39,    40,
       0,    41,  -259,     0,    42,    43,    44,     0,    45,    46,
      47,   -45,    48,    49,     0,    50,    51,    52,     0,     0,
       0,    53,    54,    55,    56,     0,    58,    59,  -259,   -45,
      60,    61,    62,     0,    63,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,     0,
      76,    77,    78,    79,    80,     0,    81,    82,   -74,    83,
      84,     0,     0,    85,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,    97,    98,
       0,     0,    99,     0,   100,     0,   101,     0,   102,     0,
       4,   103,     5,     0,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    12,    13,    14,    15,    16,     0,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,     0,    29,     0,    30,    31,    32,    33,
      34,    35,   905,    37,   -74,     0,    38,    39,    40,     0,
      41,  -259,     0,    42,    43,    44,     0,    45,    46,    47,
     -45,    48,    49,     0,    50,    51,    52,     0,     0,     0,
      53,    54,    55,    56,     0,    58,    59,  -259,   -45,    60,
      61,    62,     0,    63,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,     0,    76,
      77,    78,    79,    80,     0,    81,    82,   -74,    83,    84,
       0,     0,    85,     0,    86,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,    98,     0,
       0,    99,     0,   100,     0,   101,     0,   102,     0,     4,
     103,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,   910,    37,   -74,     0,    38,    39,    40,     0,    41,
    -259,     0,    42,    43,    44,     0,    45,    46,    47,   -45,
      48,    49,     0,    50,    51,    52,     0,     0,     0,    53,
      54,    55,    56,     0,    58,    59,  -259,   -45,    60,    61,
      62,     0,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,    75,     0,    76,    77,
      78,    79,    80,     0,    81,    82,   -74,    83,    84,     0,
       0,    85,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,    97,    98,     0,     0,
      99,     0,   100,     0,   101,     0,   102,     0,     4,   103,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,     0,    29,     0,    30,    31,    32,    33,    34,    35,
     913,    37,   -74,     0,    38,    39,    40,     0,    41,  -259,
       0,    42,    43,    44,     0,    45,    46,    47,   -45,    48,
      49,     0,    50,    51,    52,     0,     0,     0,    53,    54,
      55,    56,     0,    58,    59,  -259,   -45,    60,    61,    62,
       0,    63,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    74,    75,     0,    76,    77,    78,
      79,    80,     0,    81,    82,   -74,    83,    84,     0,     0,
      85,     0,    86,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,    98,     0,     0,    99,
       0,   100,     0,   101,     0,   102,     0,     4,   103,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   936,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,   -74,     0,    38,    39,    40,     0,    41,  -259,     0,
      42,    43,    44,     0,    45,    46,    47,   -45,    48,    49,
       0,    50,    51,    52,     0,     0,     0,    53,    54,    55,
      56,     0,    58,    59,  -259,   -45,    60,    61,    62,     0,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,     0,    76,    77,    78,    79,
      80,     0,    81,    82,   -74,    83,    84,     0,     0,    85,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,    98,     0,     0,    99,     0,
     100,     0,   101,     0,   102,     0,     4,   103,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,    12,
      13,    14,    15,    16,     0,    17,     0,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,     0,
      29,     0,    30,    31,    32,    33,    34,    35,   942,    37,
     -74,     0,    38,    39,    40,     0,    41,  -259,     0,    42,
      43,    44,     0,    45,    46,    47,   -45,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -259,   -45,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -74,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,   946,    37,   -74,
       0,    38,    39,    40,     0,    41,  -259,     0,    42,    43,
      44,     0,    45,    46,    47,   -45,    48,    49,     0,    50,
      51,    52,     0,     0,     0,    53,    54,    55,    56,     0,
      58,    59,  -259,   -45,    60,    61,    62,     0,    63,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,    75,     0,    76,    77,    78,    79,    80,     0,
      81,    82,   -74,    83,    84,     0,     0,    85,     0,    86,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
      95,    96,    97,    98,     0,     0,    99,     0,   100,     0,
     101,     0,   102,     0,  1129,   103,     5,   275,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,   276,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,  1130,   792,   103,     5,   275,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,   178,    37,     0,     0,     0,
      39,     0,     0,    41,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,     0,    50,    51,     0,
       0,     0,     0,     0,    54,     0,    56,     0,    58,     0,
       0,     0,     0,    61,   179,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,   180,     0,    74,
       0,     0,    76,     0,     0,     0,    80,     0,     0,    82,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
     276,     0,     0,     0,    99,     0,   181,     0,   101,     0,
     182,     0,     5,   103,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,   218,    23,     0,     0,     0,
       0,     0,    28,     0,   175,     0,     0,     0,    32,   176,
     177,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,    55,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,    63,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,    83,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     0,
     103,     5,   275,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,   178,    37,     0,     0,     0,    39,     0,     0,    41,
       0,     0,     0,    43,    44,     0,     0,    46,    47,     0,
      48,    49,     0,    50,    51,     0,     0,     0,     0,     0,
      54,     0,    56,     0,    58,     0,     0,     0,     0,    61,
     179,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,   180,     0,    74,     0,     0,    76,   280,
     281,     0,    80,   317,     0,    82,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,   318,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,   276,     0,     0,     0,
      99,     0,   181,     0,   101,     0,   182,     0,     0,   103,
       5,   275,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   173,     0,     0,    15,    16,     0,    17,     0,   174,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   175,     0,     0,     0,    32,   176,   177,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,   280,   281,
       0,    80,   317,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,   276,     0,     0,     0,    99,
       0,   181,     0,   101,   676,   182,     0,     0,   103,     5,
     275,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,   178,
      37,     0,     0,     0,    39,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,   180,     0,    74,     0,     0,    76,   280,   281,     0,
      80,   317,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,   276,     0,     0,     0,    99,     0,
     181,     0,   101,   678,   182,     0,     5,   103,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
     574,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   178,    37,     0,   575,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,   576,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,   577,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,   178,    37,     0,     0,     0,    39,     0,
       0,    41,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,     0,    50,    51,     0,     0,     0,
       0,     0,    54,     0,    56,     0,    58,     0,     0,     0,
       0,    61,   179,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,   180,     0,    74,     0,     0,
      76,   280,   281,     0,    80,     0,     0,    82,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,    97,   282,
       0,     0,    99,     0,   181,     0,   101,     0,   182,     0,
       0,   103,     5,   275,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   175,     0,     0,     0,    32,   176,
     177,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
     280,   281,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,   276,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,   178,
      37,     0,     0,     0,    39,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
     794,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,   180,     0,    74,     0,     0,    76,   280,   281,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,    99,     0,
     181,     0,   101,     0,   182,     0,     5,   103,     6,     7,
       8,   207,    10,    11,   208,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   209,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,   210,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,   178,    37,     0,     0,     0,    39,     0,
       0,    41,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,     0,    50,    51,     0,     0,     0,
       0,     0,    54,   212,    56,     0,    58,     0,     0,     0,
       0,    61,   179,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,   180,     0,    74,     0,     0,
      76,     0,     0,     0,    80,     0,     0,    82,     0,     0,
      84,     0,     0,     0,     0,     0,   213,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,    99,     0,   181,     0,   101,     0,   182,     0,
       0,   103,     5,   275,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   175,     0,     0,     0,    32,   176,
     177,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,   213,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,   276,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,   178,
      37,     0,     0,     0,    39,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,   180,     0,    74,     0,     0,    76,   280,   281,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,    99,     0,
     181,     0,   101,     0,   182,     0,     0,   103,     5,   275,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,   276,     0,     0,     0,    99,     0,   181,
     674,   101,     0,   182,     0,     0,   103,     5,   275,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,   178,    37,     0,
       0,     0,    39,     0,     0,    41,     0,     0,     0,    43,
      44,     0,     0,    46,    47,     0,    48,    49,     0,    50,
      51,     0,     0,     0,     0,     0,    54,     0,    56,     0,
      58,     0,     0,     0,     0,    61,   179,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    70,    71,    72,   180,
       0,    74,     0,     0,    76,     0,     0,     0,    80,     0,
       0,    82,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
      95,    96,   276,     0,     0,     0,    99,     0,   181,     0,
     101,     0,   182,   684,     0,   103,     5,   275,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,   276,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,  1061,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,   178,    37,     0,     0,     0,    39,     0,
       0,    41,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,     0,    50,    51,     0,     0,     0,
       0,     0,    54,     0,    56,     0,    58,     0,     0,     0,
       0,    61,   179,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,   180,     0,    74,     0,     0,
      76,     0,     0,     0,    80,     0,     0,    82,     0,     0,
      84,     0,     0,     0,     0,     0,   213,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,    99,     0,   181,     0,   101,     0,   182,     0,
       5,   103,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   173,     0,     0,    15,    16,     0,    17,     0,   174,
       0,     0,    21,     0,     0,     0,     0,     0,     0,   255,
      28,     0,   175,     0,     0,     0,    32,   176,   177,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,    99,
       0,   100,     0,   101,     0,   182,     0,     0,   103,     5,
     275,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,   178,
      37,     0,     0,     0,    39,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,   180,     0,    74,     0,     0,    76,     0,     0,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,   276,     0,     0,     0,    99,     0,
     181,     0,   101,     0,   182,     0,     5,   103,     6,     7,
       8,   207,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   209,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,   210,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,   178,    37,     0,     0,     0,    39,     0,
       0,    41,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,     0,    50,    51,     0,     0,     0,
       0,     0,    54,     0,    56,     0,    58,     0,     0,     0,
       0,    61,   179,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,   180,     0,    74,     0,     0,
      76,     0,     0,     0,    80,     0,     0,    82,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,    99,     0,   181,     0,   101,     0,   182,   689,
       5,   103,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   173,     0,     0,    15,    16,     0,    17,     0,   174,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   175,     0,     0,     0,    32,   176,   177,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,   820,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,    99,
       0,   181,     0,   101,     0,   182,     0,     0,   103,     5,
     275,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,   648,
       0,   175,     0,     0,     0,    32,   176,   177,     0,   178,
      37,     0,     0,     0,   649,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,   650,    70,    71,
      72,   651,     0,    74,     0,     0,    76,     0,     0,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,   276,     0,     0,     0,    99,     0,
     181,     0,   101,     0,  1002,     0,     5,   103,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,  1027,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     0,   103,     5,   275,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,   178,    37,     0,     0,     0,
      39,     0,     0,    41,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,     0,    50,    51,     0,
       0,     0,     0,     0,    54,     0,    56,     0,    58,     0,
       0,     0,     0,    61,   179,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,   180,     0,    74,
       0,     0,    76,     0,     0,     0,    80,     0,     0,    82,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
     276,     0,     0,     0,    99,     0,   181,     0,   101,     0,
    1002,     0,     0,   103,     5,   275,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   175,     0,     0,     0,
      32,   176,   177,     0,   984,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,   276,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
       0,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,   178,    37,     0,     0,     0,    39,     0,     0,    41,
       0,     0,     0,    43,    44,     0,     0,    46,    47,     0,
      48,    49,     0,    50,    51,     0,     0,     0,     0,     0,
      54,     0,    56,     0,    58,     0,     0,     0,     0,    61,
     179,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,   180,     0,    74,     0,     0,    76,     0,
       0,     0,    80,     0,     0,    82,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
      99,     0,   181,     0,   101,     0,   182,     0,     5,   103,
       6,     7,     8,   203,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   204,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,   178,    37,     0,     0,     0,
      39,     0,     0,    41,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,     0,    50,    51,     0,
       0,     0,     0,     0,    54,     0,    56,     0,    58,     0,
       0,     0,     0,    61,   179,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,   180,     0,    74,
       0,     0,    76,     0,     0,     0,    80,     0,     0,    82,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,    99,     0,   100,     0,   101,     0,
     182,     0,     5,   103,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   175,     0,     0,     0,    32,   176,
     177,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   620,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,   648,
       0,   175,     0,     0,     0,    32,   176,   177,     0,   178,
      37,     0,     0,     0,   649,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,   650,    70,    71,
      72,   651,     0,    74,     0,     0,    76,     0,     0,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,    99,     0,
     181,     0,   101,     0,   652,     0,     5,   103,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   652,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,   731,    37,     0,     0,     0,    39,     0,
       0,    41,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,     0,    50,    51,     0,     0,     0,
       0,     0,    54,     0,    56,     0,    58,     0,     0,     0,
       0,    61,   179,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,   180,     0,    74,     0,     0,
      76,     0,     0,     0,    80,     0,     0,    82,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,    97,     0,
       0,     0,    99,     0,   181,     0,   101,     0,   182,     0,
       5,   103,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   173,     0,     0,    15,    16,     0,    17,     0,   174,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   175,     0,     0,     0,    32,   176,   177,     0,
     734,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,    99,
       0,   181,     0,   101,     0,   182,     0,     5,   103,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,   978,    37,     0,
       0,     0,    39,     0,     0,    41,     0,     0,     0,    43,
      44,     0,     0,    46,    47,     0,    48,    49,     0,    50,
      51,     0,     0,     0,     0,     0,    54,     0,    56,     0,
      58,     0,     0,     0,     0,    61,   179,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    70,    71,    72,   180,
       0,    74,     0,     0,    76,     0,     0,     0,    80,     0,
       0,    82,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
      95,    96,    97,     0,     0,     0,    99,     0,   181,     0,
     101,     0,   182,     0,     5,   103,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   175,     0,     0,     0,
      32,   176,   177,     0,   979,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
       0,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,   981,    37,     0,     0,     0,    39,     0,     0,    41,
       0,     0,     0,    43,    44,     0,     0,    46,    47,     0,
      48,    49,     0,    50,    51,     0,     0,     0,     0,     0,
      54,     0,    56,     0,    58,     0,     0,     0,     0,    61,
     179,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,   180,     0,    74,     0,     0,    76,     0,
       0,     0,    80,     0,     0,    82,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,    96,    97,     0,     0,     0,
      99,     0,   181,     0,   101,     0,   182,     0,     5,   103,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   982,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,   983,    37,     0,     0,     0,
      39,     0,     0,    41,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,     0,    50,    51,     0,
       0,     0,     0,     0,    54,     0,    56,     0,    58,     0,
       0,     0,     0,    61,   179,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,   180,     0,    74,
       0,     0,    76,     0,     0,     0,    80,     0,     0,    82,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    95,    96,
      97,     0,     0,     0,    99,     0,   181,     0,   101,     0,
     182,     0,     5,   103,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   175,     0,     0,     0,    32,   176,
     177,     0,   984,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,   648,
       0,   175,     0,     0,     0,    32,   176,   177,     0,   178,
      37,     0,     0,     0,   649,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,   650,    70,    71,
      72,   651,     0,    74,     0,     0,    76,     0,     0,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,     0,     0,     0,    99,     0,
     181,     0,   101,     0,  1085,     0,     5,   103,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   175,     0,
       0,     0,    32,   176,   177,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   832,     0,   833,    88,    89,    90,
      91,    92,     0,     0,     0,   834,    93,     0,     0,     0,
     835,   226,   836,   837,     0,     0,    94,     0,   838,    95,
      96,    97,     0,     0,     0,    99,   229,     0,   175,   101,
       0,  1085,   839,     0,   103,     0,     0,   840,     0,     0,
       0,   232,     0,     0,   841,     0,   842,     0,     0,     0,
       0,     0,   843,     0,     0,     0,     0,     0,   844,   845,
       0,     0,     0,     0,     0,   237,     0,     0,     0,     0,
       0,     0,     0,     0,   846,     0,     0,     0,     0,     0,
       0,     0,     0,   239,   240,     0,   847,     0,   242,     0,
     848,     0,     0,   849,     0,     0,     0,   850,     0,     0,
     246,     0,     0,   851,     0,     0,     0,     0,     0,     0,
       0,     0,   445,   376,   377,   378,   379,   380,     0,     0,
     383,   384,   385,   386,     0,   388,   389,   852,   853,   854,
     855,   856,     0,     0,   857,     0,     0,     0,   858,   859,
     860,   861,   862,   863,   864,   865,   866,   867,   868,     0,
     869,     0,     0,   870,   871,   872,   873,     0,     5,   874,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,  -527,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,   390,    96,    97,  -567,     0,  -567,    99,     0,   181,
       0,   101,     0,   182,     5,   275,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   175,     0,     0,     0,
      32,   176,   177,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
    -424,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,  -424,     0,     0,     0,  -424,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   276,
       0,     0,     0,     0,     0,   181,     0,   101,  -424,  1002,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   173,     0,     0,    15,    16,     0,    17,     0,   174,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   175,     0,     0,     0,    32,   176,   177,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,  -406,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,  -406,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,  -406,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,  -406,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,    90,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,     0,    15,    16,     0,    17,
       0,   174,     0,     0,    21,    97,  -406,     0,     0,     0,
       0,  -406,    28,   101,   175,  1085,     0,     0,    32,   176,
     177,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,     0,     0,     0,     0,
       0,     0,     0,    88,     5,    90,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,   390,    21,    97,  -567,     0,
    -567,     0,     0,   181,    28,   101,   175,   182,     0,     0,
      32,   176,   177,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,    90,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   173,     0,     0,
      15,    16,     0,    17,     0,   174,     0,     0,    21,    97,
       0,     0,     0,     0,     0,   181,    28,   101,   175,   652,
       0,     0,    32,   176,   177,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,   224,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,   225,   226,    76,   227,     0,     0,    80,     0,   228,
      82,     0,     0,    84,     0,     0,     0,   229,     0,     0,
       0,     0,     0,   230,     0,     0,     0,     0,   231,     0,
       0,     0,   232,     0,     0,   233,     0,   224,     0,    90,
       0,     0,     0,   234,     0,     0,     0,     0,     0,   235,
     236,   225,   226,     0,   227,     0,   237,     0,     0,   228,
       0,     0,     0,     0,     0,   238,     0,   229,     0,   101,
       0,   182,     0,   230,   239,   240,     0,   241,   231,   242,
       0,   243,   232,     0,   244,   233,     0,     0,   245,     0,
       0,   246,     0,   234,   247,     0,     0,     0,     0,   235,
     236,     0,     0,     0,     0,     0,   237,     0,     0,     0,
       0,     0,     0,     0,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   240,     0,   241,     0,   242,
       0,   243,     0,     0,   244,     0,     0,     0,   245,  1039,
       0,   246,     0,     0,   247,     0,     0,     0,   834,     0,
     251,     0,     0,   225,   226,   836,   227,     0,     0,     0,
       0,   228,     0,   270,     0,     0,     0,    22,    23,   229,
       0,     0,     0,     0,     0,   839,   271,     0,    30,   272,
     231,     0,     0,    35,   232,     0,     0,   233,     0,   842,
      40,     0,     0,     0,     0,   234,     0,     0,     0,     0,
     782,   844,   236,     0,     0,     0,     0,     0,   237,     0,
       0,     0,    53,     0,    55,     0,   328,   238,   960,     0,
       0,   961,     0,   273,     0,    63,   239,   240,     0,   241,
     345,   242,     0,  1040,     0,     0,   849,   346,     0,     0,
     245,     0,     0,   246,    79,     0,   247,    81,     0,   347,
      83,     0,     0,     0,     0,   445,   376,   377,   378,   379,
     380,     0,     0,   383,   384,   385,   386,     0,   388,   389,
     852,   853,   854,   855,   856,     0,     0,   857,     0,     0,
       0,   858,   859,   860,   861,   862,   863,   864,   865,   866,
     867,   868,     0,   869,     0,     0,   870,   871,   872,   873,
      98,   348,     0,     0,     0,   349,   345,     0,     0,     0,
       0,     0,     0,   346,   444,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   350,   445,   376,   377,
     378,   379,   380,     0,     0,   383,   384,   385,   386,     0,
     388,   389,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,   348,   371,   372,
     373,   349,   403,     0,     0,     0,   345,     0,     0,   374,
     902,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,   350,   445,   376,   377,   378,   379,   380,     0,
       0,   383,   384,   385,   386,     0,   388,   389,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,     0,   371,   372,   373,   348,   403,     0,
       0,   349,   345,     0,     0,   374,     0,     0,     0,   346,
     909,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   350,   445,   376,   377,   378,   379,   380,     0,
       0,   383,   384,   385,   386,     0,   388,   389,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,   348,   371,   372,   373,   349,   403,     0,
       0,     0,   345,     0,     0,   374,  1053,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   350,   445,
     376,   377,   378,   379,   380,     0,     0,   383,   384,   385,
     386,     0,   388,   389,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,     0,
     371,   372,   373,   348,   403,     0,     0,   349,   345,     0,
       0,   374,     0,     0,     0,   346,  1054,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   350,   445,
     376,   377,   378,   379,   380,     0,     0,   383,   384,   385,
     386,     0,   388,   389,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,   348,
     371,   372,   373,   349,   403,     0,     0,     0,   345,     0,
       0,   374,  1055,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,   350,   445,   376,   377,   378,   379,
     380,     0,     0,   383,   384,   385,   386,     0,   388,   389,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,     0,   371,   372,   373,   348,
     403,     0,     0,   349,   345,     0,     0,   374,     0,     0,
       0,   346,  1056,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,   445,   376,   377,   378,   379,
     380,     0,     0,   383,   384,   385,   386,     0,   388,   389,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,   348,   371,   372,   373,   349,
     403,     0,     0,     0,   345,     0,     0,   374,  1079,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
     350,   445,   376,   377,   378,   379,   380,     0,     0,   383,
     384,   385,   386,     0,   388,   389,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,     0,   371,   372,   373,   348,   403,     0,     0,   349,
       0,     0,     0,   374,   345,     0,     0,     0,  1080,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,   437,     0,     0,     0,     0,     0,
     350,   445,   376,   377,   378,   379,   380,     0,   438,   383,
     384,   385,   386,     0,   388,   389,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,     0,   371,   372,   373,   348,   403,     0,     0,   349,
     345,     0,     0,   374,     0,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   347,
     431,     0,     0,     0,     0,     0,   434,     0,     0,     0,
     350,     0,     0,     0,   432,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,   348,   371,   372,   373,   349,   403,     0,     0,     0,
       0,     0,     0,   374,     0,     0,     0,     0,     0,     0,
     345,     0,     0,     0,     0,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,     0,   350,     0,     0,   347,
       0,     0,     0,     0,   441,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,   442,     0,   371,   372,
     373,     0,   403,     0,     0,     0,     0,     0,     0,   374,
       0,   348,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     345,   700,     0,     0,     0,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,     0,   350,     0,     0,   347,
       0,     0,     0,     0,   701,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,   702,   443,   371,   372,
     373,     0,     0,     0,     0,     0,     0,     0,     0,   374,
       0,   348,     0,     0,     0,   349,   345,     0,     0,     0,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,   764,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,     0,   348,   371,   372,
     373,   349,     0,     0,     0,     0,   345,     0,     0,   374,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,   255,     0,   434,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,     0,   371,   372,   373,   348,   403,     0,
       0,   349,   345,     0,     0,   374,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,   583,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   350,     0,     0,     0,   584,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,   348,   371,   372,   373,   349,   403,     0,
       0,     0,   345,     0,     0,   374,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,   585,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,   586,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,     0,
     371,   372,   373,   348,     0,     0,     0,   349,   345,     0,
       0,   374,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,   756,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,   348,
     371,   372,   373,   349,     0,     0,     0,     0,   345,     0,
       0,   374,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,     0,   371,   372,   373,   348,
     403,     0,     0,   349,   345,     0,     0,   374,     0,     0,
       0,   346,   774,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,   348,   371,   372,   373,   349,
     403,     0,     0,     0,     0,     0,     0,   374,     0,     0,
       0,     0,     0,     0,   345,     0,     0,     0,     0,     0,
       0,   346,     0,     0,     0,     0,   434,     0,     0,     0,
     350,     0,     0,   347,     0,     0,     0,     0,   955,     0,
       0,     0,     0,     0,     0,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
     956,   345,   371,   372,   373,     0,     0,     0,   346,     0,
       0,   812,     0,   374,     0,   348,     0,     0,     0,   349,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   345,     0,     0,     0,     0,     0,     0,   346,     0,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     347,     0,     0,     0,     0,     0,   351,   352,     0,   353,
     354,   355,   348,   356,   357,   358,   349,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
     345,     0,   371,   372,   373,     0,     0,   346,     0,     0,
       0,     0,     0,   374,     0,     0,     0,   350,     0,   347,
       0,     0,   348,     0,     0,     0,   349,     0,     0,     0,
       0,     0,     0,   351,   352,     0,   353,   354,   355,     0,
     356,   357,   358,     0,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,   350,     0,   371,
     372,   373,     0,   478,     0,     0,     0,     0,     0,     0,
     374,   348,     0,   351,   352,   349,   353,   354,   355,     0,
     356,   357,   358,     0,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,   345,   482,   371,
     372,   373,     0,     0,   346,     0,   350,     0,     0,     0,
     374,     0,     0,     0,     0,     0,   347,     0,     0,     0,
       0,     0,   351,   352,     0,   353,   354,   355,     0,   356,
     357,   358,     0,   359,   360,   361,   362,   363,     0,   364,
     365,   366,   367,   368,   369,   370,   345,   484,   371,   372,
     373,     0,     0,   346,     0,     0,     0,     0,     0,   374,
       0,     0,     0,     0,     0,   347,     0,     0,   348,     0,
       0,     0,   349,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   345,     0,     0,     0,     0,     0,     0,   346,
       0,     0,     0,   350,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,   348,     0,   351,
     352,   349,   353,   354,   355,     0,   356,   357,   358,     0,
     359,   360,   361,   362,   363,     0,   364,   365,   366,   367,
     368,   369,   370,     0,   486,   371,   372,   373,     0,     0,
       0,     0,   350,     0,     0,     0,   374,     0,     0,     0,
       0,     0,     0,   348,     0,     0,     0,   349,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,   345,   491,   371,   372,   373,   508,   350,   346,
       0,     0,     0,     0,     0,   374,     0,     0,     0,     0,
       0,   347,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,   345,     0,
     371,   372,   373,     0,     0,   346,     0,     0,     0,     0,
       0,   374,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,   348,     0,     0,     0,   349,     0,     0,
       0,     0,     0,     0,     0,     0,   587,     0,   345,   696,
       0,     0,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,     0,     0,   349,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,     0,
     371,   372,   373,     0,   350,     0,     0,     0,     0,   348,
       0,   374,     0,   349,     0,     0,     0,     0,     0,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,   350,     0,   371,   372,   373,     0,
       0,   345,     0,   675,     0,     0,     0,   374,   346,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   697,   358,
     347,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,     0,   371,   372,   373,     0,
       0,     0,     0,     0,     0,     0,   345,   374,     0,     0,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,   348,     0,     0,     0,   349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   345,     0,     0,     0,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,   350,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   348,     0,     0,
       0,   349,     0,   351,   352,     0,   353,   354,   355,     0,
     356,   357,   358,     0,   359,   360,   361,   362,   363,  -528,
     364,   365,   366,   367,   368,   369,   370,     0,   168,   371,
     372,   373,   350,     0,     0,     0,     0,   348,     0,     0,
     374,   349,     0,     0,     0,     0,     0,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,     0,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,   350,     0,   371,   372,   373,     0,     0,   345,
     769,     0,     0,     0,     0,   374,   346,     0,   351,   352,
       0,   353,   354,   355,     0,   356,   357,   358,   347,   359,
     360,   361,   362,   363,     0,   364,   365,   366,   367,   368,
     369,   370,     0,   741,   371,   372,   373,     0,     0,   345,
       0,     0,     0,     0,     0,   374,   346,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   347,     0,
       0,   772,     0,     0,     0,     0,     0,     0,     0,     0,
     348,     0,     0,     0,   349,     0,     0,     0,     0,   345,
       0,     0,     0,     0,     0,     0,   346,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
     348,     0,     0,     0,   349,     0,     0,     0,     0,     0,
       0,   351,   352,     0,   353,   354,   355,     0,   356,   357,
     358,     0,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,   350,     0,   371,   372,   373,
     348,     0,     0,     0,   349,     0,     0,     0,   374,     0,
       0,   351,   352,     0,   353,   354,   355,     0,   356,   357,
     358,     0,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,   350,     0,   371,   372,   373,
       0,     0,   345,     0,     0,     0,     0,     0,   374,   346,
       0,   351,   352,     0,   353,   354,   355,     0,   356,   357,
     358,   347,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,     0,     0,   371,   372,   373,
       0,     0,     0,   345,   796,     0,     0,     0,   374,     0,
     346,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   348,     0,     0,     0,   349,     0,     0,
       0,     0,     0,   345,     0,     0,     0,     0,     0,     0,
     346,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   347,   889,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,   348,     0,     0,     0,   349,     0,
       0,     0,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,   815,   350,
     371,   372,   373,     0,   348,     0,     0,   797,   349,     0,
       0,   374,     0,     0,     0,   351,   352,     0,   353,   354,
     355,     0,   356,   357,   358,     0,   359,   360,   361,   362,
     363,     0,   364,   365,   366,   367,   368,   369,   370,   350,
       0,   371,   372,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   374,     0,     0,   351,   352,     0,   353,   354,
     355,     0,   356,   357,   358,     0,   359,   360,   361,   362,
     363,     0,   364,   365,   366,   367,   368,   369,   370,   345,
    -240,   371,   372,   373,     0,     0,   346,     0,     0,     0,
       0,     0,   374,     0,  -240,  -240,     0,  -240,   347,   892,
       0,     0,  -240,     0,     0,     0,     0,     0,     0,     0,
    -240,     0,     0,     0,     0,     0,  -240,     0,     0,   345,
       0,  -240,     0,     0,     0,  -240,   346,     0,  -240,     0,
       0,     0,     0,     0,     0,     0,  -240,     0,   347,     0,
       0,     0,  -240,  -240,     0,     0,     0,     0,     0,  -240,
     348,     0,     0,     0,   349,     0,     0,     0,  -240,   345,
     952,     0,     0,     0,     0,     0,   346,  -240,  -240,     0,
    -240,     0,  -240,     0,  -240,     0,     0,  -240,   347,     0,
       0,  -240,     0,     0,  -240,   350,     0,  -240,     0,     0,
     348,     0,     0,     0,   349,     0,     0,     0,     0,     0,
       0,   351,   352,     0,   353,   354,   355,     0,   356,   357,
     358,     0,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,   350,     0,   371,   372,   373,
     348,     0,     0,     0,   349,     0,     0,     0,   374,     0,
       0,   351,   352,     0,   353,   354,   355,     0,   356,   357,
     358,     0,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,   350,     0,   371,   372,   373,
       0,     0,   345,     0,     0,     0,   894,     0,   374,   346,
       0,   351,   352,     0,   353,   354,   355,     0,   356,   357,
     358,   347,   359,   360,   361,   362,   363,     0,   364,   365,
     366,   367,   368,   369,   370,     0,     0,   371,   372,   373,
       0,     0,   345,     0,     0,     0,     0,     0,   374,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   348,     0,     0,     0,   349,     0,     0,
       0,     0,   345,   996,     0,     0,   977,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,   348,     0,     0,     0,   349,     0,     0,
       0,     0,     0,     0,   351,   352,   980,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,   350,     0,
     371,   372,   373,   348,     0,     0,     0,   349,     0,     0,
       0,   374,     0,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,     0,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,   350,     0,
     371,   372,   373,     0,     0,   345,     0,     0,     0,     0,
       0,   374,   346,     0,   351,   352,     0,   353,   354,   355,
       0,   356,   357,   358,   347,   359,   360,   361,   362,   363,
       0,   364,   365,   366,   367,   368,   369,   370,     0,     0,
     371,   372,   373,     0,     0,   345,     0,     0,     0,     0,
       0,   374,   346,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,     0,
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   350,     0,     0,     0,     0,   348,     0,     0,     0,
     349,     0,     0,     0,     0,     0,     0,   351,   352,     0,
     353,   354,   355,     0,   356,   357,   358,     0,   359,   360,
     361,   362,   363,     0,   364,   365,   366,   367,   368,   369,
     370,   350,     0,   371,   372,   373,     0,     0,   345,     0,
    1038,     0,     0,     0,   374,   346,     0,   351,   352,     0,
     353,   354,   355,     0,   356,   357,   358,   347,   359,   360,
     361,   362,   363,     0,   364,   365,   366,   367,   368,   369,
     370,     0,     0,   371,   372,   373,     0,     0,   345,     0,
       0,     0,  1075,     0,   374,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,     0,     0,   349,     0,     0,     0,     0,   345,     0,
       0,     0,  1094,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,   348,
       0,     0,     0,   349,     0,     0,     0,     0,     0,     0,
     351,   352,  1095,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,   350,     0,   371,   372,   373,   348,
       0,     0,     0,   349,     0,     0,     0,   374,     0,     0,
     351,   352,  1096,   353,   354,   355,     0,   356,   357,   358,
       0,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,   350,     0,   371,   372,   373,     0,
       0,   345,     0,     0,     0,     0,     0,   374,   346,     0,
     351,   352,     0,   353,   354,   355,     0,   356,   357,   358,
     347,   359,   360,   361,   362,   363,     0,   364,   365,   366,
     367,   368,   369,   370,     0,     0,   371,   372,   373,     0,
       0,   345,     0,     0,     0,     0,     0,   374,   346,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,     0,     0,     0,   349,     0,     0,     0,
       0,   345,     0,     0,     0,  1097,     0,     0,   346,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,   350,     0,     0,
       0,     0,   348,     0,     0,     0,   349,     0,     0,     0,
       0,     0,     0,   351,   352,  1098,   353,   354,   355,     0,
     356,   357,   358,     0,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,   350,     0,   371,
     372,   373,   348,     0,     0,     0,   349,     0,     0,     0,
     374,     0,     0,   351,   352,  1099,   353,   354,   355,     0,
     356,   357,   358,     0,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,   350,     0,   371,
     372,   373,     0,     0,   345,     0,     0,     0,     0,     0,
     374,   346,     0,   351,   352,     0,   353,   354,   355,     0,
     356,   357,   358,   347,   359,   360,   361,   362,   363,     0,
     364,   365,   366,   367,   368,   369,   370,     0,     0,   371,
     372,   373,     0,     0,   345,     0,     0,     0,     0,  1123,
     374,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   348,     0,     0,     0,   349,
       0,     0,     0,     0,   345,     0,     0,     0,     0,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
     350,     0,     0,     0,     0,   348,     0,     0,     0,   349,
       0,     0,     0,     0,     0,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
     350,     0,   371,   372,   373,   348,     0,     0,     0,   349,
       0,     0,     0,   374,     0,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
     350,     0,   371,   372,   373,     0,     0,   345,     0,     0,
       0,  1152,     0,   374,   346,     0,   351,   352,     0,   353,
     354,   355,     0,   356,   357,   358,   347,   359,   360,   361,
     362,   363,     0,   364,   365,   366,   367,   368,   369,   370,
       0,   270,   371,   372,   373,    22,    23,     0,     0,     0,
       0,     0,     0,   374,   271,     0,    30,   272,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   729,     0,
       0,     0,   349,     0,     0,     0,     0,     0,     0,     0,
      53,     0,    55,     0,    57,     0,   960,     0,     0,   961,
       0,   273,     0,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   350,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,    81,     0,     0,    83,   351,
     352,     0,   353,   354,   355,     0,   356,   357,   358,     0,
     359,   360,   361,   362,   363,     0,   364,   365,   366,   367,
     368,   369,   370,     0,   270,   371,   372,   373,    22,    23,
       0,     0,     0,     0,     0,     0,   374,   271,     0,    30,
     272,     0,   270,     0,    35,     0,    22,    23,    98,     0,
       0,    40,     0,     0,  1050,   271,     0,    30,   272,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,    40,
       0,     0,     0,    53,     0,    55,     0,    57,     0,   960,
       0,     0,   961,   347,   273,     0,    63,     0,     0,     0,
       0,    53,     0,    55,   270,    57,     0,   960,    22,    23,
     961,     0,   273,     0,    63,    79,     0,   271,    81,    30,
     272,    83,     0,     0,    35,     0,     0,     0,     0,     0,
       0,    40,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,   347,     0,     0,   348,     0,     0,     0,   349,
       0,     0,     0,    53,     0,    55,     0,    57,     0,   960,
       0,     0,   961,     0,   273,     0,    63,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,  1052,     0,     0,
     350,     0,     0,     0,     0,    79,     0,     0,    81,    98,
       0,    83,     0,     0,   348,  1100,   351,   352,   349,   353,
     354,   355,     0,   356,   357,   358,     0,   359,   360,   361,
     362,     0,     0,   364,   365,   366,   367,   368,   369,   370,
       0,     0,   371,   372,   373,     0,     0,     0,     0,   350,
       0,     0,     0,   374,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,     0,   351,   352,  1101,   353,   354,
     355,     0,   356,   357,   358,     0,   359,   360,   361,   362,
       0,     0,   364,   365,   366,   367,   368,   705,   370,   224,
       0,   371,   372,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   374,   225,   226,     0,   227,     0,     0,     0,
       0,   228,     0,     0,     0,     0,     0,     0,     0,   229,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
     231,     0,     0,     0,   232,     0,     0,   233,     0,  -250,
       0,     0,     0,     0,     0,   234,     0,     0,     0,     0,
       0,   235,   236,  -250,  -250,     0,  -250,     0,   237,     0,
       0,  -250,     0,     0,     0,     0,     0,   238,     0,  -250,
       0,     0,     0,     0,     0,  -250,   239,   240,     0,   241,
    -250,   242,     0,   243,  -250,     0,   244,  -250,     0,   224,
     245,     0,     0,   246,     0,  -250,   247,     0,     0,     0,
       0,  -250,  -250,   225,   226,     0,   227,     0,  -250,     0,
       0,   228,     0,     0,     0,     0,     0,  -250,     0,   229,
       0,     0,     0,     0,     0,   230,  -250,  -250,     0,  -250,
     231,  -250,     0,  -250,   232,     0,  -250,   233,     0,  -241,
    -250,     0,     0,  -250,     0,   234,  -250,     0,     0,     0,
       0,   235,   236,  -241,  -241,     0,  -241,     0,   237,     0,
       0,  -241,     0,     0,     0,     0,     0,   238,     0,  -241,
       0,     0,     0,     0,     0,  -241,   239,   240,     0,   241,
    -241,   242,     0,   243,  -241,     0,   244,  -241,     0,  -172,
     245,     0,     0,   246,     0,  -241,   247,     0,     0,     0,
       0,  -241,  -241,  -172,  -172,     0,  -172,     0,  -241,     0,
       0,  -172,     0,     0,     0,     0,     0,  -241,     0,  -172,
       0,     0,     0,     0,     0,  -172,  -241,  -241,     0,  -241,
    -172,  -241,     0,  -241,  -172,     0,  -241,  -172,     0,  -168,
    -241,     0,     0,  -241,     0,  -172,  -241,     0,     0,     0,
       0,  -172,  -172,  -168,  -168,     0,  -168,     0,  -172,     0,
       0,  -168,     0,     0,     0,     0,     0,  -172,     0,  -168,
       0,     0,     0,     0,     0,  -168,  -172,  -172,     0,  -172,
    -168,  -172,     0,  -172,  -168,     0,  -172,  -168,     0,     0,
    -172,     0,     0,  -172,     0,  -168,  -172,     0,     0,     0,
       0,  -168,  -168,     0,     0,     0,     0,     0,  -168,     0,
       0,     0,     0,     0,     0,     0,     0,  -168,     0,     0,
       0,     0,     0,     0,     0,     0,  -168,  -168,     0,  -168,
       0,  -168,     0,  -168,     0,     0,  -168,     0,     0,     0,
    -168,     0,     0,  -168,     0,     0,  -168
};

static const yytype_int16 yycheck[] =
{
      12,    60,   153,     2,    16,   202,   217,   487,    20,    19,
     461,   194,    64,   456,    26,   396,   613,   223,    30,    31,
     442,    33,    34,    35,    36,   714,   223,   210,    22,     1,
     139,    32,  1012,    45,   702,    47,   487,   701,   791,   825,
      52,     1,    54,     1,    56,    45,   879,   880,    46,   926,
     102,     1,    64,    65,    66,    67,    68,    69,   140,    32,
      86,    73,   268,    75,   647,    77,    78,    32,    27,  1061,
      82,   268,   601,    85,    86,   604,    88,    69,    90,    86,
      46,    93,    94,    32,    96,   291,   195,   169,   100,   101,
     102,   103,   112,    32,   291,     1,    65,    69,   923,    57,
      46,   206,   159,    46,    46,   159,   211,    57,   108,   166,
       3,   168,   323,   324,    73,   453,   114,   114,    84,   111,
     140,  1113,     0,    33,    34,    84,     3,     3,    86,   726,
     182,   884,   101,   159,    46,    46,    86,   149,   164,   111,
      46,    99,   140,    20,   103,   728,  1113,   298,     3,   114,
     109,   140,  1132,   166,   112,   168,    33,   164,  1035,   119,
     357,   173,   112,   164,   176,   177,   178,   140,   180,   181,
     182,   169,   169,   165,   927,   114,  1001,   963,   167,   139,
     140,   139,    59,   193,    27,  1152,   392,   393,   114,   139,
     202,   164,   102,   165,   140,   392,   393,   140,   140,   164,
     986,   159,   988,   646,    97,   788,   164,   167,  1041,  1042,
     269,   223,   206,   119,   164,   164,   745,   211,    45,   748,
      97,    97,    18,   169,   218,   164,   103,   169,   140,   140,
      73,    86,   613,   139,   140,    36,   898,    57,   900,    27,
      67,    84,    97,   169,    46,   140,  1130,  1000,    77,    78,
      77,    78,    27,   159,   140,   159,   268,   169,   169,    77,
     272,   165,    80,  1049,  1148,  1051,   109,    68,   280,   281,
     165,    46,   119,     3,   480,    50,    72,   140,   140,   291,
     702,   167,    84,   480,   973,    73,   954,   164,   956,   953,
      20,   955,   112,   140,    90,    70,    84,   144,    73,   140,
      75,    52,   159,    33,   167,   167,   318,  1060,   165,    84,
     907,   107,   166,   422,   168,   103,   315,   166,   427,   168,
     167,   333,   334,   985,   134,   987,   167,    78,   103,    59,
     114,   343,   142,   345,   346,   347,   348,   349,   350,   782,
     352,   353,   354,   355,   356,   726,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   134,   140,   192,   140,    97,   140,   381,
     382,   142,    57,   103,    84,   387,   140,   429,   390,   391,
     392,   393,   394,   395,   396,   159,   140,   214,   215,   216,
     217,   167,     3,   405,   221,   167,   818,   140,   410,    57,
     412,    86,   599,   167,   140,   166,   617,   618,   119,   140,
      31,   165,   381,   382,    99,   119,   166,   429,   387,   431,
     432,   390,   391,   159,   167,   437,   438,   112,    86,   441,
     442,   258,   444,   144,   165,   447,   140,   264,   348,   349,
     144,    99,   780,    83,   134,   140,    31,    87,   140,     8,
     166,   463,   142,   933,   112,   467,   468,   140,   140,    27,
     287,   473,    83,   167,   159,   166,    87,   159,   480,   521,
      94,   682,   683,    45,   159,   926,   159,   159,   305,   164,
     164,    79,   933,   495,   394,   395,   498,   825,   500,    61,
     673,   159,   504,   505,   506,   405,   508,   509,    83,   696,
     697,   159,    87,   158,   140,    73,   164,    79,    83,   521,
      57,   140,    87,   134,   159,   514,    84,     2,   139,   150,
     141,   142,   432,   159,   140,   146,   907,    12,   438,   498,
     159,   500,   954,   154,   956,   103,   108,   164,   166,    86,
      25,   162,    27,   159,   166,   159,   168,    27,   134,   134,
     159,   159,    99,   139,   139,   113,   142,   142,   159,    27,
     146,   146,   166,   714,   168,   112,   498,   159,   500,    49,
     159,   583,   584,   585,   586,   587,   588,   589,    46,   406,
     590,   591,    50,   159,  1035,   597,    82,   599,    73,    82,
     159,    71,   166,    73,   504,   607,   166,   609,   119,    27,
     652,   613,    70,   615,    84,    73,   166,    75,   159,   436,
    1061,   166,   159,   440,  1066,   100,    84,   164,    46,     8,
     105,   166,    50,    61,  1075,   119,   139,   164,   597,   109,
     968,   142,    64,   159,   167,   103,   119,   140,   650,   651,
     652,   159,    70,    46,   656,    73,   166,    75,   986,    34,
     988,   145,   167,   147,   148,   167,    84,   151,   152,   140,
      46,   119,  1113,   167,    31,  1117,  1118,  1119,  1120,  1121,
    1122,    57,   140,    21,   584,   103,   586,   167,   140,  1130,
     169,   169,   694,   159,   169,   164,   698,   656,   700,   701,
     702,   166,   159,   159,   159,   159,   159,  1148,   167,   167,
      86,  1152,   159,   140,   159,   159,    31,    34,   169,    61,
     140,  1049,   165,  1051,   726,   167,    83,   729,   730,   731,
      87,   167,   734,   165,   119,    84,   112,   101,   934,   935,
      32,   167,    32,   119,   169,   164,     2,   934,   935,   164,
      34,   139,   754,    84,   756,   169,    12,   166,   800,   761,
     166,   139,   764,   159,   140,   767,   169,   769,    83,    25,
     772,    27,    87,   248,   169,    46,   159,   134,   135,   165,
     255,   138,   139,   159,   141,   142,    57,   142,   164,   146,
     142,   167,   166,   134,   611,   612,   142,   154,   800,   142,
     617,   618,   142,   160,   161,   162,   142,   134,   810,   142,
     812,   134,   629,   815,   142,    86,   818,    73,   142,   134,
     135,    77,    78,   142,   139,   827,   141,   142,   142,   729,
     730,   146,   973,   134,   134,   142,    34,   167,   202,   154,
     315,   112,   164,   164,   100,   160,   161,   162,   119,   105,
     159,   167,   669,   159,   167,   330,   167,   159,    99,   223,
     159,   159,   134,   158,   134,    67,   169,   158,   330,   140,
     450,   140,   874,   694,    24,   299,   804,   828,   968,   973,
     639,   780,  1132,  1060,   831,  1090,   888,   889,   159,   891,
     892,   893,   894,   164,  1123,  1116,   167,    35,    30,    -1,
     902,   903,   599,   905,   268,   907,    -1,   909,   910,   464,
      -1,   913,   961,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   739,   740,    -1,    -1,    -1,   291,   403,    -1,
     932,   933,   934,   935,   751,    -1,   753,    -1,   940,    -1,
     942,    -1,    -1,   760,   946,    -1,   763,     2,    -1,   766,
     952,   953,   954,   955,   956,    -1,   431,    12,    -1,    -1,
    1002,    -1,   437,     2,    -1,    -1,    -1,    -1,    -1,   444,
      25,    -1,    27,    12,    -1,   977,   978,   979,   980,   981,
     982,   983,   984,    -1,    -1,    -1,    25,    -1,    27,    -1,
     807,    -1,   248,    -1,   996,    -1,    -1,    -1,    -1,   255,
    1002,    -1,    -1,    -1,    -1,  1007,    46,    -1,    -1,  1011,
      -1,    -1,   214,   215,   216,   217,    -1,    57,    73,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,   502,   392,   393,
      -1,   506,    -1,    35,    73,    37,    38,    -1,    -1,   514,
      42,    -1,    -1,  1085,    -1,   100,    86,    49,    -1,    -1,
     105,  1053,  1054,  1055,  1056,    -1,   258,    -1,    -1,   315,
      -1,   100,   264,    -1,    -1,    -1,   105,    -1,    -1,    71,
      -1,    73,   112,  1075,   330,    -1,    -1,  1079,  1080,   119,
      82,    -1,    84,  1085,    -1,   287,    -1,    -1,    -1,    -1,
      -1,    -1,  1094,  1095,  1096,  1097,  1098,  1099,    -1,    -1,
     140,   103,    -1,   305,   106,   580,    -1,   109,    -1,   473,
    1112,  1113,    -1,  1115,   169,    -1,   480,    -1,    -1,   159,
      -1,   938,    -1,     3,   164,    -1,    -1,   167,    -1,    -1,
     169,   495,    -1,    -1,   498,    -1,   500,    17,    -1,    -1,
      20,   505,    -1,    -1,    -1,    25,  1148,   403,    -1,    -1,
    1152,    -1,    -1,   628,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,     2,    -1,    -1,    -1,
      -1,    51,    -1,   990,   991,   431,    12,   994,   995,    59,
      -1,   437,    -1,    -1,    -1,    -1,    66,    -1,   444,    25,
      -1,    27,    -1,   248,    -1,  1012,    -1,    -1,    -1,    -1,
     255,    81,    -1,  1020,   406,  1022,   681,  1024,    -1,   248,
      -1,    -1,   687,    93,    -1,    -1,   255,    97,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,   597,   436,   599,    -1,    73,   440,   714,
      -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,
     506,    -1,    -1,    -1,   729,   730,    -1,    22,   514,    -1,
     315,    26,    27,    -1,   100,    -1,    -1,    -1,    -1,   105,
      35,    -1,    37,    38,    -1,   330,   315,    42,    -1,   754,
      45,   756,    -1,    -1,    49,    -1,   761,    52,    -1,   764,
      -1,   330,    -1,    -1,    -1,    -1,   771,    -1,    -1,   774,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    22,    73,    -1,
      -1,    26,    27,    78,    -1,  1132,    -1,    82,    -1,    84,
      35,    -1,    37,    38,   799,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,   169,    49,   810,    -1,   812,   103,    -1,
      -1,   106,    -1,   108,   109,    -1,    -1,    -1,   403,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,   403,    80,    -1,    82,    -1,    84,
      -1,    -1,   628,    -1,    -1,    -1,   431,    -1,    -1,    -1,
      -1,    31,   437,     2,    -1,    -1,    -1,    -1,   103,   444,
      -1,   106,   431,    12,   109,    -1,    -1,    -1,   437,    -1,
      -1,    -1,    -1,    -1,    -1,   444,    25,    -1,    27,   611,
     612,    -1,   248,    -1,    -1,   617,   618,    31,    -1,   255,
      -1,    -1,    -1,    -1,    -1,   681,    -1,   902,    -1,    -1,
      -1,   687,    -1,    83,   909,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,   921,   502,    -1,    -1,
     165,   506,    -1,    -1,    73,    -1,    -1,    -1,    -1,   514,
      -1,   936,    -1,   502,    -1,    -1,    -1,   506,    -1,    83,
     945,    -1,    -1,    87,   949,   514,    -1,    -1,    -1,   315,
      -1,   100,    -1,    -1,   134,   135,   105,   137,   138,   139,
      -1,   141,   142,   143,   330,    -1,   146,    -1,   754,    -1,
     756,    -1,    -1,   153,   154,   761,    -1,   157,   764,    -1,
     160,   161,   162,    -1,    -1,   771,    -1,    -1,   774,    -1,
     134,   171,   997,    -1,    -1,   139,    -1,   141,   142,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,   739,   740,    -1,
     154,    -1,    -1,   799,    -1,    -1,   160,   161,   162,   751,
     169,    -1,    -1,    -1,   810,    -1,   812,    -1,    -1,    -1,
      -1,   763,   926,    -1,   766,    -1,    -1,   403,    -1,    -1,
     934,   935,    -1,   628,    -1,    -1,    -1,    -1,  1053,  1054,
    1055,  1056,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   628,
      -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,
      -1,   437,     2,    -1,  1079,  1080,    -1,    -1,   444,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    25,   681,    27,    -1,   248,
      -1,    -1,   687,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,    -1,   681,  1007,    -1,    -1,   902,    -1,   687,    -1,
      -1,    -1,    -1,   909,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   921,   502,    -1,    -1,    -1,
     506,    -1,    -1,    73,    -1,    83,    -1,    -1,   514,    87,
     936,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   945,
      -1,    -1,    -1,   949,    -1,    -1,   315,  1061,    -1,   754,
     100,   756,    -1,    -1,    -1,   105,   761,    -1,    -1,   764,
      -1,   330,    -1,    -1,    -1,   754,   771,   756,    -1,   774,
      -1,    -1,   761,    -1,    -1,   764,   134,   135,    -1,   137,
     138,   139,   771,   141,   142,   774,   938,    -1,   146,    -1,
      -1,   997,    -1,    -1,   799,    -1,   154,    -1,    -1,  1113,
      -1,    -1,   160,   161,   162,   810,    -1,   812,    -1,    -1,
     799,    -1,    -1,    -1,    -1,    -1,     2,    -1,    -1,   169,
      -1,   810,    -1,   812,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,  1152,    25,
      -1,    27,   628,    -1,    -1,    -1,    -1,  1053,  1054,  1055,
    1056,    -1,    -1,    -1,    -1,    -1,     2,    -1,    -1,    -1,
      -1,    -1,   431,    -1,    -1,    -1,    12,    -1,   437,    -1,
      -1,    -1,    -1,  1079,  1080,   444,    -1,    -1,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   681,    -1,   902,   248,    31,
      -1,   687,    -1,    -1,   909,   255,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   902,   100,    -1,   921,    -1,    -1,   105,
     909,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,   936,   921,   502,    -1,    -1,    -1,   506,    -1,    -1,
     945,    -1,    -1,    -1,   949,   514,    -1,   936,    -1,    -1,
      -1,    83,    -1,    -1,   100,    87,   945,    -1,    -1,   105,
     949,    -1,    -1,    -1,    -1,   315,    -1,    -1,   754,    -1,
     756,    -1,    -1,    -1,    -1,   761,    -1,    -1,   764,    -1,
     330,    -1,    -1,   169,    -1,   771,    -1,    -1,   774,    -1,
      -1,    -1,   997,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,   997,   141,
     142,   143,    -1,   799,   146,   147,   148,    -1,    -1,   151,
     152,   153,   154,   169,   810,   157,   812,    -1,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1053,  1054,
    1055,  1056,    -1,   403,    -1,    -1,    -1,    -1,    -1,   628,
      -1,    -1,   248,    -1,  1053,  1054,  1055,  1056,    -1,   255,
      -1,    -1,    -1,    -1,  1079,  1080,    -1,    -1,    -1,    -1,
      -1,   431,    -1,    -1,    -1,    -1,    -1,   437,    -1,    -1,
    1079,  1080,    -1,    31,   444,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   681,    -1,    -1,    -1,   902,    -1,   687,    -1,
      42,    -1,    -1,   909,    -1,    -1,    -1,    -1,    -1,   315,
      -1,    -1,    -1,    -1,    -1,   921,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   330,    83,    -1,    -1,    -1,    87,
     936,    -1,   502,    -1,    -1,    -1,   506,    79,    -1,   945,
      -1,    -1,    -1,   949,   514,    -1,    -1,    -1,    -1,   315,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   330,   754,    -1,   756,    -1,    -1,
      -1,    -1,   761,    -1,    -1,   764,   134,   135,    -1,   137,
     138,   139,   771,   141,   142,   774,    -1,    -1,   146,    -1,
     132,   997,   134,    -1,    -1,   153,   154,   403,     3,   157,
      -1,    -1,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,
     799,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      25,   810,    -1,   812,    -1,   431,    -1,    -1,    33,    -1,
      -1,   437,    -1,    -1,    39,    -1,    -1,   403,   444,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,  1053,  1054,  1055,
    1056,    -1,   194,    -1,    59,    -1,    -1,    -1,   628,    -1,
      65,    66,    -1,    -1,    -1,   431,    -1,    72,   210,    -1,
     212,   437,    -1,  1079,  1080,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,   100,   502,    -1,    -1,   104,
     506,    -1,   107,    -1,    -1,   110,    -1,    -1,   514,   251,
      -1,   681,    -1,   902,    -1,    -1,    -1,   687,    -1,    -1,
     909,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   921,    -1,   276,    -1,   502,    -1,    -1,    -1,
     506,    -1,     1,    -1,    -1,    -1,    -1,   936,   514,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   945,    -1,    -1,   164,
     949,   166,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,    -1,    -1,    42,   754,    -1,   756,    -1,    -1,    -1,
      49,   761,    -1,    52,   764,    -1,    -1,    -1,    -1,    -1,
      -1,   771,    -1,    -1,   774,    -1,    -1,    -1,   997,    -1,
      -1,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    78,
      -1,    80,   628,    82,    -1,    84,    -1,    -1,    -1,   799,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     810,    -1,   812,    -1,   103,    -1,    -1,   106,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   628,    -1,  1053,  1054,  1055,  1056,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   681,    -1,    -1,   420,    -1,
      -1,   687,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1079,  1080,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,    -1,    -1,   165,    -1,    31,    -1,
      -1,    -1,    -1,    -1,   456,   681,    -1,    -1,    -1,    -1,
      -1,   687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   902,    -1,    -1,    -1,    -1,    -1,    -1,   909,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   754,    -1,
     756,   921,    -1,    -1,    -1,   761,    -1,    -1,   764,    -1,
      83,    -1,    -1,    -1,    87,   771,   936,    -1,   774,    -1,
      -1,    -1,    -1,   515,    -1,   945,    -1,    -1,    -1,   949,
      -1,   523,    -1,    -1,    -1,    -1,    -1,    -1,   754,    -1,
     756,    -1,    -1,   799,    -1,   761,    -1,    -1,   764,    -1,
      -1,    -1,    -1,    -1,   810,   771,   812,    -1,   774,    -1,
      -1,   134,   135,    -1,   137,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,    -1,   997,   151,   152,
     153,   154,   155,   799,   157,    -1,    -1,   160,   161,   162,
      -1,    -1,    -1,    -1,   810,    -1,   812,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   600,    -1,
      -1,   603,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    31,  1053,  1054,  1055,  1056,    33,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,   902,    46,    44,    -1,
     642,    -1,    48,   909,   646,    51,    -1,    -1,    -1,  1079,
    1080,    -1,    -1,    59,    -1,   921,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,   669,    -1,    -1,
     936,   673,    -1,    -1,    83,    81,    -1,    -1,    87,   945,
      -1,    -1,    -1,   949,    90,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    -1,   100,   921,    -1,    -1,   104,   105,
      -1,   107,    -1,    -1,   110,   114,    -1,    -1,    -1,   118,
     936,    -1,   714,    -1,    -1,    -1,    -1,    -1,    -1,   945,
      -1,    -1,    -1,   949,    -1,   134,   135,    -1,   137,   138,
     139,   997,   141,   142,   143,    -1,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
     166,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   997,    -1,    -1,   776,    -1,    -1,   779,    -1,    -1,
     782,    -1,    -1,    -1,    -1,    -1,    -1,  1053,  1054,  1055,
    1056,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   804,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1079,  1080,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   828,    -1,    -1,    -1,
      -1,     0,     1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,   854,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    98,
      -1,   100,   101,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,   973,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
     159,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,
      -1,     1,   171,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,    -1,
     100,   101,   102,   103,   104,    -1,   106,   107,   108,   109,
     110,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,    -1,   168,    -1,
       1,   171,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    -1,   100,
     101,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,   159,    -1,
      -1,   162,    -1,   164,   165,   166,    -1,   168,    -1,     1,
     171,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,   108,   109,   110,    -1,
      -1,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,   159,    -1,    -1,
     162,    -1,   164,   165,   166,    -1,   168,    -1,     1,   171,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    97,    98,    -1,   100,   101,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,    -1,
     113,    -1,   115,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,   159,    -1,    -1,   162,
      -1,   164,   165,   166,    -1,   168,    -1,     1,   171,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    -1,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,    -1,   113,
      -1,   115,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,   159,    -1,    -1,   162,    -1,
     164,   165,   166,    -1,   168,    -1,     1,   171,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    97,    98,    -1,   100,   101,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,    -1,    -1,   113,    -1,
     115,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,   159,    -1,    -1,   162,    -1,   164,
     165,   166,    -1,   168,    -1,     1,   171,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    49,    -1,    51,    52,    -1,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    -1,   100,   101,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,    -1,   113,    -1,   115,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,   159,    -1,    -1,   162,    -1,   164,    -1,
     166,    -1,   168,    -1,     1,   171,     3,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      97,    98,    -1,   100,   101,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,    -1,    -1,   113,    -1,   115,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,   159,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,    -1,     1,   171,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    97,
      98,    -1,   100,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,    -1,   113,    -1,   115,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,   159,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,    -1,     1,   171,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    98,
      -1,   100,   101,   102,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
     159,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,
      -1,     1,   171,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,    -1,
     100,   101,   102,   103,   104,    -1,   106,   107,   108,   109,
     110,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,   159,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,
       1,   171,     3,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    -1,   100,
     101,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,   159,    -1,
      -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,     1,
     171,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,   108,   109,   110,    -1,
      -1,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,   159,    -1,    -1,
     162,    -1,   164,    -1,   166,    -1,   168,    -1,     1,   171,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    97,    98,    -1,   100,   101,   102,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,    -1,
     113,    -1,   115,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,   159,    -1,    -1,   162,
      -1,   164,    -1,   166,    -1,   168,    -1,     1,   171,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    98,    -1,   100,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,    -1,   113,
      -1,   115,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,   159,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,     1,   171,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    97,    98,    -1,   100,   101,   102,   103,   104,
      -1,   106,   107,   108,   109,   110,    -1,    -1,   113,    -1,
     115,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,   159,    -1,    -1,   162,    -1,   164,
      -1,   166,    -1,   168,    -1,     1,   171,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    49,    -1,    51,    52,    -1,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    -1,   100,   101,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,    -1,   113,    -1,   115,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,   159,    -1,    -1,   162,    -1,   164,    -1,
     166,    -1,   168,    -1,     1,   171,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,   169,     1,   171,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,    -1,     3,   171,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,   107,    -1,   109,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,
     171,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    -1,    97,    -1,    -1,   100,   101,
     102,    -1,   104,   105,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,   164,    -1,   166,    -1,   168,    -1,    -1,   171,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    -1,    97,    -1,    -1,   100,   101,   102,
      -1,   104,   105,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,
      -1,   164,    -1,   166,   167,   168,    -1,    -1,   171,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,   101,   102,    -1,
     104,   105,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,   167,   168,    -1,     3,   171,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
     107,    -1,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,    -1,     3,   171,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    -1,
     100,   101,   102,    -1,   104,    -1,    -1,   107,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,   159,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
     101,   102,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,
     171,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,   101,   102,    -1,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,     3,   171,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,   103,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,    -1,     3,   171,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,   116,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,
     171,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,   101,   102,    -1,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,    -1,   171,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,
     165,   166,    -1,   168,    -1,    -1,   171,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,
     166,    -1,   168,   169,    -1,   171,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,   169,     3,   171,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,
       3,   171,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,
      -1,   164,    -1,   166,    -1,   168,    -1,    -1,   171,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,     3,   171,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,   103,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,    -1,     3,   171,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,   169,
       3,   171,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,
      -1,   164,    -1,   166,    -1,   168,    -1,    -1,   171,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,     3,   171,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,   105,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,    -1,    -1,   171,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,    -1,    -1,   171,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
      -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,
      -1,     3,   171,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,   171,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,
      -1,   166,    -1,   168,    -1,     3,   171,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,    -1,     3,   171,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,
     171,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,     3,   171,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,
      -1,   168,    -1,     3,   171,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,
       3,   171,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,
      -1,   164,    -1,   166,    -1,   168,    -1,     3,   171,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
     156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,    -1,
     166,    -1,   168,    -1,     3,   171,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,   158,
      -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,   168,
      -1,     3,   171,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,
      62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,   171,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,   164,
      -1,   166,    -1,   168,    -1,     3,   171,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    -1,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,   164,    -1,   166,    -1,
     168,    -1,     3,   171,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,   164,    -1,   166,    -1,   168,    -1,     3,
     171,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    62,    63,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
     164,    -1,   166,    -1,   168,    -1,     3,   171,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    12,   143,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,   153,    -1,    25,   156,
     157,   158,    -1,    -1,    -1,   162,    33,    -1,    35,   166,
      -1,   168,    39,    -1,   171,    -1,    -1,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    93,    -1,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,    -1,    -1,
     127,   128,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,   138,    -1,    -1,   141,    -1,    -1,    -1,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,    -1,    -1,   160,   161,   162,   163,    -1,     3,   166,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    -1,    62,    63,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,    -1,   107,    -1,    -1,   110,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,   163,   157,   158,   166,    -1,   168,   162,    -1,   164,
      -1,   166,    -1,   168,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,   140,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,    -1,   164,    -1,   166,   167,   168,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    -1,    97,    -1,    99,   100,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,   136,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,   158,   159,    -1,    -1,    -1,
      -1,   164,    33,   166,    35,   168,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,     3,   136,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,   163,    25,   158,   166,    -1,
     168,    -1,    -1,   164,    33,   166,    35,   168,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,   136,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,   158,
      -1,    -1,    -1,    -1,    -1,   164,    33,   166,    35,   168,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    -1,
      97,    17,    18,   100,    20,    -1,    -1,   104,    -1,    25,
     107,    -1,    -1,   110,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,     3,    -1,   136,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,
      66,    17,    18,    -1,    20,    -1,    72,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    33,    -1,   166,
      -1,   168,    -1,    39,    90,    91,    -1,    93,    44,    95,
      -1,    97,    48,    -1,   100,    51,    -1,    -1,   104,    -1,
      -1,   107,    -1,    59,   110,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,     3,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    12,    -1,
     166,    -1,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    -1,    22,    -1,    -1,    -1,    26,    27,    33,
      -1,    -1,    -1,    -1,    -1,    39,    35,    -1,    37,    38,
      44,    -1,    -1,    42,    48,    -1,    -1,    51,    -1,    53,
      49,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
     166,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    71,    -1,    73,    -1,    75,    81,    77,    -1,
      -1,    80,    -1,    82,    -1,    84,    90,    91,    -1,    93,
      12,    95,    -1,    97,    -1,    -1,   100,    19,    -1,    -1,
     104,    -1,    -1,   107,   103,    -1,   110,   106,    -1,    31,
     109,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     124,    -1,    -1,   127,   128,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,   141,    -1,    -1,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,   157,    -1,    -1,   160,   161,   162,   163,
     159,    83,    -1,    -1,    -1,    87,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,   121,
     122,   123,   124,    -1,    -1,   127,   128,   129,   130,    -1,
     132,   133,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,    83,   160,   161,
     162,    87,   164,    -1,    -1,    -1,    12,    -1,    -1,   171,
      96,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,   127,   128,   129,   130,    -1,   132,   133,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,   160,   161,   162,    83,   164,    -1,
      -1,    87,    12,    -1,    -1,   171,    -1,    -1,    -1,    19,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,   127,   128,   129,   130,    -1,   132,   133,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    83,   160,   161,   162,    87,   164,    -1,
      -1,    -1,    12,    -1,    -1,   171,    96,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,   127,   128,   129,
     130,    -1,   132,   133,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,   161,   162,    83,   164,    -1,    -1,    87,    12,    -1,
      -1,   171,    -1,    -1,    -1,    19,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,   127,   128,   129,
     130,    -1,   132,   133,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    83,
     160,   161,   162,    87,   164,    -1,    -1,    -1,    12,    -1,
      -1,   171,    96,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,   120,   121,   122,   123,
     124,    -1,    -1,   127,   128,   129,   130,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,   161,   162,    83,
     164,    -1,    -1,    87,    12,    -1,    -1,   171,    -1,    -1,
      -1,    19,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,   120,   121,   122,   123,
     124,    -1,    -1,   127,   128,   129,   130,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    83,   160,   161,   162,    87,
     164,    -1,    -1,    -1,    12,    -1,    -1,   171,    96,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,   120,   121,   122,   123,   124,    -1,    -1,   127,
     128,   129,   130,    -1,   132,   133,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    -1,   160,   161,   162,    83,   164,    -1,    -1,    87,
      -1,    -1,    -1,   171,    12,    -1,    -1,    -1,    96,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
     118,   119,   120,   121,   122,   123,   124,    -1,    46,   127,
     128,   129,   130,    -1,   132,   133,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    -1,   160,   161,   162,    83,   164,    -1,    -1,    87,
      12,    -1,    -1,   171,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    83,   160,   161,   162,    87,   164,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    68,    -1,   160,   161,
     162,    -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    68,   159,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    83,    -1,    -1,    -1,    87,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    -1,    83,   160,   161,
     162,    87,    -1,    -1,    -1,    -1,    12,    -1,    -1,   171,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,   114,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,   160,   161,   162,    83,   164,    -1,
      -1,    87,    12,    -1,    -1,   171,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,    83,   160,   161,   162,    87,   164,    -1,
      -1,    -1,    12,    -1,    -1,   171,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,   161,   162,    83,    -1,    -1,    -1,    87,    12,    -1,
      -1,   171,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    83,
     160,   161,   162,    87,    -1,    -1,    -1,    -1,    12,    -1,
      -1,   171,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,   161,   162,    83,
     164,    -1,    -1,    87,    12,    -1,    -1,   171,    -1,    -1,
      -1,    19,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    83,   160,   161,   162,    87,
     164,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
     118,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      68,    12,   160,   161,   162,    -1,    -1,    -1,    19,    -1,
      -1,   169,    -1,   171,    -1,    83,    -1,    -1,    -1,    87,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    83,   141,   142,   143,    87,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      12,    -1,   160,   161,   162,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,   118,    -1,    31,
      -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   118,    -1,   160,
     161,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    83,    -1,   134,   135,    87,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,    12,   159,   160,
     161,   162,    -1,    -1,    19,    -1,   118,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,    12,   159,   160,   161,
     162,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    83,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    83,    -1,   134,
     135,    87,   137,   138,   139,    -1,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    12,   159,   160,   161,   162,   117,   118,    19,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    12,    -1,
     160,   161,   162,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,   161,   162,    -1,   118,    -1,    -1,    -1,    -1,    83,
      -1,   171,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   118,    -1,   160,   161,   162,    -1,
      -1,    12,    -1,   167,    -1,    -1,    -1,   171,    19,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      31,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,   171,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    -1,   134,   135,    -1,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   114,   160,
     161,   162,   118,    -1,    -1,    -1,    -1,    83,    -1,    -1,
     171,    87,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   118,    -1,   160,   161,   162,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,   171,    19,    -1,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,    31,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,    -1,   159,   160,   161,   162,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   171,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,    -1,   137,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   118,    -1,   160,   161,   162,
      83,    -1,    -1,    -1,    87,    -1,    -1,    -1,   171,    -1,
      -1,   134,   135,    -1,   137,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   118,    -1,   160,   161,   162,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,   171,    19,
      -1,   134,   135,    -1,   137,   138,   139,    -1,   141,   142,
     143,    31,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,    -1,    -1,   160,   161,   162,
      -1,    -1,    -1,    12,   167,    -1,    -1,    -1,   171,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   117,   118,
     160,   161,   162,    -1,    83,    -1,    -1,   167,    87,    -1,
      -1,   171,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,    -1,   141,   142,   143,    -1,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   118,
      -1,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,   134,   135,    -1,   137,   138,
     139,    -1,   141,   142,   143,    -1,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,    12,
       3,   160,   161,   162,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    17,    18,    -1,    20,    31,    32,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    12,
      -1,    44,    -1,    -1,    -1,    48,    19,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    31,    -1,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      83,    -1,    -1,    -1,    87,    -1,    -1,    -1,    81,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    31,    -1,
      -1,   104,    -1,    -1,   107,   118,    -1,   110,    -1,    -1,
      83,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,    -1,   137,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   118,    -1,   160,   161,   162,
      83,    -1,    -1,    -1,    87,    -1,    -1,    -1,   171,    -1,
      -1,   134,   135,    -1,   137,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   118,    -1,   160,   161,   162,
      -1,    -1,    12,    -1,    -1,    -1,   169,    -1,   171,    19,
      -1,   134,   135,    -1,   137,   138,   139,    -1,   141,   142,
     143,    31,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,    -1,    -1,   160,   161,   162,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,   171,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    96,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    96,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   118,    -1,
     160,   161,   162,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,   171,    -1,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   118,    -1,
     160,   161,   162,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,   171,    19,    -1,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,    31,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,   161,   162,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,   171,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,
     137,   138,   139,    -1,   141,   142,   143,    -1,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   118,    -1,   160,   161,   162,    -1,    -1,    12,    -1,
     167,    -1,    -1,    -1,   171,    19,    -1,   134,   135,    -1,
     137,   138,   139,    -1,   141,   142,   143,    31,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,    -1,    -1,   160,   161,   162,    -1,    -1,    12,    -1,
      -1,    -1,   169,    -1,   171,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    96,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    96,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   118,    -1,   160,   161,   162,    83,
      -1,    -1,    -1,    87,    -1,    -1,    -1,   171,    -1,    -1,
     134,   135,    96,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   118,    -1,   160,   161,   162,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   171,    19,    -1,
     134,   135,    -1,   137,   138,   139,    -1,   141,   142,   143,
      31,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   171,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    96,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,    96,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   118,    -1,   160,
     161,   162,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,
     171,    -1,    -1,   134,   135,    96,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   118,    -1,   160,
     161,   162,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
     171,    19,    -1,   134,   135,    -1,   137,   138,   139,    -1,
     141,   142,   143,    31,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
     161,   162,    -1,    -1,    12,    -1,    -1,    -1,    -1,    57,
     171,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     118,    -1,   160,   161,   162,    83,    -1,    -1,    -1,    87,
      -1,    -1,    -1,   171,    -1,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     118,    -1,   160,   161,   162,    -1,    -1,    12,    -1,    -1,
      -1,   169,    -1,   171,    19,    -1,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,    31,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    22,   160,   161,   162,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    35,    -1,    37,    38,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,    80,
      -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,   106,    -1,    -1,   109,   134,
     135,    -1,   137,   138,   139,    -1,   141,   142,   143,    -1,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,    -1,    22,   160,   161,   162,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    35,    -1,    37,
      38,    -1,    22,    -1,    42,    -1,    26,    27,   159,    -1,
      -1,    49,    -1,    -1,   165,    35,    -1,    37,    38,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    80,    31,    82,    -1,    84,    -1,    -1,    -1,
      -1,    71,    -1,    73,    22,    75,    -1,    77,    26,    27,
      80,    -1,    82,    -1,    84,   103,    -1,    35,   106,    37,
      38,   109,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,   103,    -1,    -1,   106,    -1,    -1,   109,
      -1,    -1,    31,    -1,    -1,    83,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
     118,    -1,    -1,    -1,    -1,   103,    -1,    -1,   106,   159,
      -1,   109,    -1,    -1,    83,   165,   134,   135,    87,   137,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
     148,    -1,    -1,   151,   152,   153,   154,   155,   156,   157,
      -1,    -1,   160,   161,   162,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,   134,   135,   165,   137,   138,
     139,    -1,   141,   142,   143,    -1,   145,   146,   147,   148,
      -1,    -1,   151,   152,   153,   154,   155,     1,   157,     3,
      -1,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   171,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    17,    18,    -1,    20,    -1,    72,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    81,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    90,    91,    -1,    93,
      44,    95,    -1,    97,    48,    -1,   100,    51,    -1,     3,
     104,    -1,    -1,   107,    -1,    59,   110,    -1,    -1,    -1,
      -1,    65,    66,    17,    18,    -1,    20,    -1,    72,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    81,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    90,    91,    -1,    93,
      44,    95,    -1,    97,    48,    -1,   100,    51,    -1,     3,
     104,    -1,    -1,   107,    -1,    59,   110,    -1,    -1,    -1,
      -1,    65,    66,    17,    18,    -1,    20,    -1,    72,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    81,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    90,    91,    -1,    93,
      44,    95,    -1,    97,    48,    -1,   100,    51,    -1,     3,
     104,    -1,    -1,   107,    -1,    59,   110,    -1,    -1,    -1,
      -1,    65,    66,    17,    18,    -1,    20,    -1,    72,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    81,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    90,    91,    -1,    93,
      44,    95,    -1,    97,    48,    -1,   100,    51,    -1,     3,
     104,    -1,    -1,   107,    -1,    59,   110,    -1,    -1,    -1,
      -1,    65,    66,    17,    18,    -1,    20,    -1,    72,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    81,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    90,    91,    -1,    93,
      44,    95,    -1,    97,    48,    -1,   100,    51,    -1,    -1,
     104,    -1,    -1,   107,    -1,    59,   110,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,    -1,   107,    -1,    -1,   110
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   176,   177,     0,     1,     3,     5,     6,     7,     8,
       9,    10,    14,    15,    16,    17,    18,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    33,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    47,    48,
      49,    51,    54,    55,    56,    58,    59,    60,    62,    63,
      65,    66,    67,    71,    72,    73,    74,    75,    76,    77,
      80,    81,    82,    84,    85,    86,    88,    89,    90,    91,
      92,    93,    94,    95,    97,    98,   100,   101,   102,   103,
     104,   106,   107,   109,   110,   113,   115,   118,   134,   135,
     136,   137,   138,   143,   153,   156,   157,   158,   159,   162,
     164,   166,   168,   171,   178,   179,   180,   181,   182,   183,
     186,   188,   194,   195,   196,   199,   200,   204,   206,   209,
     210,   212,   213,   214,   219,   220,   222,   223,   224,   228,
     229,   232,   233,   236,   237,   240,   243,   244,   269,   272,
     273,   293,   294,   295,   296,   297,   298,   299,   307,   308,
     309,   310,   311,   314,   315,   316,   317,   318,   319,   320,
     322,   323,   324,   325,   326,   159,   180,   311,   114,   300,
     301,     3,   201,    14,    22,    35,    40,    41,    43,    82,
      95,   164,   168,   240,   293,   298,   309,   310,   311,   314,
     316,   317,   300,   311,   103,   272,    84,   201,   180,   287,
     311,   180,   166,     8,    82,   311,   312,     8,    11,    82,
     103,   312,    73,   116,   221,   311,   221,   311,    26,   273,
     311,   311,   187,   166,     3,    17,    18,    20,    25,    33,
      39,    44,    48,    51,    59,    65,    66,    72,    81,    90,
      91,    93,    95,    97,   100,   104,   107,   110,   203,   205,
     241,   166,   203,   274,   275,    32,   188,   208,   311,   311,
      18,    72,    90,   107,   311,   311,   311,     8,   166,   211,
      22,    35,    38,    82,   212,     4,   158,   263,   286,   311,
     101,   102,   159,   311,   313,   311,   208,   311,   311,   311,
      94,   166,   180,   311,   311,   188,   200,   311,   314,   188,
     200,   311,   203,   270,   311,   311,   311,   311,   311,   311,
     311,   311,     1,   165,   178,   189,   286,   105,   144,   263,
     288,   289,   313,   221,   286,   311,   321,   311,    75,   180,
     164,    79,   184,    45,   108,   203,   203,    52,    78,   258,
     274,   158,   159,   150,   311,    12,    19,    31,    83,    87,
     118,   134,   135,   137,   138,   139,   141,   142,   143,   145,
     146,   147,   148,   149,   151,   152,   153,   154,   155,   156,
     157,   160,   161,   162,   171,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     163,   250,   166,   168,    83,    87,   166,   180,   159,   311,
     311,   311,   286,   164,   188,    46,   300,   270,   274,   159,
     140,   159,   113,   204,   263,   290,   291,   292,   313,    82,
     217,   244,   272,    82,   215,   270,   244,   272,   203,   166,
     208,    32,    46,   208,   114,   208,   303,    32,    46,   208,
     303,    36,    68,   159,    96,   119,   188,   250,    77,    80,
     185,   290,   180,   166,   252,   105,   166,   203,   276,   277,
       1,   139,   281,    46,   140,   180,   208,   166,   166,   208,
     290,   212,   203,   140,   159,   311,   311,   159,   164,   208,
     166,   290,   159,   225,   159,   225,   159,   119,   271,   159,
     208,   159,   165,   165,   178,   140,   165,   311,   140,   167,
     140,   167,   169,   303,    46,   140,   169,   303,   117,   140,
     169,     8,     1,   165,   189,    61,   197,   198,   311,   191,
     311,   139,   234,   164,   245,   159,   311,   311,   311,   311,
     221,   311,   221,   311,   311,   311,   311,   311,   311,   311,
      20,    33,    59,   103,   204,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,    64,   313,   313,   313,   313,   313,   290,   290,
     221,   311,   221,   311,    27,    46,    84,   109,   302,   305,
     306,   311,   326,    32,    46,    32,    46,    96,    46,   169,
     221,   311,   208,   159,   159,   311,   311,   119,   167,   140,
     218,   203,   274,   216,   203,   159,   274,    46,   286,    43,
     311,   221,   311,   166,   208,    43,   311,   221,   311,   208,
     162,   190,   193,   311,   190,   192,   180,   311,    34,   311,
     184,   167,    27,    46,    50,    70,    73,    84,   103,   179,
     253,   254,   255,   256,   242,   277,   140,   167,    33,    48,
      91,    95,   168,   207,   282,   294,   119,   278,   311,   275,
     311,   311,   167,   263,   311,     1,   230,   290,   167,    21,
     226,   282,   294,   140,   165,   167,   167,   288,   167,   288,
     180,   169,   221,   311,   169,   180,   311,   169,   311,   169,
     311,   165,   165,   203,   140,   159,    13,   142,   140,   159,
      13,    36,    68,   286,   164,     1,   203,   238,   239,    27,
      73,    84,   103,   247,   257,   166,   159,   159,   159,   159,
     159,   159,   167,   169,    46,    84,   140,   167,   293,    83,
      83,    43,   221,   311,    43,   221,   311,   221,   311,   300,
     300,   159,   263,   313,   292,   203,   234,   159,   203,   234,
     159,   311,   167,   311,    32,   208,    32,   208,   304,   305,
     311,    32,   208,   303,    32,   208,   303,   140,   159,    13,
     159,    34,    34,   180,    96,   188,    61,    46,    84,   255,
     140,   167,   166,   203,    27,    73,    84,   103,   259,   167,
     277,   281,     1,   286,    64,   313,   167,   167,   165,    69,
     111,   165,   231,   167,   166,   188,   203,   227,   270,   180,
     169,   303,   169,   303,   180,   117,   197,   204,   164,   311,
     105,   311,   193,   192,     1,   235,   165,   119,   140,   165,
      84,   246,     1,     3,    12,    17,    19,    20,    25,    39,
      44,    51,    53,    59,    65,    66,    81,    93,    97,   100,
     104,   110,   134,   135,   136,   137,   138,   141,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   157,
     160,   161,   162,   163,   166,   202,   203,   205,   248,   249,
     250,   293,   167,   305,   281,   293,   293,   311,    32,    32,
     311,    32,    32,   169,   169,   208,   208,   234,   164,   234,
     164,   208,    96,    43,   311,    43,   311,   140,   167,    96,
      43,   311,   208,    43,   311,   208,   311,   311,   180,   311,
     180,    34,   203,   203,   254,   277,   139,   285,    84,   281,
     278,   169,    46,   169,   166,   166,    32,   180,   286,   227,
     139,   188,    43,   180,   311,   169,    43,   180,   311,   169,
     311,   190,    13,    36,    68,    36,    68,   159,   159,   165,
      77,    80,   165,   179,   210,   311,   239,   259,   166,   251,
     203,   311,   134,   142,   251,   251,   278,    96,    43,    43,
      96,    43,    43,    43,    43,   164,   235,   164,   235,   311,
     311,   311,   305,   311,   311,   311,    13,    34,   180,   159,
     285,   167,   168,   207,   263,   284,   294,   144,   264,   278,
      57,   112,   265,   311,   282,   294,   290,   290,   180,   208,
     167,   311,   311,   180,   311,   180,   165,   105,   311,   193,
     192,   193,   192,   210,     1,   139,   280,   253,   167,     3,
      97,   249,   250,   311,   311,   311,   311,   311,   311,   235,
     165,   235,   165,    96,    96,    96,    96,   311,   180,   278,
     285,   169,   286,   263,   311,     3,    86,    97,   266,   267,
     268,   311,   188,   209,   262,   169,   167,   167,   188,    96,
      96,   159,   159,   159,   159,   168,   207,   279,   294,    99,
     260,   167,   251,   251,    96,    96,    96,    96,    96,    96,
     165,   165,   311,   311,   311,   311,   264,   278,   263,   283,
     284,   294,    46,   169,   268,   112,   140,   119,   145,   147,
     148,   151,   152,    57,   294,   158,   158,   311,   311,     1,
     169,   286,   265,   311,   283,   284,   311,   267,   268,   268,
     268,   268,   268,   268,   266,   169,   279,   294,   169,   159,
     261,   262,   169,   279,   294,   283
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   175,   176,   177,   177,   178,   178,   179,   179,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   181,   182,   182,   182,   183,   183,   183,   184,   184,
     185,   185,   185,   187,   186,   188,   188,   188,   189,   189,
     190,   190,   190,   190,   191,   191,   191,   191,   191,   191,
     192,   192,   193,   193,   194,   194,   194,   195,   195,   195,
     195,   195,   195,   195,   196,   197,   197,   197,   198,   198,
     199,   200,   200,   200,   200,   200,   200,   201,   201,   202,
     202,   202,   202,   202,   202,   203,   203,   203,   203,   203,
     203,   204,   204,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   207,   207,   207,   207,   208,   208,
     209,   209,   210,   210,   210,   211,   210,   212,   212,   212,
     212,   212,   212,   212,   213,   213,   213,   213,   215,   214,
     216,   214,   217,   214,   218,   214,   214,   214,   214,   214,
     219,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   221,   222,   222,
     222,   222,   222,   222,   222,   222,   223,   224,   224,   224,
     224,   224,   224,   225,   225,   226,   226,   226,   227,   227,
     228,   229,   229,   230,   230,   231,   231,   231,   232,   232,
     233,   233,   233,   234,   234,   235,   235,   235,   236,   236,
     237,   238,   238,   238,   239,   239,   241,   242,   240,   243,
     243,   243,   245,   246,   244,   247,   247,   247,   247,   247,
     248,   248,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   251,   251,   252,   253,   253,   253,   254,   254,
     254,   254,   254,   255,   255,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   257,   257,   257,   257,   257,   257,
     258,   258,   259,   259,   259,   259,   259,   259,   260,   260,
     261,   261,   262,   262,   263,   263,   264,   264,   264,   265,
     265,   265,   265,   265,   266,   266,   267,   267,   267,   267,
     267,   267,   267,   268,   268,   269,   269,   269,   270,   270,
     271,   271,   271,   272,   272,   272,   272,   272,   273,   273,
     274,   274,   275,   275,   276,   276,   276,   277,   277,   277,
     278,   278,   278,   279,   279,   279,   279,   279,   279,   279,
     280,   280,   280,   280,   280,   281,   281,   281,   281,   281,
     282,   282,   282,   282,   283,   283,   283,   284,   284,   284,
     284,   284,   285,   285,   285,   285,   285,   286,   286,   286,
     286,   287,   287,   288,   288,   288,   289,   289,   290,   290,
     291,   291,   292,   292,   292,   292,   293,   293,   294,   294,
     294,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     297,   298,   299,   299,   299,   299,   299,   299,   299,   299,
     300,   300,   301,   302,   302,   303,   304,   304,   305,   305,
     305,   306,   306,   306,   306,   306,   306,   307,   307,   308,
     308,   308,   308,   308,   309,   309,   309,   309,   309,   309,
     309,   310,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   312,   312,
     313,   313,   313,   314,   314,   314,   314,   315,   315,   315,
     315,   316,   316,   316,   317,   317,   317,   317,   317,   318,
     318,   318,   318,   319,   319,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   321,
     321,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   323,   323,   323,   323,   323,   323,
     323,   324,   324,   324,   324,   325,   325,   325,   325,   326,
     326,   326,   326,   326,   326,   326
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     2,     2,     3,
       2,     4,     3,     4,     4,     0,     1,     1,     0,     1,
       0,     1,     1,     0,     7,     2,     3,     3,     1,     2,
       1,     3,     3,     5,     1,     3,     3,     3,     5,     5,
       0,     1,     1,     1,     0,     1,     1,     4,     6,     8,
       8,     6,     8,     8,     4,     1,     3,     5,     1,     3,
       3,     4,     4,     4,     4,     4,     4,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     3,     1,     1,     2,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     5,     5,     2,     0,     8,
       0,     9,     0,     8,     0,     9,     3,     3,     5,     5,
       2,     5,     3,     6,     6,     4,     5,     5,     3,     3,
       6,     5,     6,     5,     6,     3,     4,     3,     4,     6,
       7,     6,     7,     4,     5,     4,     5,     4,     4,     3,
       6,     5,     6,     5,     8,     7,     2,     3,     3,     2,
       2,     3,     3,     0,     2,     2,     3,     5,     1,     3,
       3,     5,     5,     0,     2,     3,     2,     3,     6,     6,
       1,     1,     1,     0,     2,     0,     2,     3,     5,     5,
       1,     1,     2,     3,     1,     3,     0,     0,     8,     0,
       1,     1,     0,     0,    10,     3,     3,     5,     5,     3,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     3,     0,     1,     3,     4,     5,
       4,     6,     6,     0,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     0,     1,     2,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     0,
       2,     2,     4,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     3,     4,     4,     2,     4,
       0,     2,     2,     1,     1,     1,     2,     1,     4,     3,
       1,     3,     3,     5,     1,     1,     3,     1,     2,     3,
       0,     2,     2,     3,     2,     4,     3,     3,     4,     3,
       0,     2,     2,     2,     1,     0,     2,     2,     2,     1,
       4,     4,     6,     3,     0,     1,     1,     3,     4,     3,
       4,     6,     0,     2,     2,     2,     2,     1,     1,     3,
       3,     1,     3,     1,     1,     1,     3,     3,     0,     1,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     4,
       5,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     6,     6,     4,     9,     9,     7,     6,
       6,     4,     9,     9,     7,     4,     6,     6,     9,     9,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     4,     1,     3,     4,     1,     3,     4,     3,
       3,     1,     1,     2,     1,     2,     1,     1,     3,     1,
       2,     2,     2,     2,     2,     8,     8,     9,     9,     5,
       5,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     3,     2,     2,     2,     1,     0,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     4,     4,     4,     3,     3,     3,     3,     5,     3,
       4,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     4,     3,     4,     3,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParserContext* context)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}



struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;
    /* Used to determine if this is the first time this instance has
       been used.  */
    int yynew;
  };

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = (yypstate *) malloc (sizeof *yyps);
  if (!yyps)
    return YY_NULLPTR;
  yyps->yynew = 1;
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
#ifndef yyoverflow
  /* If the stack was reallocated but the parse did not complete, then the
     stack still needs to be freed.  */
  if (!yyps->yynew && yyps->yyss != yyps->yyssa)
    YYSTACK_FREE (yyps->yyss);
#endif
  free (yyps);
}

#define yynerrs yyps->yynerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yyerror_range yyps->yyerror_range
#define yystacksize yyps->yystacksize


/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps, int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, ParserContext* context)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  if (!yyps->yynew)
    {
      yyn = yypact[yystate];
      goto yyread_pushed_token;
    }

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = *yypushed_loc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 506 "chapel.ypp" /* yacc.c:1663  */
    { yyblock = (yyval.pblockstmt); }
#line 6213 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 3:
#line 511 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
#line 6219 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 4:
#line 512 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 6225 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 6:
#line 519 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 6231 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 7:
#line 524 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 6237 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 8:
#line 525 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 6243 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 25:
#line 546 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 6249 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 26:
#line 547 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 6255 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 27:
#line 548 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 6261 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 28:
#line 549 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 6267 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 29:
#line 550 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 6273 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 30:
#line 551 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 6279 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 31:
#line 552 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildDeleteStmt((yyvsp[-1].pcallexpr)); }
#line 6285 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 32:
#line 553 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 6291 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 33:
#line 554 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6297 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 34:
#line 555 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 6303 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 35:
#line 556 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6309 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 36:
#line 557 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6315 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 37:
#line 558 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 6321 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 38:
#line 559 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 6327 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 39:
#line 560 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 6333 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 40:
#line 561 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 6339 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 41:
#line 566 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pmodsymbol) = buildModule((yyvsp[0].pch), currentModuleType, NULL, yyfilename, (yyvsp[-3].b), (yyvsp[-2].b), (yylsp[-3]).comment);
      // store previous module name in order to restore it once we're
      // done with this module in module_decl_stmt below.  Ultimately,
      // we will need to store a stack of module names in order to
      // support full module path resolution of -s config flags.
      (yyloc).prevModule = currentModuleName;
      currentModuleName = (yyvsp[0].pch);
    }
#line 6353 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 42:
#line 579 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-2].pmodsymbol)->block = new BlockStmt();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-2].pmodsymbol)));
      currentModuleName = (yylsp[-2]).prevModule;  // restore previous module name
    }
#line 6362 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 43:
#line 584 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-3].pmodsymbol)->block = (yyvsp[-1].pblockstmt);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 6371 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 44:
#line 589 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-3].pmodsymbol)->block = buildErrorStandin();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 6380 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 45:
#line 596 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6386 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 46:
#line 597 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6392 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 47:
#line 598 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6398 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 48:
#line 602 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = false; }
#line 6404 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 49:
#line 603 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = true;  }
#line 6410 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 50:
#line 607 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = false; }
#line 6416 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 51:
#line 608 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = false; }
#line 6422 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 52:
#line 609 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = true; }
#line 6428 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 53:
#line 614 "chapel.ypp" /* yacc.c:1663  */
    {
    (yylsp[0]).comment = context->latestComment;
    context->latestComment = NULL;
  }
#line 6437 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 54:
#line 619 "chapel.ypp" /* yacc.c:1663  */
    {
   (yyval.pblockstmt) = buildIncludeModule((yyvsp[-1].pch), (yyvsp[-4].b), (yyvsp[-3].b), (yylsp[-6]).comment);
 }
#line 6445 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 55:
#line 634 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 6451 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 56:
#line 635 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 6457 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 57:
#line 636 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 6463 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 58:
#line 641 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 6469 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 59:
#line 642 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 6475 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 60:
#line 647 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 6485 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 61:
#line 652 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 6495 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 62:
#line 657 "chapel.ypp" /* yacc.c:1663  */
    { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 6504 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 63:
#line 661 "chapel.ypp" /* yacc.c:1663  */
    { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 6513 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 64:
#line 670 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 6523 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 65:
#line 675 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 6533 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 66:
#line 680 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyval.ponlylist)->push_back(cur); }
#line 6543 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 67:
#line 685 "chapel.ypp" /* yacc.c:1663  */
    { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 6552 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 68:
#line 689 "chapel.ypp" /* yacc.c:1663  */
    { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 6561 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 69:
#line 693 "chapel.ypp" /* yacc.c:1663  */
    { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 6570 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 70:
#line 701 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 6580 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 72:
#line 710 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 6590 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 74:
#line 719 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = true; }
#line 6596 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 75:
#line 720 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = false; }
#line 6602 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 76:
#line 721 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = true; }
#line 6608 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 77:
#line 725 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].ponlylist), (yyvsp[-3].b)); }
#line 6614 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 78:
#line 726 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), true, (yyvsp[-5].b)); }
#line 6620 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 79:
#line 727 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 6626 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 80:
#line 728 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 6632 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 81:
#line 729 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), false, (yyvsp[-5].b)); }
#line 6638 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 82:
#line 730 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 6644 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 83:
#line 731 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 6650 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 84:
#line 735 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);
                                               setImportPrivacy((yyval.pblockstmt), (yyvsp[-3].b));}
#line 6657 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 85:
#line 740 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pimportstmt) = buildImportStmt((yyvsp[0].pexpr)); }
#line 6663 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 86:
#line 741 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pimportstmt) = buildImportStmt((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 6669 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 87:
#line 742 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pimportstmt) = buildImportStmt((yyvsp[-4].pexpr), (yyvsp[-1].ponlylist)); }
#line 6675 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 88:
#line 746 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pimportstmt)); }
#line 6681 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 89:
#line 747 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = (yyvsp[-2].pblockstmt); (yyval.pblockstmt)->insertAtTail((yyvsp[0].pimportstmt)); }
#line 6687 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 90:
#line 751 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildRequireStmt((yyvsp[-1].pcallexpr)); }
#line 6693 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 91:
#line 756 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[-2].pch));   }
#line 6699 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 92:
#line 758 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 6705 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 93:
#line 760 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), PRIM_REDUCE_ASSIGN); }
#line 6711 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 94:
#line 762 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 6717 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 95:
#line 764 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 6723 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 96:
#line 766 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), new SymExpr(gNoInit), "="); }
#line 6729 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 97:
#line 772 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = NULL; }
#line 6735 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 98:
#line 773 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 6741 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 99:
#line 777 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 6747 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 100:
#line 778 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 6753 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 101:
#line 779 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "this"; }
#line 6759 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 102:
#line 780 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 6765 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 103:
#line 781 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 6771 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 104:
#line 782 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 6777 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 105:
#line 785 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 6783 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 106:
#line 786 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 6789 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 107:
#line 787 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "this"; redefiningReservedWordError((yyval.pch)); }
#line 6795 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 108:
#line 788 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 6801 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 109:
#line 789 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 6807 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 110:
#line 790 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 6813 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 111:
#line 802 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 6819 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 112:
#line 803 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "this"; }
#line 6825 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 113:
#line 814 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "bool"; }
#line 6831 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 114:
#line 815 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "int"; }
#line 6837 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 115:
#line 816 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "uint"; }
#line 6843 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 116:
#line 817 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "real"; }
#line 6849 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 117:
#line 818 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "imag"; }
#line 6855 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 118:
#line 819 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "complex"; }
#line 6861 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 119:
#line 820 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "bytes"; }
#line 6867 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 120:
#line 821 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "string"; }
#line 6873 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 121:
#line 822 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "sync"; }
#line 6879 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 122:
#line 823 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "single"; }
#line 6885 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 123:
#line 824 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "owned"; }
#line 6891 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 124:
#line 825 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "shared"; }
#line 6897 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 125:
#line 826 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "borrowed"; }
#line 6903 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 126:
#line 827 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "unmanaged"; }
#line 6909 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 127:
#line 828 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "domain"; }
#line 6915 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 128:
#line 829 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "index"; }
#line 6921 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 129:
#line 830 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "locale"; }
#line 6927 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 130:
#line 831 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "nothing"; }
#line 6933 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 131:
#line 832 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "void"; }
#line 6939 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 132:
#line 836 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtBools[BOOL_SIZE_DEFAULT]->symbol); }
#line 6945 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 133:
#line 837 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtAnyEnumerated->symbol); }
#line 6951 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 134:
#line 838 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtInt[INT_SIZE_DEFAULT]->symbol); }
#line 6957 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 135:
#line 839 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtUInt[INT_SIZE_DEFAULT]->symbol); }
#line 6963 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 136:
#line 840 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtReal[FLOAT_SIZE_DEFAULT]->symbol); }
#line 6969 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 137:
#line 841 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtImag[FLOAT_SIZE_DEFAULT]->symbol); }
#line 6975 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 138:
#line 842 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtComplex[COMPLEX_SIZE_DEFAULT]->symbol); }
#line 6981 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 139:
#line 843 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtBytes->symbol); }
#line 6987 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 140:
#line 844 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtString->symbol); }
#line 6993 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 141:
#line 845 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtLocale->symbol); }
#line 6999 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 142:
#line 846 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtNothing->symbol); }
#line 7005 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 143:
#line 847 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtVoid->symbol); }
#line 7011 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 144:
#line 854 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "_syncvar"; }
#line 7017 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 145:
#line 855 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "_singlevar"; }
#line 7023 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 146:
#line 856 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "_domain"; }
#line 7029 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 147:
#line 857 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "_index"; }
#line 7035 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 148:
#line 861 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7041 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 149:
#line 862 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7047 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 150:
#line 866 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN); }
#line 7053 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 151:
#line 867 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 7059 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 152:
#line 871 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 7065 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 154:
#line 873 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7071 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 155:
#line 883 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = parsingPrivate; parsingPrivate=true;}
#line 7077 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 156:
#line 884 "chapel.ypp" /* yacc.c:1663  */
    { parsingPrivate=(yyvsp[-1].b); applyPrivateToBlock((yyvsp[0].pblockstmt)); (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7083 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 164:
#line 898 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-1].pexpr)); }
#line 7089 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 165:
#line 899 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true); }
#line 7095 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 166:
#line 900 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false); }
#line 7101 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 167:
#line 901 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildForwardingDeclStmt((yyvsp[0].pblockstmt)); }
#line 7107 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 168:
#line 906 "chapel.ypp" /* yacc.c:1663  */
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7116 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 169:
#line 911 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 7130 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 170:
#line 921 "chapel.ypp" /* yacc.c:1663  */
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7139 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 171:
#line 926 "chapel.ypp" /* yacc.c:1663  */
    {

      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 7154 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 172:
#line 937 "chapel.ypp" /* yacc.c:1663  */
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7163 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 173:
#line 942 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 7177 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 174:
#line 952 "chapel.ypp" /* yacc.c:1663  */
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7186 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 175:
#line 957 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 7200 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 176:
#line 968 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXTERN, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7208 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 177:
#line 972 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXPORT, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7216 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 178:
#line 977 "chapel.ypp" /* yacc.c:1663  */
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXTERN);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7228 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 179:
#line 985 "chapel.ypp" /* yacc.c:1663  */
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXPORT);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7240 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 180:
#line 996 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[0].pch)));
    }
#line 7248 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 181:
#line 1002 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 7254 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 182:
#line 1003 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7260 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 183:
#line 1004 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));       }
#line 7266 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 184:
#line 1005 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 7272 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 185:
#line 1006 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));     }
#line 7278 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 186:
#line 1007 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 7284 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 187:
#line 1008 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 7290 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 188:
#line 1009 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 7296 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 189:
#line 1010 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 7302 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 190:
#line 1011 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7308 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 191:
#line 1012 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 7314 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 192:
#line 1013 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 7320 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 193:
#line 1014 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 7326 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 194:
#line 1015 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 7332 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 195:
#line 1016 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 7338 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 196:
#line 1017 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 7344 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 197:
#line 1018 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 7350 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 198:
#line 1019 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 7356 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 199:
#line 1021 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7366 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 200:
#line 1027 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7376 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 201:
#line 1033 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7386 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 202:
#line 1039 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7396 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 203:
#line 1045 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(),                       NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7407 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 204:
#line 1052 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(),                       (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7418 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 205:
#line 1059 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7426 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 206:
#line 1063 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7434 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 207:
#line 1069 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ZIP, (yyvsp[-1].pcallexpr)); }
#line 7440 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 208:
#line 1073 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 7446 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 209:
#line 1074 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7452 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 210:
#line 1075 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7458 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 211:
#line 1076 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7464 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 212:
#line 1077 "chapel.ypp" /* yacc.c:1663  */
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-4].pexpr),(yyvsp[-3].pch),(yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 7471 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 213:
#line 1079 "chapel.ypp" /* yacc.c:1663  */
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-3].pexpr),(yyvsp[-2].pch),(yyvsp[-1].pexpr)), (yyvsp[0].pblockstmt)); }
#line 7478 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 214:
#line 1081 "chapel.ypp" /* yacc.c:1663  */
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-6].pexpr),(yyvsp[-5].pch),(yyvsp[-4].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7485 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 215:
#line 1083 "chapel.ypp" /* yacc.c:1663  */
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-5].pexpr),(yyvsp[-4].pch),(yyvsp[-3].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7492 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 216:
#line 1088 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = DeferStmt::build((yyvsp[0].pblockstmt)); }
#line 7498 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 217:
#line 1091 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pexpr)); }
#line 7504 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 218:
#line 1092 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pexpr)); }
#line 7510 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 219:
#line 1093 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[0].pblockstmt)); }
#line 7516 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 220:
#line 1094 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[0].pblockstmt)); }
#line 7522 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 221:
#line 1095 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7528 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 222:
#line 1096 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7534 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 223:
#line 1100 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildChapelStmt(); }
#line 7540 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 224:
#line 1101 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 7546 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 225:
#line 1105 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = CatchStmt::build((yyvsp[0].pblockstmt)); }
#line 7552 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 226:
#line 1106 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = CatchStmt::build((yyvsp[-1].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 7558 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 227:
#line 1107 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = CatchStmt::build((yyvsp[-2].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 7564 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 228:
#line 1111 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch)), NULL, new UnresolvedSymExpr("Error")); }
#line 7570 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 229:
#line 1112 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[-2].pch)), NULL, (yyvsp[0].pexpr));   }
#line 7576 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 230:
#line 1116 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_THROW, (yyvsp[-1].pexpr)); }
#line 7582 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 231:
#line 1120 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 7588 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 232:
#line 1122 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7594 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 233:
#line 1126 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildChapelStmt(); }
#line 7600 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 234:
#line 1127 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 7606 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 235:
#line 1132 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 7612 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 236:
#line 1134 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 7618 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 237:
#line 1136 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 7624 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 238:
#line 1143 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 7638 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 239:
#line 1153 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             new BlockStmt(),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 7652 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 240:
#line 1166 "chapel.ypp" /* yacc.c:1663  */
    {
             (yyval.aggrTag)                     = AGGREGATE_CLASS;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 7662 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 241:
#line 1171 "chapel.ypp" /* yacc.c:1663  */
    {
             (yyval.aggrTag)                     = AGGREGATE_RECORD;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 7672 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 242:
#line 1176 "chapel.ypp" /* yacc.c:1663  */
    {
             (yyval.aggrTag)                     = AGGREGATE_UNION;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 7682 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 243:
#line 1184 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = NULL; }
#line 7688 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 244:
#line 1185 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 7694 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 245:
#line 1190 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 7700 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 246:
#line 1192 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 7706 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 247:
#line 1194 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 7712 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 248:
#line 1199 "chapel.ypp" /* yacc.c:1663  */
    {
      EnumType* pdt = (yyvsp[-4].penumtype);
      for_vector(DefExpr, ec, *(yyvsp[-1].pvecOfDefs)) {
        ec->sym->type = pdt;
        pdt->constants.insertAtTail(ec);
        if (pdt->defaultValue == NULL) {
          pdt->defaultValue = ec->sym;
        }
      }
      delete (yyvsp[-1].pvecOfDefs);
      pdt->doc = (yylsp[-4]).comment;
      TypeSymbol* pst = new TypeSymbol((yyvsp[-3].pch), pdt);
      (yyvsp[-4].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
#line 7732 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 249:
#line 1215 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = buildErrorStandin();
    }
#line 7740 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 250:
#line 1222 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.penumtype) = new EnumType();
      (yyloc).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7750 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 251:
#line 1231 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pvecOfDefs) = new std::vector<DefExpr*>();
      (yyval.pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
      //$$->doc = context->latestComment;
      // start here for enabling documentation of enum constants
      //context->latestComment = NULL;
    }
#line 7762 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 252:
#line 1239 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pvecOfDefs) = (yyvsp[-1].pvecOfDefs);
    }
#line 7770 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 253:
#line 1243 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyvsp[-2].pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
    }
#line 7778 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 254:
#line 1249 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 7784 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 255:
#line 1250 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 7790 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 256:
#line 1255 "chapel.ypp" /* yacc.c:1663  */
    {
      captureTokens = 1;
      captureString.clear();
    }
#line 7799 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 257:
#line 1260 "chapel.ypp" /* yacc.c:1663  */
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 7808 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 258:
#line 1265 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyvsp[-5].pfnsymbol)->retTag = (yyvsp[-3].retTag);
      if ((yyvsp[-3].retTag) == RET_REF || (yyvsp[-3].retTag) == RET_CONST_REF)
        USR_FATAL("'ref' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_PARAM)
        USR_FATAL("'param' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_TYPE)
        USR_FATAL("'type' return types are not allowed in lambdas");
      if ((yyvsp[-2].pexpr))
        (yyvsp[-5].pfnsymbol)->retExprType = new BlockStmt((yyvsp[-2].pexpr), BLOCK_SCOPELESS);
      if ((yyvsp[-1].lifetimeAndWhere).where)
        (yyvsp[-5].pfnsymbol)->where = new BlockStmt((yyvsp[-1].lifetimeAndWhere).where);
      if ((yyvsp[-1].lifetimeAndWhere).lifetime)
        (yyvsp[-5].pfnsymbol)->lifetimeConstraints = new BlockStmt((yyvsp[-1].lifetimeAndWhere).lifetime);
      (yyvsp[-5].pfnsymbol)->insertAtTail((yyvsp[0].pblockstmt));
      (yyval.pexpr) = new DefExpr(buildLambda((yyvsp[-5].pfnsymbol)));
    }
#line 7830 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 259:
#line 1287 "chapel.ypp" /* yacc.c:1663  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                }
#line 7838 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 260:
#line 1290 "chapel.ypp" /* yacc.c:1663  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);
                }
#line 7847 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 261:
#line 1294 "chapel.ypp" /* yacc.c:1663  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_OVERRIDE);
                }
#line 7856 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 262:
#line 1302 "chapel.ypp" /* yacc.c:1663  */
    {
      // Capture the latest comment
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;

      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString.clear();
    }
#line 7870 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 263:
#line 1312 "chapel.ypp" /* yacc.c:1663  */
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 7881 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 264:
#line 1319 "chapel.ypp" /* yacc.c:1663  */
    {
      FnSymbol* fn = (yyvsp[-6].pfnsymbol);
      FnSymbol* linkageFn = (yyvsp[-9].pfnsymbol);

      fn->copyFlags((yyvsp[-9].pfnsymbol));
      if (*linkageFn->name)
        // The user explicitly named this function (controls mangling).
        fn->cname = linkageFn->name;
      else if (linkageFn->numFormals() == 1)
        // cname should be set based upon param
        fn->insertFormalAtTail(linkageFn->getFormal(1));

      if ((yyvsp[-8].procIter) == ProcIter_ITER)
      {
        if (fn->hasFlag(FLAG_EXTERN))
          USR_FATAL_CONT(fn, "'iter' is not legal with 'extern'");
        fn->addFlag(FLAG_ITERATOR_FN);
      }

      (yyval.pblockstmt) = buildFunctionDecl((yyvsp[-6].pfnsymbol), (yyvsp[-4].retTag), (yyvsp[-3].pexpr), (yyvsp[-2].b), (yyvsp[-1].lifetimeAndWhere).where, (yyvsp[-1].lifetimeAndWhere).lifetime, (yyvsp[0].pblockstmt), (yylsp[-8]).comment);
      context->latestComment = NULL;
    }
#line 7908 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 265:
#line 1345 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 7916 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 266:
#line 1349 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 7925 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 267:
#line 1354 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
    }
#line 7933 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 268:
#line 1358 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 7942 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 269:
#line 1363 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), "dummy", INTENT_BLANK, NULL);
    }
#line 7950 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 271:
#line 1370 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 7956 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 272:
#line 1374 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 7962 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 273:
#line 1375 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = astr("~", (yyvsp[0].pch)); }
#line 7968 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 274:
#line 1376 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "&"; }
#line 7974 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 275:
#line 1377 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "|"; }
#line 7980 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 276:
#line 1378 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "^"; }
#line 7986 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 277:
#line 1379 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "~"; }
#line 7992 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 278:
#line 1380 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "=="; }
#line 7998 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 279:
#line 1381 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "!="; }
#line 8004 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 280:
#line 1382 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "<="; }
#line 8010 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 281:
#line 1383 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = ">="; }
#line 8016 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 282:
#line 1384 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "<"; }
#line 8022 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 283:
#line 1385 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = ">"; }
#line 8028 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 284:
#line 1386 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "+"; }
#line 8034 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 285:
#line 1387 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "-"; }
#line 8040 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 286:
#line 1388 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "*"; }
#line 8046 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 287:
#line 1389 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "/"; }
#line 8052 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 288:
#line 1390 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "<<"; }
#line 8058 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 289:
#line 1391 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = ">>"; }
#line 8064 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 290:
#line 1392 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "%"; }
#line 8070 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 291:
#line 1393 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "**"; }
#line 8076 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 292:
#line 1394 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "!"; }
#line 8082 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 293:
#line 1395 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "chpl_by"; }
#line 8088 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 294:
#line 1396 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "#"; }
#line 8094 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 295:
#line 1397 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "chpl_align"; }
#line 8100 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 296:
#line 1398 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "<=>"; }
#line 8106 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 297:
#line 1399 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "<~>"; }
#line 8112 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 298:
#line 1400 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "init="; }
#line 8118 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 299:
#line 1401 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = astr((yyvsp[-1].pch), "!"); }
#line 8124 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 300:
#line 1405 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "="; }
#line 8130 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 301:
#line 1406 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "+="; }
#line 8136 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 302:
#line 1407 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "-="; }
#line 8142 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 303:
#line 1408 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "*="; }
#line 8148 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 304:
#line 1409 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "/="; }
#line 8154 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 305:
#line 1410 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "%="; }
#line 8160 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 306:
#line 1411 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "**="; }
#line 8166 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 307:
#line 1412 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "&="; }
#line 8172 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 308:
#line 1413 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "|="; }
#line 8178 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 309:
#line 1414 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "^="; }
#line 8184 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 310:
#line 1415 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = ">>="; }
#line 8190 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 311:
#line 1416 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pch) = "<<="; }
#line 8196 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 312:
#line 1420 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 8202 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 313:
#line 1421 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 8208 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 314:
#line 1425 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 8214 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 315:
#line 1429 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 8220 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 316:
#line 1430 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 8226 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 317:
#line 1431 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 8232 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 318:
#line 1436 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 8238 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 319:
#line 1438 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL)); }
#line 8244 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 320:
#line 1440 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 8250 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 321:
#line 1442 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 8256 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 322:
#line 1444 "chapel.ypp" /* yacc.c:1663  */
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 8262 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 323:
#line 1448 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_BLANK; }
#line 8268 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 324:
#line 1449 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = (yyvsp[0].pt); }
#line 8274 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 325:
#line 1453 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_IN; }
#line 8280 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 326:
#line 1454 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_INOUT; }
#line 8286 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 327:
#line 1455 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_OUT; }
#line 8292 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 328:
#line 1456 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_CONST; }
#line 8298 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 329:
#line 1457 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_CONST_IN; }
#line 8304 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 330:
#line 1458 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_CONST_REF; }
#line 8310 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 331:
#line 1459 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_PARAM; }
#line 8316 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 332:
#line 1460 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_REF; }
#line 8322 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 333:
#line 1461 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_TYPE; }
#line 8328 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 334:
#line 1465 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_BLANK; }
#line 8334 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 335:
#line 1466 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_PARAM; }
#line 8340 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 336:
#line 1467 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_REF;   }
#line 8346 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 337:
#line 1468 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_CONST_REF;   }
#line 8352 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 338:
#line 1469 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_CONST;   }
#line 8358 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 339:
#line 1470 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pt) = INTENT_TYPE;  }
#line 8364 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 340:
#line 1474 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.procIter) = ProcIter_PROC; }
#line 8370 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 341:
#line 1475 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.procIter) = ProcIter_ITER; }
#line 8376 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 342:
#line 1479 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.retTag) = RET_VALUE; }
#line 8382 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 343:
#line 1480 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.retTag) = RET_VALUE; }
#line 8388 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 344:
#line 1481 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.retTag) = RET_CONST_REF; }
#line 8394 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 345:
#line 1482 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.retTag) = RET_REF; }
#line 8400 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 346:
#line 1483 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.retTag) = RET_PARAM; }
#line 8406 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 347:
#line 1484 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.retTag) = RET_TYPE; }
#line 8412 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 348:
#line 1488 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = false; }
#line 8418 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 349:
#line 1489 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.b) = true;  }
#line 8424 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 350:
#line 1492 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = NULL; }
#line 8430 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 353:
#line 1498 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 8436 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 354:
#line 1502 "chapel.ypp" /* yacc.c:1663  */
    { 
      DefExpr * de = new DefExpr(new VarSymbol((yyvsp[0].pch)));
      USR_WARN(de, "support for space in query expressions is deprecated");
      (yyval.pexpr) = de;
  }
#line 8446 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 355:
#line 1507 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildQueriedExpr((yyvsp[0].pch)); }
#line 8452 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 356:
#line 1511 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 8458 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 357:
#line 1512 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8464 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 358:
#line 1513 "chapel.ypp" /* yacc.c:1663  */
    { if (DefExpr* def = toDefExpr((yyvsp[0].pexpr))) {
                             def->sym->addFlag(FLAG_PARAM);
                           }
                           (yyval.pexpr) = (yyvsp[0].pexpr);
                         }
#line 8474 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 359:
#line 1521 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, NULL); }
#line 8480 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 360:
#line 1523 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), NULL); }
#line 8486 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 361:
#line 1525 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, (yyvsp[0].pexpr)); }
#line 8492 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 362:
#line 1527 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 8498 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 363:
#line 1529 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 8504 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 364:
#line 1534 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8510 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 365:
#line 1536 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(",", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 8516 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 366:
#line 1540 "chapel.ypp" /* yacc.c:1663  */
    {(yyval.pexpr) = new CallExpr("=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8522 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 367:
#line 1541 "chapel.ypp" /* yacc.c:1663  */
    {(yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8528 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 368:
#line 1542 "chapel.ypp" /* yacc.c:1663  */
    {(yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8534 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 369:
#line 1543 "chapel.ypp" /* yacc.c:1663  */
    {(yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8540 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 370:
#line 1544 "chapel.ypp" /* yacc.c:1663  */
    {(yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8546 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 371:
#line 1545 "chapel.ypp" /* yacc.c:1663  */
    {(yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8552 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 372:
#line 1546 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(PRIM_RETURN, (yyvsp[0].pexpr)); }
#line 8558 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 373:
#line 1551 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr((yyvsp[0].pch))); }
#line 8564 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 374:
#line 1553 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr("this")); }
#line 8570 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 375:
#line 1558 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 8576 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 376:
#line 1560 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 8582 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 377:
#line 1562 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 8588 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 378:
#line 1567 "chapel.ypp" /* yacc.c:1663  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-1].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[0].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
#line 8605 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 379:
#line 1580 "chapel.ypp" /* yacc.c:1663  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[-2].pexpr));

      (yyvsp[0].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pblockstmt));
    }
#line 8623 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 380:
#line 1596 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = NULL; }
#line 8629 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 381:
#line 1598 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8635 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 382:
#line 1600 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 8641 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 383:
#line 1604 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_PARAM); }
#line 8647 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 384:
#line 1605 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST); }
#line 8653 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 385:
#line 1606 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_REF_VAR); }
#line 8659 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 386:
#line 1607 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST, FLAG_REF_VAR); }
#line 8665 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 387:
#line 1608 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pflagset) = buildVarDeclFlags(); }
#line 8671 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 388:
#line 1613 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyvsp[-2].pflagset)->insert(FLAG_CONFIG);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 8681 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 389:
#line 1619 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 8690 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 391:
#line 1628 "chapel.ypp" /* yacc.c:1663  */
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 8699 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 392:
#line 1636 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 8705 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 393:
#line 1638 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 8711 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 394:
#line 1643 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 8717 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 395:
#line 1645 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 8723 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 396:
#line 1647 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 8729 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 397:
#line 1652 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 8735 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 398:
#line 1654 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 8741 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 399:
#line 1656 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8747 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 400:
#line 1662 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = NULL; }
#line 8753 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 401:
#line 1663 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 8759 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 402:
#line 1664 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8765 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 403:
#line 1670 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8771 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 404:
#line 1672 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, NULL); }
#line 8777 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 405:
#line 1674 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 8785 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 406:
#line 1678 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)), NULL);
    }
#line 8793 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 407:
#line 1682 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8799 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 408:
#line 1684 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 8807 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 409:
#line 1688 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pexpr) = new CallExpr(PRIM_ERROR);
    }
#line 8815 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 410:
#line 1695 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = NULL; }
#line 8821 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 411:
#line 1696 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8827 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 412:
#line 1697 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8833 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 413:
#line 1698 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 8839 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 414:
#line 1699 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = NULL; }
#line 8845 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 415:
#line 1704 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = NULL; }
#line 8851 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 416:
#line 1705 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8857 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 417:
#line 1706 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 8863 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 418:
#line 1707 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 8869 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 419:
#line 1708 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = NULL; }
#line 8875 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 420:
#line 1729 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 8883 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 421:
#line 1733 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 8891 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 422:
#line 1737 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)->copy()));
    }
#line 8903 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 423:
#line 1745 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pcallexpr) = new CallExpr(PRIM_ERROR);
    }
#line 8911 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 424:
#line 1751 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = NULL; }
#line 8917 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 425:
#line 1752 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8923 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 426:
#line 1753 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8929 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 427:
#line 1758 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8935 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 428:
#line 1760 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 8941 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 429:
#line 1766 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8947 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 430:
#line 1768 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 8953 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 431:
#line 1770 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 8959 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 432:
#line 1774 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = NULL; }
#line 8965 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 433:
#line 1775 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8971 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 434:
#line 1776 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8977 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 435:
#line 1777 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 8983 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 436:
#line 1778 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8989 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 437:
#line 1784 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 8995 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 438:
#line 1785 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 9001 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 439:
#line 1786 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9007 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 440:
#line 1787 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9013 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 441:
#line 1791 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr));}
#line 9019 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 442:
#line 1792 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9025 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 443:
#line 1796 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 9031 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 444:
#line 1797 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9037 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 445:
#line 1798 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9043 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 446:
#line 1802 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9049 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 447:
#line 1803 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9055 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 448:
#line 1807 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 9061 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 450:
#line 1812 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 9067 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 451:
#line 1813 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9073 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 452:
#line 1817 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 9079 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 453:
#line 1818 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 9085 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 454:
#line 1819 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9091 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 455:
#line 1820 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9097 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 456:
#line 1824 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9103 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 457:
#line 1825 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9109 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 458:
#line 1837 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9115 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 459:
#line 1839 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr( PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr)); }
#line 9121 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 460:
#line 1841 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 9127 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 466:
#line 1852 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 9133 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 467:
#line 1854 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 9139 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 468:
#line 1856 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 9145 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 469:
#line 1858 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 9151 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 470:
#line 1860 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", buildDotExpr((yyvsp[-1].pcallexpr)->copy(), "defaultSparseDist"), (yyvsp[-1].pcallexpr)); }
#line 9157 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 471:
#line 1862 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 9163 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 472:
#line 1864 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 9169 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 473:
#line 1867 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr("_owned"); }
#line 9175 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 474:
#line 1869 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr( "_owned", (yyvsp[0].pexpr)); }
#line 9181 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 475:
#line 1871 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtUnmanaged->symbol); }
#line 9187 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 476:
#line 1873 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr( PRIM_TO_UNMANAGED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 9193 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 477:
#line 1875 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr("_shared"); }
#line 9199 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 478:
#line 1877 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr( "_shared", (yyvsp[0].pexpr)); }
#line 9205 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 479:
#line 1879 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtBorrowed->symbol); }
#line 9211 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 480:
#line 1881 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr( PRIM_TO_BORROWED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 9217 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 481:
#line 1884 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtAnyManagementNonNilable->symbol); }
#line 9223 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 482:
#line 1886 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(dtAnyRecord->symbol); }
#line 9229 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 483:
#line 1891 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9235 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 484:
#line 1893 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 9241 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 485:
#line 1895 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9247 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 486:
#line 1897 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9253 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 487:
#line 1899 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 9259 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 488:
#line 1901 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9265 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 489:
#line 1903 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9271 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 490:
#line 1905 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 9277 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 491:
#line 1907 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9283 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 492:
#line 1909 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9289 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 493:
#line 1911 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 9295 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 494:
#line 1913 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9301 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 495:
#line 1915 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 9312 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 496:
#line 1922 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 9322 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 497:
#line 1928 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 9332 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 498:
#line 1934 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 9342 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 499:
#line 1940 "chapel.ypp" /* yacc.c:1663  */
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 9352 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 500:
#line 1949 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new IfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9358 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 501:
#line 1958 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(gNil); }
#line 9364 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 509:
#line 1974 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9370 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 510:
#line 1978 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = NULL; }
#line 9376 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 512:
#line 1983 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 9382 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 513:
#line 1987 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addTaskIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9388 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 514:
#line 1988 "chapel.ypp" /* yacc.c:1663  */
    { addTaskIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9394 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 515:
#line 1992 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 9400 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 516:
#line 1996 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addForallIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9406 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 517:
#line 1997 "chapel.ypp" /* yacc.c:1663  */
    { addForallIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9412 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 518:
#line 2002 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildForPrefix((yyvsp[-3].pShadowVarPref), (yyvsp[-2].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pexpr));
    }
#line 9420 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 519:
#line 2006 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 9428 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 520:
#line 2010 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 9436 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 521:
#line 2016 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pShadowVarPref) = SVP_CONST;     }
#line 9442 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 522:
#line 2017 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pShadowVarPref) = SVP_IN;        }
#line 9448 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 523:
#line 2018 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pShadowVarPref) = SVP_CONST_IN;  }
#line 9454 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 524:
#line 2019 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pShadowVarPref) = SVP_REF;       }
#line 9460 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 525:
#line 2020 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pShadowVarPref) = SVP_CONST_REF; }
#line 9466 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 526:
#line 2021 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pShadowVarPref) = SVP_VAR;       }
#line 9472 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 528:
#line 2027 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9478 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 529:
#line 2032 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW); }
#line 9484 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 530:
#line 2034 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol))); }
#line 9492 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 531:
#line 2038 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol))); }
#line 9500 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 532:
#line 2042 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtUnmanaged->symbol))); }
#line 9508 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 533:
#line 2046 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtBorrowed->symbol))); }
#line 9516 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 534:
#line 2054 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-1].pcallexpr)->insertAtTail((yyvsp[0].pexpr));
      (yyval.pexpr) = (yyvsp[-1].pcallexpr); }
#line 9523 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 535:
#line 2059 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 9533 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 536:
#line 2065 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 9543 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 537:
#line 2071 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 9554 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 538:
#line 2078 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 9565 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 539:
#line 2087 "chapel.ypp" /* yacc.c:1663  */
    { USR_WARN((yyvsp[-1].pexpr), "the syntax 'new owned(an expression)' is deprecated");
      USR_PRINT((yyvsp[-1].pexpr), "instead use 'owned.create(an expression)'");
      (yyval.pexpr) = new CallExpr(PRIM_NEW, new CallExpr(dtOwned->symbol, (yyvsp[-1].pexpr))); }
#line 9573 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 540:
#line 2091 "chapel.ypp" /* yacc.c:1663  */
    { USR_WARN((yyvsp[-1].pexpr), "the syntax 'new shared(an expression)' is deprecated");
      USR_PRINT((yyvsp[-1].pexpr), "instead use 'shared.create(an expression)'");
      (yyval.pexpr) = new CallExpr(PRIM_NEW, new CallExpr(dtShared->symbol, (yyvsp[-1].pexpr))); }
#line 9581 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 541:
#line 2098 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 9587 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 550:
#line 2114 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 9593 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 551:
#line 2116 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = createCast((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9599 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 552:
#line 2118 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9605 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 553:
#line 2120 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr), false, true); }
#line 9611 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 554:
#line 2135 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildLowBoundedRange((yyvsp[-1].pexpr)); }
#line 9617 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 555:
#line 2137 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr)); }
#line 9623 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 556:
#line 2139 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr), true); }
#line 9629 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 557:
#line 2141 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildUnboundedRange(); }
#line 9635 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 558:
#line 2145 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = NULL; }
#line 9641 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 559:
#line 2146 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9647 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 560:
#line 2150 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = tryExpr((yyvsp[0].pexpr)); }
#line 9653 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 561:
#line 2151 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = tryBangExpr((yyvsp[0].pexpr)); }
#line 9659 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 562:
#line 2152 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9665 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 567:
#line 2170 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9671 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 568:
#line 2171 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 9677 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 569:
#line 2172 "chapel.ypp" /* yacc.c:1663  */
    {(yyval.pexpr) = new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr));}
#line 9683 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 570:
#line 2173 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9689 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 571:
#line 2177 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 9695 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 572:
#line 2178 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 9701 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 573:
#line 2179 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 9707 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 574:
#line 2183 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 9713 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 575:
#line 2184 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 9719 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 576:
#line 2185 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "_dom"); }
#line 9725 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 577:
#line 2186 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "locale"); }
#line 9731 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 578:
#line 2187 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(buildDotExpr((yyvsp[-4].pexpr), "chpl_bytes")); }
#line 9737 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 579:
#line 2195 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 9743 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 580:
#line 2196 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 9749 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 581:
#line 2197 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 9755 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 582:
#line 2198 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildTuple((yyvsp[-2].pcallexpr)); }
#line 9761 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 583:
#line 2202 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(gFalse); }
#line 9767 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 584:
#line 2203 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(gTrue); }
#line 9773 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 586:
#line 2208 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch), yyfilename, chplLineno);    }
#line 9779 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 587:
#line 2209 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 9785 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 588:
#line 2210 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 9791 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 589:
#line 2211 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 9797 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 590:
#line 2212 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildBytesLiteral((yyvsp[0].pch)); }
#line 9803 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 591:
#line 2213 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildCStringLiteral((yyvsp[0].pch)); }
#line 9809 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 592:
#line 2214 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new SymExpr(gNone); }
#line 9815 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 593:
#line 2215 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr),
                                            new SymExpr(gFalse)); }
#line 9822 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 594:
#line 2217 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-2].pcallexpr),
                                                   new SymExpr(gFalse)); }
#line 9829 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 595:
#line 2219 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 9835 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 596:
#line 2220 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-2].pcallexpr)); }
#line 9841 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 597:
#line 2222 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 9849 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 598:
#line 2226 "chapel.ypp" /* yacc.c:1663  */
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-2].pcallexpr));
    }
#line 9857 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 599:
#line 2233 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9863 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 600:
#line 2234 "chapel.ypp" /* yacc.c:1663  */
    { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9869 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 601:
#line 2238 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9875 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 602:
#line 2239 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9881 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 603:
#line 2240 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9887 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 604:
#line 2241 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9893 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 605:
#line 2242 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9899 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 606:
#line 2243 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9905 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 607:
#line 2244 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9911 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 608:
#line 2245 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9917 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 609:
#line 2246 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9923 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 610:
#line 2247 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9929 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 611:
#line 2248 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9935 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 612:
#line 2249 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9941 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 613:
#line 2250 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9947 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 614:
#line 2251 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9953 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 615:
#line 2252 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9959 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 616:
#line 2253 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9965 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 617:
#line 2254 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9971 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 618:
#line 2255 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9977 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 619:
#line 2256 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9983 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 620:
#line 2257 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9989 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 621:
#line 2258 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl_align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9995 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 622:
#line 2259 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10001 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 623:
#line 2260 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr),
                                               new SymExpr(gFalse)); }
#line 10008 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 624:
#line 2265 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 10014 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 625:
#line 2266 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 10020 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 626:
#line 2267 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 10026 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 627:
#line 2268 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 10032 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 628:
#line 2269 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 10038 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 629:
#line 2270 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 10044 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 630:
#line 2271 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 10050 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 631:
#line 2275 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10056 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 632:
#line 2276 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10062 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 633:
#line 2277 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10068 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 634:
#line 2278 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10074 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 635:
#line 2282 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10080 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 636:
#line 2283 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10086 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 637:
#line 2284 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10092 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 638:
#line 2285 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10098 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 639:
#line 2290 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 10104 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 640:
#line 2291 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 10110 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 641:
#line 2292 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 10116 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 642:
#line 2293 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 10122 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 643:
#line 2294 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 10128 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 644:
#line 2295 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 10134 "bison-chapel.cpp" /* yacc.c:1663  */
    break;

  case 645:
#line 2296 "chapel.ypp" /* yacc.c:1663  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 10140 "bison-chapel.cpp" /* yacc.c:1663  */
    break;


#line 10144 "bison-chapel.cpp" /* yacc.c:1663  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, context, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, context);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  yyps->yynew = 1;

yypushreturn:
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
