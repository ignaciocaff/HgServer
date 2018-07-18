
#define DEF_UPPERVERSION		"3"
#define DEF_LOWERVERSION 		"00"

#define DEF_BUILDDATE			1126


// Those versions are hidden the client version
// they are used to change some MSGID (Anti-hgack)
#define DEF_HIDDEN_LOWERVERSION		67

#define DEF_VERSIONPLUSMODIFIER     1+(DEF_HIDDEN_LOWERVERSION % 9) 
//that can be whatever number you wish, 1 byte-sized numbers will work fine

//NB: The version check is with the MainLog server, not the gserver!