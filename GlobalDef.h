typedef signed char     sBYTE;
typedef signed short    sWORD;
typedef signed long     sDWORD;

#define SAFEDELETE( PointerVariable ){if(PointerVariable != NULL){delete PointerVariable;PointerVariable = NULL;}}
#define SAFEDELETEARRAY( PointerVariable ){if(PointerVariable != NULL){delete [] PointerVariable;PointerVariable = NULL;}}

#define DEF_MAXCRUSADESTRUCTURES		300

#define DEF_BYTESIZE                    1
#define DEF_WORDSIZE                    2
#define DEF_DWORDSIZE                   3

#define DEF_MAXLOGMSGS                  50
#define DEF_MAXLOGMSGSIZE               300
#define DEF_MAXLOGSTOSHOW               39

#define DEF_DEFAULT_MSG                 0x00
#define DEF_WARN_MSG                    0x01
#define DEF_INFO_MSG					0x02

#define DEF_MAXLOGLINESIZE              1000

#define DEF_MSGBUFFERSIZE				100000

#define ANTI_HAX
