/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cminus.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_ASSIGNOP = 6,                   /* ASSIGNOP  */
  YYSYMBOL_OR = 7,                         /* OR  */
  YYSYMBOL_AND = 8,                        /* AND  */
  YYSYMBOL_RELOP = 9,                      /* RELOP  */
  YYSYMBOL_PLUS = 10,                      /* PLUS  */
  YYSYMBOL_MINUS = 11,                     /* MINUS  */
  YYSYMBOL_STAR = 12,                      /* STAR  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_NOT = 14,                       /* NOT  */
  YYSYMBOL_LP = 15,                        /* LP  */
  YYSYMBOL_RP = 16,                        /* RP  */
  YYSYMBOL_LB = 17,                        /* LB  */
  YYSYMBOL_RB = 18,                        /* RB  */
  YYSYMBOL_DOT = 19,                       /* DOT  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_STRUCT = 21,                    /* STRUCT  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_SEMI = 25,                      /* SEMI  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_TYPE = 27,                      /* TYPE  */
  YYSYMBOL_LC = 28,                        /* LC  */
  YYSYMBOL_RC = 29,                        /* RC  */
  YYSYMBOL_YYACCEPT = 30,                  /* $accept  */
  YYSYMBOL_ErrorSemi = 31,                 /* ErrorSemi  */
  YYSYMBOL_ErrorRp = 32,                   /* ErrorRp  */
  YYSYMBOL_ErrorRb = 33,                   /* ErrorRb  */
  YYSYMBOL_ErrorRc = 34,                   /* ErrorRc  */
  YYSYMBOL_Program = 35,                   /* Program  */
  YYSYMBOL_ExtDefList = 36,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 37,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 38,                /* ExtDecList  */
  YYSYMBOL_Specifier = 39,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 40,           /* StructSpecifier  */
  YYSYMBOL_OptTag = 41,                    /* OptTag  */
  YYSYMBOL_Tag = 42,                       /* Tag  */
  YYSYMBOL_VarDec = 43,                    /* VarDec  */
  YYSYMBOL_FunDec = 44,                    /* FunDec  */
  YYSYMBOL_VarList = 45,                   /* VarList  */
  YYSYMBOL_ParamDec = 46,                  /* ParamDec  */
  YYSYMBOL_CompSt = 47,                    /* CompSt  */
  YYSYMBOL_StmtList = 48,                  /* StmtList  */
  YYSYMBOL_Stmt = 49,                      /* Stmt  */
  YYSYMBOL_DefList = 50,                   /* DefList  */
  YYSYMBOL_Def = 51,                       /* Def  */
  YYSYMBOL_DecList = 52,                   /* DecList  */
  YYSYMBOL_Dec = 53,                       /* Dec  */
  YYSYMBOL_Exp = 54,                       /* Exp  */
  YYSYMBOL_Args = 55                       /* Args  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 5 "cminus.y"

    #include "ASTCommon.hpp"
    extern struct TreeNode* root;
    extern int codeLine;
    extern int yylex (void);      /*用于获取下个词法单元*/
    extern bool isSuccess;
    extern char *yytext;
    void yyerror (char const *s);   /*错误处理函数*/
    bool hasSyntaxError=false;

#line 169 "cminus.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    48,    48,    52,    56,    59,    63,    66,    70,    73,
      77,    85,    91,    94,   101,   107,   116,   121,   130,   135,
     142,   151,   159,   164,   167,   175,   180,   190,   198,   207,
     214,   221,   229,   239,   245,   248,   254,   259,   266,   275,
     286,   298,   304,   307,   316,   321,   330,   335,   345,   352,
     359,   366,   373,   380,   387,   394,   401,   408,   414,   420,
     428,   435,   443,   450,   455,   460,   467,   474
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "ID",
  "ASSIGNOP", "OR", "AND", "RELOP", "PLUS", "MINUS", "STAR", "DIV", "NOT",
  "LP", "RP", "LB", "RB", "DOT", "ELSE", "STRUCT", "RETURN", "IF", "WHILE",
  "SEMI", "COMMA", "TYPE", "LC", "RC", "$accept", "ErrorSemi", "ErrorRp",
  "ErrorRb", "ErrorRc", "Program", "ExtDefList", "ExtDef", "ExtDecList",
  "Specifier", "StructSpecifier", "OptTag", "Tag", "VarDec", "FunDec",
  "VarList", "ParamDec", "CompSt", "StmtList", "Stmt", "DefList", "Def",
  "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-50)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-23)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,    -1,   -50,    12,   -50,   -10,    13,   -50,   -15,    24,
     -50,   -50,   -50,    15,    16,   -50,   -50,    14,    10,    25,
      44,   -10,   -50,     9,   -50,   178,    31,   -10,   -50,    62,
      62,     6,   -10,    57,   -50,   -50,    62,     8,    54,   -50,
     -50,    75,   178,   178,   178,   167,     4,    74,   -50,   -50,
      14,    65,    63,   -50,   -50,   -50,   -50,    76,   -50,   -10,
      60,    38,    41,   139,   178,   178,   178,   178,   178,   178,
     178,   178,   178,    89,    77,   -50,   -50,   178,    85,    86,
     -50,     6,    74,    98,   -50,    62,   -50,   -50,   -50,   118,
       8,   -50,   167,   186,   197,   207,    38,    38,    41,    41,
     153,   -50,   -50,    98,   178,   178,   -50,   -50,   -50,   -50,
     178,   -50,   -50,   -50,   139,   139,   -50,    74,    74,    83,
     -50,    74,   -50
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      12,    23,    18,     0,    10,    12,     0,    19,    24,     0,
      21,     1,    11,     0,    25,     3,    14,     0,    46,     0,
      16,    42,     2,     0,    13,     0,     0,    42,    15,     0,
       0,     0,    42,     0,     5,    28,     0,     0,    30,    64,
      65,    63,     0,     0,     0,    47,     0,    34,    25,    17,
       0,    44,     0,     9,    20,    41,     4,    31,    27,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,    26,     0,     0,     0,
      36,     0,    34,     0,    43,     0,     8,    29,    60,    67,
       0,    56,    48,    50,    49,    51,    52,    53,    54,    55,
       0,    62,     6,     0,     0,     0,    32,    33,    35,    45,
       0,    59,    61,    37,     0,     0,    66,     0,     0,    38,
      40,     0,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -50,   -17,   -31,    18,    32,   -50,   107,   -50,    87,     3,
     -50,   -50,   -50,    78,   -50,    61,   -50,   100,    39,   -49,
      -4,   -50,    37,   -29,   -23,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    16,    35,    76,    54,     3,     4,     5,    17,    30,
       7,     9,    10,    18,    19,    37,    38,    80,    81,    82,
      31,    32,    50,    20,    83,    90
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      24,    51,    45,     6,     8,    74,    58,    52,     6,    33,
      33,     1,    11,   -22,    13,    13,    25,     2,    14,    61,
      62,    63,    75,    47,    34,    34,    36,    26,    55,    88,
       1,    23,    91,    84,    46,    53,     2,    89,    15,    15,
      22,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      70,    71,    21,    27,   103,    72,    51,    73,    72,   111,
      73,    33,    36,    39,    40,    41,   108,    48,   119,   120,
      29,    42,   122,    56,    43,    44,    34,    39,    40,    41,
      59,   114,   115,   117,   118,    42,   113,    89,    43,    44,
      60,    85,    86,    26,   101,   102,    77,    78,    79,    13,
     104,   105,    27,   121,    64,    65,    66,    67,    68,    69,
      70,    71,    12,   106,    57,    72,    49,    73,   112,    28,
      87,   107,   109,    15,    64,    65,    66,    67,    68,    69,
      70,    71,   116,     0,     0,    72,     0,    73,     0,     0,
      33,     0,     0,     0,   110,    64,    65,    66,    67,    68,
      69,    70,    71,     0,    74,    34,    72,     0,    73,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,     0,
      72,    75,    73,    64,    65,    66,    67,    68,    69,    70,
      71,    39,    40,    41,    72,     0,    73,     0,     0,    42,
       0,     0,    43,    44,    66,    67,    68,    69,    70,    71,
       0,     0,     0,    72,     0,    73,    67,    68,    69,    70,
      71,     0,     0,     0,    72,     0,    73,    68,    69,    70,
      71,     0,     0,     0,    72,     0,    73
};

static const yytype_int8 yycheck[] =
{
      17,    30,    25,     0,     5,     1,    37,     1,     5,     1,
       1,    21,     0,    28,     1,     1,     6,    27,     5,    42,
      43,    44,    18,    27,    16,    16,    23,    17,    32,    60,
      21,    15,    63,    50,     3,    29,    27,    60,    25,    25,
      25,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      12,    13,    28,    28,    77,    17,    85,    19,    17,    90,
      19,     1,    59,     3,     4,     5,    83,     5,   117,   118,
      26,    11,   121,    16,    14,    15,    16,     3,     4,     5,
      26,   104,   105,   114,   115,    11,   103,   110,    14,    15,
      15,    26,    29,    17,     5,    18,    22,    23,    24,     1,
      15,    15,    28,    20,     6,     7,     8,     9,    10,    11,
      12,    13,     5,    81,    36,    17,    29,    19,   100,    19,
      59,    82,    85,    25,     6,     7,     8,     9,    10,    11,
      12,    13,   110,    -1,    -1,    17,    -1,    19,    -1,    -1,
       1,    -1,    -1,    -1,    26,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,     1,    16,    17,    -1,    19,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      17,    18,    19,     6,     7,     8,     9,    10,    11,    12,
      13,     3,     4,     5,    17,    -1,    19,    -1,    -1,    11,
      -1,    -1,    14,    15,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    17,    -1,    19,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    17,    -1,    19,    10,    11,    12,
      13,    -1,    -1,    -1,    17,    -1,    19
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    27,    35,    36,    37,    39,    40,     5,    41,
      42,     0,    36,     1,     5,    25,    31,    38,    43,    44,
      53,    28,    25,    15,    31,     6,    17,    28,    47,    26,
      39,    50,    51,     1,    16,    32,    39,    45,    46,     3,
       4,     5,    11,    14,    15,    54,     3,    50,     5,    38,
      52,    53,     1,    29,    34,    50,    16,    43,    32,    26,
      15,    54,    54,    54,     6,     7,     8,     9,    10,    11,
      12,    13,    17,    19,     1,    18,    33,    22,    23,    24,
      47,    48,    49,    54,    31,    26,    29,    45,    32,    54,
      55,    32,    54,    54,    54,    54,    54,    54,    54,    54,
      54,     5,    18,    54,    15,    15,    34,    48,    31,    52,
      26,    32,    33,    31,    54,    54,    55,    32,    32,    49,
      49,    20,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    31,    32,    32,    33,    33,    34,    34,
      35,    36,    36,    37,    37,    37,    38,    38,    39,    39,
      40,    40,    41,    41,    42,    43,    43,    44,    44,    45,
      45,    46,    47,    48,    48,    49,    49,    49,    49,    49,
      49,    50,    50,    51,    52,    52,    53,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    55
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     2,     0,     3,     2,     3,     1,     3,     1,     1,
       5,     2,     1,     0,     1,     1,     4,     4,     3,     3,
       1,     2,     4,     2,     0,     2,     1,     3,     5,     7,
       5,     2,     0,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     4,
       3,     4,     3,     1,     1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* ErrorSemi: error SEMI  */
#line 48 "cminus.y"
                 { 
        printf("Error type B at Line %d: Missing \";\".\n", codeLine);
        (yyval.node) = (yyvsp[0].node);
        }
#line 1224 "cminus.tab.c"
    break;

  case 3: /* ErrorSemi: SEMI  */
#line 52 "cminus.y"
           { (yyval.node) = (yyvsp[0].node); }
#line 1230 "cminus.tab.c"
    break;

  case 4: /* ErrorRp: error RP  */
#line 56 "cminus.y"
               { 
        printf("Error type B at Line %d: Missing \")\".\n", codeLine);
        (yyval.node) = (yyvsp[0].node); }
#line 1238 "cminus.tab.c"
    break;

  case 5: /* ErrorRp: RP  */
#line 59 "cminus.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 1244 "cminus.tab.c"
    break;

  case 6: /* ErrorRb: error RB  */
#line 63 "cminus.y"
               { 
        printf("Error type B at Line %d: Missing \"]\".\n", codeLine);
        (yyval.node) = (yyvsp[0].node); }
#line 1252 "cminus.tab.c"
    break;

  case 7: /* ErrorRb: RB  */
#line 66 "cminus.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 1258 "cminus.tab.c"
    break;

  case 8: /* ErrorRc: error RC  */
#line 70 "cminus.y"
               { 
        printf("Error type B at Line %d: Missing \"}\".\n", codeLine);
        (yyval.node) = (yyvsp[0].node); }
#line 1266 "cminus.tab.c"
    break;

  case 9: /* ErrorRc: RC  */
#line 73 "cminus.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 1272 "cminus.tab.c"
    break;

  case 10: /* Program: ExtDefList  */
#line 77 "cminus.y"
                 {
        createNode((yyval.node), "Program", codeLine);   /*$$表示当前语义值，即Program*/
        (yyval.node)->children.emplace_back((yyvsp[0].node));            /*表示第一个规则的语义值 ExtDefList*/
        updateNodeLine((yyval.node));
        root = (yyval.node);
    }
#line 1283 "cminus.tab.c"
    break;

  case 11: /* ExtDefList: ExtDef ExtDefList  */
#line 85 "cminus.y"
                        {
        createNode((yyval.node), "ExtDefList", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1294 "cminus.tab.c"
    break;

  case 12: /* ExtDefList: %empty  */
#line 91 "cminus.y"
             { (yyval.node) = nullptr; }
#line 1300 "cminus.tab.c"
    break;

  case 13: /* ExtDef: Specifier ExtDecList ErrorSemi  */
#line 94 "cminus.y"
                                     {
        createNode((yyval.node), "ExtDef", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1312 "cminus.tab.c"
    break;

  case 14: /* ExtDef: Specifier ErrorSemi  */
#line 101 "cminus.y"
                          {               
        createNode((yyval.node), "ExtDef", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1323 "cminus.tab.c"
    break;

  case 15: /* ExtDef: Specifier FunDec CompSt  */
#line 107 "cminus.y"
                              {         /*函数定义*/
        createNode((yyval.node), "ExtDef", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1335 "cminus.tab.c"
    break;

  case 16: /* ExtDecList: Dec  */
#line 116 "cminus.y"
          {  
        createNode((yyval.node), "ExtDecList", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1345 "cminus.tab.c"
    break;

  case 17: /* ExtDecList: Dec COMMA ExtDecList  */
#line 121 "cminus.y"
                           {  
        createNode((yyval.node), "ExtDecList", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1357 "cminus.tab.c"
    break;

  case 18: /* Specifier: TYPE  */
#line 130 "cminus.y"
           {
        createNode((yyval.node), "Specifier", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1367 "cminus.tab.c"
    break;

  case 19: /* Specifier: StructSpecifier  */
#line 135 "cminus.y"
                      {                 /*结构体类型*/
        createNode((yyval.node), "Specifier", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1377 "cminus.tab.c"
    break;

  case 20: /* StructSpecifier: STRUCT OptTag LC DefList ErrorRc  */
#line 142 "cminus.y"
                                       {
        createNode((yyval.node), "StructSpecifier", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-4].node));
        (yyval.node)->children.emplace_back((yyvsp[-3].node));
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1391 "cminus.tab.c"
    break;

  case 21: /* StructSpecifier: STRUCT Tag  */
#line 151 "cminus.y"
                 {
        createNode((yyval.node), "StructSpecifier", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1402 "cminus.tab.c"
    break;

  case 22: /* OptTag: ID  */
#line 159 "cminus.y"
         {
        createNode((yyval.node), "OptTag", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1412 "cminus.tab.c"
    break;

  case 23: /* OptTag: %empty  */
#line 164 "cminus.y"
             { (yyval.node) = nullptr; }
#line 1418 "cminus.tab.c"
    break;

  case 24: /* Tag: ID  */
#line 167 "cminus.y"
         {
        createNode((yyval.node), "Tag", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1428 "cminus.tab.c"
    break;

  case 25: /* VarDec: ID  */
#line 175 "cminus.y"
         {
        createNode((yyval.node), "VarDec", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1438 "cminus.tab.c"
    break;

  case 26: /* VarDec: VarDec LB INT ErrorRb  */
#line 180 "cminus.y"
                            {          /*数组变量*/
        createNode((yyval.node), "VarDec", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-3].node));
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1451 "cminus.tab.c"
    break;

  case 27: /* FunDec: ID LP VarList ErrorRp  */
#line 190 "cminus.y"
                            {
        createNode((yyval.node), "FunDec", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-3].node));
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1464 "cminus.tab.c"
    break;

  case 28: /* FunDec: ID LP ErrorRp  */
#line 198 "cminus.y"
                    {
        createNode((yyval.node), "FunDec", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1476 "cminus.tab.c"
    break;

  case 29: /* VarList: ParamDec COMMA VarList  */
#line 207 "cminus.y"
                             {
        createNode((yyval.node), "VarList", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1488 "cminus.tab.c"
    break;

  case 30: /* VarList: ParamDec  */
#line 214 "cminus.y"
               {
        createNode((yyval.node), "VarList", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1498 "cminus.tab.c"
    break;

  case 31: /* ParamDec: Specifier VarDec  */
#line 221 "cminus.y"
                       {
        createNode((yyval.node), "ParamDec", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1509 "cminus.tab.c"
    break;

  case 32: /* CompSt: LC DefList StmtList ErrorRc  */
#line 229 "cminus.y"
                                  {
        createNode((yyval.node), "CompSt", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-3].node));
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1522 "cminus.tab.c"
    break;

  case 33: /* StmtList: Stmt StmtList  */
#line 239 "cminus.y"
                    {
        createNode((yyval.node), "StmtList", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1533 "cminus.tab.c"
    break;

  case 34: /* StmtList: %empty  */
#line 245 "cminus.y"
             { (yyval.node) = nullptr; }
#line 1539 "cminus.tab.c"
    break;

  case 35: /* Stmt: Exp ErrorSemi  */
#line 248 "cminus.y"
                    {                   /*a=b+1*/
        createNode((yyval.node), "Stmt", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1550 "cminus.tab.c"
    break;

  case 36: /* Stmt: CompSt  */
#line 254 "cminus.y"
             {                          /*{int a; a=1}*/
        createNode((yyval.node), "Stmt", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1560 "cminus.tab.c"
    break;

  case 37: /* Stmt: RETURN Exp ErrorSemi  */
#line 259 "cminus.y"
                           {            /*return a;*/
        createNode((yyval.node), "Stmt", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1572 "cminus.tab.c"
    break;

  case 38: /* Stmt: IF LP Exp ErrorRp Stmt  */
#line 266 "cminus.y"
                             {             /*if语句*/
        createNode((yyval.node), "Stmt", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-4].node));
        (yyval.node)->children.emplace_back((yyvsp[-3].node));
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1586 "cminus.tab.c"
    break;

  case 39: /* Stmt: IF LP Exp ErrorRp Stmt ELSE Stmt  */
#line 275 "cminus.y"
                                       {    /*if-else语句*/
        createNode((yyval.node), "Stmt", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-6].node));
        (yyval.node)->children.emplace_back((yyvsp[-5].node));
        (yyval.node)->children.emplace_back((yyvsp[-4].node));
        (yyval.node)->children.emplace_back((yyvsp[-3].node));
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1602 "cminus.tab.c"
    break;

  case 40: /* Stmt: WHILE LP Exp ErrorRp Stmt  */
#line 286 "cminus.y"
                                {           /*while语句*/
        createNode((yyval.node), "Stmt", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-4].node));
        (yyval.node)->children.emplace_back((yyvsp[-3].node));
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1616 "cminus.tab.c"
    break;

  case 41: /* DefList: Def DefList  */
#line 298 "cminus.y"
                  {
        createNode((yyval.node), "DefList", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1627 "cminus.tab.c"
    break;

  case 42: /* DefList: %empty  */
#line 304 "cminus.y"
             { (yyval.node) = nullptr; }
#line 1633 "cminus.tab.c"
    break;

  case 43: /* Def: Specifier DecList ErrorSemi  */
#line 307 "cminus.y"
                                  {
        createNode((yyval.node), "Def", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1645 "cminus.tab.c"
    break;

  case 44: /* DecList: Dec  */
#line 316 "cminus.y"
          {
        createNode((yyval.node), "DecList", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1655 "cminus.tab.c"
    break;

  case 45: /* DecList: Dec COMMA DecList  */
#line 321 "cminus.y"
                        {
        createNode((yyval.node), "DecList", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1667 "cminus.tab.c"
    break;

  case 46: /* Dec: VarDec  */
#line 330 "cminus.y"
             {
        createNode((yyval.node), "Dec", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1677 "cminus.tab.c"
    break;

  case 47: /* Dec: VarDec ASSIGNOP Exp  */
#line 335 "cminus.y"
                          {
        createNode((yyval.node), "Dec", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1689 "cminus.tab.c"
    break;

  case 48: /* Exp: Exp ASSIGNOP Exp  */
#line 345 "cminus.y"
                      {                     /*赋值 a=b*/
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1701 "cminus.tab.c"
    break;

  case 49: /* Exp: Exp AND Exp  */
#line 352 "cminus.y"
                  {
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1713 "cminus.tab.c"
    break;

  case 50: /* Exp: Exp OR Exp  */
#line 359 "cminus.y"
                 {
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1725 "cminus.tab.c"
    break;

  case 51: /* Exp: Exp RELOP Exp  */
#line 366 "cminus.y"
                    {                   /*关系运算*/
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1737 "cminus.tab.c"
    break;

  case 52: /* Exp: Exp PLUS Exp  */
#line 373 "cminus.y"
                   {            /*算数表达式*/
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1749 "cminus.tab.c"
    break;

  case 53: /* Exp: Exp MINUS Exp  */
#line 380 "cminus.y"
                    {
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1761 "cminus.tab.c"
    break;

  case 54: /* Exp: Exp STAR Exp  */
#line 387 "cminus.y"
                   {
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1773 "cminus.tab.c"
    break;

  case 55: /* Exp: Exp DIV Exp  */
#line 394 "cminus.y"
                  {
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1785 "cminus.tab.c"
    break;

  case 56: /* Exp: LP Exp ErrorRp  */
#line 401 "cminus.y"
                     {              /*括号表达式*/
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1797 "cminus.tab.c"
    break;

  case 57: /* Exp: MINUS Exp  */
#line 408 "cminus.y"
                {                   /*负数*/
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1808 "cminus.tab.c"
    break;

  case 58: /* Exp: NOT Exp  */
#line 414 "cminus.y"
              {
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1819 "cminus.tab.c"
    break;

  case 59: /* Exp: ID LP Args ErrorRp  */
#line 420 "cminus.y"
                         {          /*函数调用表达式*/
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-3].node));
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1832 "cminus.tab.c"
    break;

  case 60: /* Exp: ID LP ErrorRp  */
#line 428 "cminus.y"
                    {
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1844 "cminus.tab.c"
    break;

  case 61: /* Exp: Exp LB Exp ErrorRb  */
#line 435 "cminus.y"
                         {          /*数组访问表达式*/
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-3].node));
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1857 "cminus.tab.c"
    break;

  case 62: /* Exp: Exp DOT ID  */
#line 443 "cminus.y"
                 {                  /*结构体成员表达式*/
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1869 "cminus.tab.c"
    break;

  case 63: /* Exp: ID  */
#line 450 "cminus.y"
         {                          /*变量名*/
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1879 "cminus.tab.c"
    break;

  case 64: /* Exp: INT  */
#line 455 "cminus.y"
          {
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1889 "cminus.tab.c"
    break;

  case 65: /* Exp: FLOAT  */
#line 460 "cminus.y"
            {
        createNode((yyval.node), "Exp", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1899 "cminus.tab.c"
    break;

  case 66: /* Args: Exp COMMA Args  */
#line 467 "cminus.y"
                     {  
        createNode((yyval.node), "Args", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[-2].node));
        (yyval.node)->children.emplace_back((yyvsp[-1].node));
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1911 "cminus.tab.c"
    break;

  case 67: /* Args: Exp  */
#line 474 "cminus.y"
          {
        createNode((yyval.node), "Args", codeLine);
        (yyval.node)->children.emplace_back((yyvsp[0].node));
        updateNodeLine((yyval.node));
    }
#line 1921 "cminus.tab.c"
    break;


#line 1925 "cminus.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 481 "cminus.y"


void yyerror (char const *s)
{
    isSuccess = false;
    /*printf("Error type B at Line %d: %s\n", codeLine, s); */
}
