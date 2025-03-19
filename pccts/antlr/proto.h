/*
 * proto.h -- function prototypes
 *
 * SOFTWARE RIGHTS
 *
 * We reserve no LEGAL rights to the Purdue Compiler Construction Tool
 * Set (PCCTS) -- PCCTS is in the public domain.  An individual or
 * company may do whatever they wish with source code distributed with
 * PCCTS or the code generated by PCCTS, including the incorporation of
 * PCCTS, or its output, into commerical software.
 *
 * We encourage users to develop software with PCCTS.  However, we do ask
 * that credit is given to us for developing PCCTS.  By "credit",
 * we mean that if you incorporate our source code into one of your
 * programs (commercial product, research project, or otherwise) that you
 * acknowledge this fact somewhere in the documentation, research report,
 * etc...  If you like PCCTS and have developed a nice tool with the
 * output, please mention that you developed it using PCCTS.  In
 * addition, we ask that this header remain intact in our source code.
 * As long as these guidelines are kept, we expect to continue enhancing
 * this system and expect to make other tools available as they are
 * completed.
 *
 * ANTLR 1.33
 * Terence Parr
 * Parr Research Corporation
 * with Purdue University and AHPCRC, University of Minnesota
 * 1989-2001
 */

                           /* V a r i a b l e s */

extern int tp;
extern Junction *SynDiag;
extern char Version[];
extern char VersionDef[];
#ifdef __USE_PROTOS
extern void (*fpPrint[])(...);
#else
extern void (*fpPrint[])();
#endif
#ifdef __USE_PROTOS
extern struct _set (*fpReach[])(...);
#else
extern struct _set (*fpReach[])();
#endif
#ifdef __USE_PROTOS
extern struct _tree *(*fpTraverse[])(...);
#else
extern struct _tree *(*fpTraverse[])();
#endif
#ifdef __USE_PROTOS
extern void (**fpTrans)(...);
#else
extern void (**fpTrans)();
#endif
#ifdef __USE_PROTOS
extern void (**fpJTrans)(...);
#else
extern void (**fpJTrans)();
#endif
#ifdef __USE_PROTOS
extern void (*C_Trans[NumNodeTypes+1])(...);
#else
extern void (*C_Trans[])();
#endif
#ifdef __USE_PROTOS
extern void (*C_JTrans[NumJuncTypes+1])(...);
#else
extern void (*C_JTrans[])();
#endif
extern int BlkLevel;
extern int CurFile;
extern char *CurPredName;
extern char *CurRule;
extern int  CurRuleDebug;                       /* MR13 */
extern Junction *CurRuleBlk;
extern RuleEntry *CurRuleNode;
extern ListNode *CurElementLabels;
extern ListNode *CurAstLabelsInActions;         /* MR27 */
extern ListNode *ContextGuardPredicateList;     /* MR13 */
extern ListNode *CurActionLabels;
extern int numericActionLabel;        /* MR10 << ... $1 ... >> or << ... $1 ... >>?   */
extern ListNode *NumericPredLabels;   /* MR10 << ... $1 ... >>?  ONLY                 */
extern char *FileStr[];
extern int NumFiles;
extern int EpToken;
extern int WildCardToken;
extern Entry	**Tname,
				**Texpr,
				**Rname,
				**Fcache,
				**Tcache,
				**Elabel,
				**Sname,
                **Pname;    /* MR11 */
extern ListNode *ExprOrder;
extern ListNode **Cycles;
extern int TokenNum;
extern int LastTokenCounted;
extern ListNode *BeforeActions, *AfterActions, *LexActions;

/* MR1							                        		    */
/* MR1  11-Apr-97	Provide mechanism for inserting code into DLG class     */
/* MR1			  via #lexmember <<....>> & #lexprefix <<...>>              */
/* MR1									    */

extern ListNode *LexMemberActions;			 	             /* MR1 */
extern ListNode *LexPrefixActions;				             /* MR1 */

extern set *fset;   /* for constrained search */             /* MR11 */
extern int maxk;    /* for constrained search */             /* MR11 */
extern int Save_argc;                                        /* MR10 */
extern char **Save_argv;                                     /* MR10 */
extern ListNode *eclasses, *tclasses;
extern char	*HdrAction;
extern char *FirstAction;                                    /* MR11 */
extern FILE	*ErrFile;
extern char *RemapFileName;
extern char *ErrFileName;
extern char *DlgFileName;
extern char *DefFileName;
extern char *ModeFileName;
extern char *StdMsgName;
extern int NumRules;
extern Junction **RulePtr;
extern int LL_k;
extern int CLL_k;
extern char *decodeJType[];
extern int PrintOut;
extern int PrintAnnotate;
extern int CodeGen;
extern int LexGen;
extern int esetnum;
extern int setnum;
extern int wordnum;
extern int GenAST;
extern int GenANSI;
extern int **FoStack;
extern int **FoTOS;
extern int GenExprSetsOpt;
extern FILE *DefFile;
extern int CannotContinue;
extern int GenCR;
extern int GenLineInfo;
extern int GenLineInfoMS;
extern int action_file, action_line;
extern int TraceGen;
extern int CurAmbigAlt1, CurAmbigAlt2, CurAmbigline, CurAmbigfile;
extern char *CurAmbigbtype;
extern int elevel;
extern int GenEClasseForRules;
extern FILE *input, *output;
extern char **TokenStr, **ExprStr;
extern int CurrentLexClass, NumLexClasses;
extern LClass lclass[];
extern char LexStartSymbol[];
extern char	*CurRetDef;
extern char	*CurParmDef;
extern int OutputLL_k;
extern int TreeResourceLimit;
extern int DemandLookahead;
extern char *RulePrefix;
extern int GenStdPccts;
extern char *stdpccts;
extern int ParseWithPredicates;
extern int ConstrainSearch;
extern int PURIFY;													/* MR23 */

extern set MR_CompromisedRules;                                     /* MR14 */
extern int MR_AmbSourceSearch;                                      /* MR11 */
extern int MR_SuppressSearch;                                       /* MR13 */
extern int MR_AmbSourceSearchGroup;                                 /* MR11 */
extern int MR_AmbSourceSearchChoice;                                /* MR11 */
extern int MR_AmbSourceSearchLimit;                                 /* MR11 */
extern int MR_usingPredNames;                                       /* MR11 */
extern int MR_ErrorSetComputationActive;                            /* MR14 */
extern char *MR_AmbAidRule;                                         /* MR11 */
extern int   MR_AmbAidLine;                                         /* MR11 */
extern int   MR_AmbAidMultiple;                                     /* MR11 */
extern int MR_AmbAidDepth;                                          /* MR11 */
extern int MR_skipped_e3_report;                                    /* MR11 */
extern int MR_matched_AmbAidRule;                                   /* MR11 */
extern int MR_Inhibit_Tokens_h_Gen;                                 /* MR13 */
extern int NewAST;                                                  /* MR13 */
extern int tmakeInParser;                                           /* MR23 */
extern int AlphaBetaTrace;                                          /* MR14 */
extern int MR_BlkErr;                                               /* MR21 */
extern int MR_AlphaBetaWarning;                                     /* MR14 */
extern int MR_AlphaBetaMessageCount;                                /* MR14 */
extern int MR_MaintainBackTrace;                                    /* MR14 */
extern int MR_BadExprSets;                                          /* MR13 */
extern int FoundGuessBlk;
extern int FoundException;
extern int FoundAtOperator;				                             /* MR6 */
extern int FoundExceptionGroup;                                      /* MR6 */
extern int WarningLevel;
extern int UseStdout;					                             /* MR6 */
extern int TabWidth;					                             /* MR6 */
extern int pLevel;
extern int pAlt1;
extern int pAlt2;
extern int AImode;
extern int HoistPredicateContext;
extern int MRhoisting;                                               /* MR9 */
extern int MRhoistingk;                                              /* MR13 */
extern int MR_debugGenRule;                                          /* MR11 */
extern int GenCC;
extern char *ParserName;
extern char *StandardSymbols[];
extern char *ASTSymbols[];
extern set reserved_positions;
extern set all_tokens;
extern set imag_tokens;
extern set tokclasses;
extern ListNode *ForcedTokens;
extern int *TokenInd;
extern FILE *Parser_h, *Parser_c;
extern char CurrentClassName[];
extern int no_classes_found;
extern char Parser_h_Name[];
extern char Parser_c_Name[];
extern char MRinfoFile_Name[];                                      /* MR10 */
extern FILE *MRinfoFile;                                            /* MR10 */
extern int MRinfo;                                                  /* MR10 */
extern int MRinfoSeq;                                               /* MR10 */
extern int InfoP;                                                   /* MR10 */
extern int InfoT;                                                   /* MR10 */
extern int InfoF;                                                   /* MR10 */
extern int InfoM;                                                   /* MR10 */
extern int InfoO;                                                   /* MR12 */
extern int PotentialSuppression;                                    /* MR10 */
extern int PotentialDummy;                                          /* MR10 */
extern int TnodesInUse;                                             /* MR10 */
extern int TnodesPeak;                                              /* MR10 */
extern int TnodesReportThreshold;                                   /* MR11 */
extern int TnodesAllocated;                                         /* MR10 */
extern char *ClassDeclStuff;                                        /* MR10 */
extern char *BaseClassName;                                         /* MR22 */
extern ListNode *class_before_actions, *class_after_actions;
extern char *UserTokenDefsFile;
extern int UserDefdTokens;
extern ListNode *MetaTokenNodes;
extern char *OutputDirectory;
extern int DontCopyTokens;
extern int LTinTokenAction;                                         /* MR23 */
extern set AST_nodes_refd_in_actions;
extern ListNode *CurExGroups;
extern int CurBlockID;
extern int CurAltNum;
extern Junction *CurAltStart;
extern Junction *OuterAltStart;               /* chain exception groups MR7 */
extern ExceptionGroup *DefaultExGroup;
extern int NumSignals;
extern int ContextGuardTRAV;
extern Junction *MR_RuleBlkWithHalt;            /* MR10 */
extern PointerStack MR_BackTraceStack;          /* MR10 */
extern PointerStack MR_PredRuleRefStack;        /* MR10 */
extern PointerStack MR_RuleBlkWithHaltStack;    /* MR10 */

/*									*/
/* MR1	10-Apr-97  MR1  Previously unable to put right shift operator	    */
/* MR1					in DLG action			                    */
/*								                                            */
extern int tokenActionActive;	                                     /* MR1 */

extern char *PRED_OR_LIST;                                          /* MR10 */
extern char *PRED_AND_LIST;                                         /* MR10 */

#ifdef __VMS
#define STRICMP strcasecmp /* MR21 */
#else
#define STRICMP stricmp /* MR21 */
#endif

/* MR26 */
#ifdef PCCTS_USE_STDARG
extern Tree *tmake(Tree *root, ...);
#else
extern Tree *tmake();
#endif

#ifdef __USE_PROTOS
extern int STRICMP(const char*, const char*);
extern void istackreset(void);
extern int istacksize(void);
extern void pushint(int);
extern int popint( void );
extern int istackempty( void );
extern int topint( void );
extern void NewSetWd( void );
extern void DumpSetWd( void );
extern void DumpSetWdForC( void );
extern void DumpSetWdForCC( void );
extern void NewSet( void );
extern void FillSet( set );
extern void ComputeErrorSets( void );
extern void ComputeTokSets( void );
extern void SubstErrorClass( set * );
extern int DefErrSet( set *, int, char * );
extern int DefErrSetForC( set *, int, char * );
extern int DefErrSetForCC( set *, int, char * );
extern int DefErrSet1(int, set *, int, char *);                         /* MR21 */
extern int DefErrSetForC1(int, set *, int, char *, const char* );       /* MR21 */
extern int DefErrSetForCC1(int, set *, int, char *, const char* );      /* MR21 */
extern int DefErrSetWithSuffix(int, set *, int, char *, const char *);  /* MR21 */
extern void GenErrHdr( void );
extern void dumpExpr( FILE *, char * );
extern void addParm( Node *, char * );
extern Graph buildAction( char *, int, int, int );
extern Graph buildToken( char * );
extern Graph buildWildCard( char * );
extern Graph buildRuleRef( char * );
extern Graph Or( Graph, Graph );
extern Graph Cat( Graph, Graph );
extern Graph makeOpt( Graph, int, char *);
extern Graph makeBlk( Graph, int, char *);
extern Graph makeLoop( Graph, int, char *);
extern Graph makePlus( Graph, int, char *);
extern Graph emptyAlt( void );
extern Graph emptyAlt3( void );
extern TokNode * newTokNode( void );
extern RuleRefNode * newRNode( void );
extern Junction * newJunction( void );
extern ActionNode * newActionNode( void );
extern char * makelocks( void );
extern void preorder( Tree * );
extern Tree * tnode( int );
extern void _Tfree( Tree * );
extern Tree * tdup( Tree * );
extern int is_single_tuple( Tree * );
extern Tree * tappend( Tree *, Tree * );
extern void Tfree( Tree * );
extern Tree * tlink( Tree *, Tree *, int );
extern Tree * tshrink( Tree * );
extern Tree * tflatten( Tree * );
extern Tree * tJunc( Junction *, int, set * );
extern Tree * tRuleRef( RuleRefNode *, int, set * );
extern Tree * tToken( TokNode *, int, set * );
extern Tree * tAction( ActionNode *, int, set * );
extern int tmember( Tree *, Tree * );
extern int tmember_constrained( Tree *, Tree * );
extern Tree * tleft_factor( Tree * );
extern Tree * trm_perm( Tree *, Tree * );
extern void tcvt( set *, Tree * );
extern Tree * permute( int, int );
extern Tree * VerifyAmbig( Junction *, Junction *, unsigned **, set *, Tree **, Tree **, int * );
extern set rJunc( Junction *, int, set * );
extern set rRuleRef( RuleRefNode *, int, set * );
extern set rToken( TokNode *, int, set * );
extern set rAction( ActionNode *, int, set * );
extern void HandleAmbiguity( Junction *, Junction *, Junction *, int );
extern set First( Junction *, int, int, int * );
extern void freeBlkFsets( Junction * );
extern void genAction( ActionNode * );
extern void genRuleRef( RuleRefNode * );
extern void genToken( TokNode * );
extern void genOptBlk( Junction * );
extern void genLoopBlk( Junction *, Junction *, Junction *, int );
extern void genLoopBegin( Junction * );
extern void genPlusBlk( Junction * );
extern void genSubBlk( Junction * );
extern void genRule( Junction * );
extern void genJunction( Junction * );
extern void genEndBlk( Junction * );
extern void genEndRule( Junction * );
extern void genHdr( int );
extern void genHdr1( int );
extern void dumpAction( char *, FILE *, int, int, int, int );
extern void dumpActionPlus(ActionNode*, char *, FILE *, int, int, int, int );   /* MR21 */
extern Entry ** newHashTable( void );
extern Entry * hash_add( Entry **, char *, Entry * );
extern Entry * hash_get( Entry **, char * );
extern void hashStat( Entry ** );
extern char * mystrdup( char * );
extern void genLexDescr( void );
extern void dumpLexClasses( FILE * );
extern void genDefFile( void );
extern void DumpListOfParmNames( char *, FILE *, int );	/* MR5 janm 26-May-97 */
extern int DumpNextNameInDef( char **, FILE * );
extern void DumpOldStyleParms( char *, FILE * );
extern void DumpType( char *, FILE * );
extern int strmember( char *, char * );
/* extern int HasComma( char * ); MR23 Replaced by hasMultipleOperands() */
extern void DumpRetValStruct( FILE *, char *, int );
extern char * StripQuotes( char * );
extern int main( int, char *[] );
extern void readDescr( void );
extern FILE * NextFile( void );
extern char * outnameX( char *, char *);
extern char * outname( char * );
extern void fatalFL( char *, char *, int );
extern void fatal_intern( char *, char *, int );
extern void cleanUp( void );
extern char * eMsg3( char *, char *, char *, char * );
extern char * eMsgd( char *, int );
extern char * eMsgd2( char *, int, int );
extern void s_fprT( FILE *, set );
extern char * TerminalString( int );
extern void lexclass( char * );
extern void lexmode( int );
extern int LexClassIndex( char * );
extern int hasAction( char * );
extern void setHasAction( char *, char * );
extern int addTname( char * );
extern int addTexpr( char * );
extern int Tnum( char * );
extern void Tklink( char *, char * );
extern Entry * newEntry( char *, int );
extern void list_add( ListNode **, void * );
extern void list_free( ListNode **, int freeData );     /* MR10 */
extern void list_apply( ListNode *, void (*)(void *) );
extern int list_search_cstring (ListNode *, char *);    /* MR27 */
extern char * Fkey( char *, int, int );
extern void FoPush( char *, int );
extern void FoPop( int );
extern void RegisterCycle( char *, int );
extern void ResolveFoCycles( int );
extern void pJunc( Junction * );
extern void pRuleRef( RuleRefNode * );
extern void pToken( TokNode * );
extern void pAction( ActionNode * );
extern void FoLink( Node * );
extern void addFoLink( Node *, char *, Junction * );
extern void GenCrossRef( Junction * );
extern void defErr( char *, long, long, long, long, long, long );
extern void genStdPCCTSIncludeFile(FILE *,char *);                  /* MR10 */
extern char * pcctsBaseName(char *);                                /* MR32 */
extern Predicate *find_predicates(Node *);                          /* MR10 */
extern Predicate *MR_find_predicates_and_supp(Node *);              /* MR13 */
extern int predicateLookaheadDepth(ActionNode *);                   /* MR10 */
extern void predicate_free(Predicate *);                            /* MR10 */
extern Predicate * predicate_dup(Predicate *);                      /* MR10 */
extern Predicate * predicate_dup_without_context(Predicate *);      /* MR11 */
extern void GenRulePrototypes(FILE *, Junction *);
extern Junction *first_item_is_guess_block(Junction *);
extern Junction *first_item_is_guess_block_extra(Junction * q);		/* MR30 */
extern Junction *analysis_point(Junction *);
extern Tree *make_tree_from_sets(set *, set *);
extern Tree *tdup_chain(Tree *);
extern Tree *tdif(Tree *, Predicate *, set *, set *);
extern set covered_set(Predicate *);
extern void AmbiguityDialog(Junction *, int, Junction *, Junction *, int *, int *);
extern void dumpAmbigMsg(set *, FILE *, int);
extern void GenRuleFuncRedefs(FILE *, Junction *);
extern void GenPredefinedSymbolRedefs(FILE *);
extern void GenASTSymbolRedefs(FILE *);
extern void GenRemapFile(void);
extern void GenSetRedefs(FILE *);
extern ForcedToken *newForcedToken(char *, int);
extern void RemapForcedTokens(void);
extern char *TokenOrExpr(int);
extern void setUpperRange(TokNode *, char *);
extern void GenParser_c_Hdr(void);
extern void GenParser_h_Hdr(void);
extern void GenRuleMemberDeclarationsForCC(FILE *, Junction *);
extern int addForcedTname( char *, int );
extern char *OutMetaName(char *);
extern void OutFirstSetSymbol(Junction *q, char *);                 /* MR21 */
extern void warnNoFL(char *err);
extern void warnFL(char *err,char *f,int l);
extern void warn(char *err);
extern void warnNoCR( char *err );
extern void errNoFL(char *err);
extern void errFL(char *err,char *f,int l);
extern void err(char *err);
extern void errNoCR( char *err );
extern void genPredTree( Predicate *p, Node *j, int ,int);
extern UserAction *newUserAction(char *);
extern char *gate_symbol(char *name);
extern char *makeAltID(int blockid, int altnum);
extern void DumpRemainingTokSets(void);
extern void DumpANSIFunctionArgDef(FILE *f, Junction *q, int bInit);  /* MR23 */
extern void DumpFormals(FILE *, char *, int bInit);                   /* MR23 */
extern char* hideDefaultArgs(const char* pdecl);                      /* MR22 VHS */
extern Predicate *computePredFromContextGuard(Graph,int *msgDone);    /* MR21 */
extern void recomputeContextGuard(Predicate *);                       /* MR13 */
extern Predicate *new_pred(void);
extern void chkGTFlag(void);
extern void leAdd(LabelEntry *);                                     /* MR7 */
extern void leFixup(void);                                           /* MR7 */
extern void egAdd(ExceptionGroup *);                                 /* MR7 */
extern void egFixup(void);                                           /* MR7 */
extern void altAdd(Junction *);                                      /* MR7 */
extern void altFixup(void);                                          /* MR7 */
extern Predicate * MR_find_in_aSubBlk(Junction *alt);                /* MR10 */
extern Predicate * MR_predFlatten(Predicate *p);				     /* MR10 */
extern Predicate * MR_predSimplifyALL(Predicate *p);	             /* MR10 */
extern Predicate * MR_predSimplifyALLX(Predicate *p,int skipPass3);  /* MR10 */
extern int MR_allPredLeaves(Predicate *p);                           /* MR10 */
extern void MR_cleanup_pred_trees(Predicate *p);                     /* MR10 */
extern int MR_predicate_context_completed(Predicate *p);             /* MR10 */
extern void MR_check_pred_too_long(Predicate *p,set completion);     /* MR10 */
extern Tree * MR_remove_epsilon_from_tree(Tree *t);                  /* MR10 */
extern Tree * MR_computeTreeAND(Tree *l,Tree *r);					 /* MR10 */
extern int MR_tree_equ(Tree *big, Tree *small);				         /* MR10 */
extern set MR_First(int ck,Junction *j,set *incomplete);  		     /* MR10 */
extern set MR_compute_pred_set(Predicate *p);                	     /* MR10 */
extern Tree * MR_compute_pred_tree_context(Predicate *p);     	     /* MR10 */
extern int MR_pointerStackPush(PointerStack *,void *);               /* MR10 */
extern void * MR_pointerStackPop(PointerStack *);                    /* MR10 */
extern void * MR_pointerStackTop(PointerStack *);                    /* MR10 */
extern void MR_pointerStackReset(PointerStack *);                    /* MR10 */
extern void MR_backTraceReport(void);                                /* MR10 */
extern void MR_alphaBetaTraceReport(void);                           /* MR14 */
extern void MR_dumpRuleSet(set);                                     /* MR14 */
extern void MR_predContextPresent(Predicate *p,int *,int *);         /* MR10 */
extern void MR_dumpPred(Predicate *p,int withContext);               /* MR10 */
extern void MR_dumpPred1(int,Predicate *p,int withContext);          /* MR10 */
extern void MR_xxxIndent(FILE *f,int depth);                         /* MR11 */
extern void MR_outputIndent(int depth);                              /* MR11 */
extern void MR_stderrIndent(int depth);                              /* MR11 */
extern Junction * MR_ruleReferenced(RuleRefNode *rrn);               /* MR10 */
extern Junction * MR_nameToRuleBlk(char *);                          /* MR10 */
extern void MR_releaseResourcesUsedInRule(Node *);                   /* MR10 */
extern void MR_dumpTreeX(int depth,Tree *t,int across);              /* MR10 */
extern void MR_dumpTreeF(FILE *f,int depth,Tree *t,int across);      /* MR10 */
extern void DumpFcache(void);                                        /* MR10 */
extern void MR_dumpTokenSet(FILE *f,int depth,set s);                /* MR10 */
extern void MR_traceAmbSource(set *,Junction *,Junction *);          /* MR11 */
extern void MR_traceAmbSourceK(Tree *,Junction *a1,Junction *a2);    /* MR11 */
extern void MR_traceAmbSourceKclient(void);                          /* MR20 */
extern Node *MR_advance(Node *);                                     /* MR11 */
extern int  MR_offsetFromRule(Node *);                               /* MR11 */
extern char *MR_ruleNamePlusOffset(Node *);                          /* MR11 */
extern int  MR_max_height_of_tree(Tree *);                           /* MR11 */
extern int  MR_all_leaves_same_height(Tree *,int);                   /* MR11 */
extern void MR_projectTreeOntoSet(Tree *t,int k,set *);              /* MR11 */
extern Tree *MR_make_tree_from_set(set);                             /* MR11 */
extern Predicate *MR_removeRedundantPredPass3(Predicate *);          /* MR11 */
extern void MR_pred_depth(Predicate *,int *);                        /* MR11 */
extern int  MR_comparePredicates(Predicate *,Predicate *);           /* MR11 */
extern Predicate * MR_unfold(Predicate *);                           /* MR11 */
extern void MR_simplifyInverted(Predicate *,int);                    /* MR11 */
extern int  MR_secondPredicateUnreachable                            /* MR11 */
            (Predicate *first,Predicate *second);                    /* MR11 */
extern void MR_clearPredEntry(Predicate *);                          /* MR11 */
extern void MR_orphanRules(FILE *);                                  /* MR12 */
extern void MR_merge_contexts(Tree *);                               /* MR12 */
extern int  ci_strequ(char *,char *);                                 /* MR12 */
extern void MR_guardPred_plainSet(ActionNode *anode,Predicate *);    /* MR12c */
extern void MR_suppressSearchReport(void);                           /* MR12c */
extern Predicate * MR_suppressK(Node *,Predicate *);                 /* MR13 */
extern void MR_backTraceDumpItem(FILE *,int skip,Node *n);           /* MR13 */
extern void MR_backTraceDumpItemReset(void);                         /* MR13 */
extern Junction * MR_junctionWithoutP2(Junction *);                  /* MR13 */
extern void MR_setConstrainPointer(set *);							 /* MR18 */
extern void BlockPreambleOption(Junction *q, char * pSymbol);        /* MR23 */
extern char* getInitializer(char *);                                 /* MR23 */
extern char *endFormal(char *pStart,                                 /* MR23 */
					   char **ppDataType,                            /* MR23 */
					   char **ppSymbol,                              /* MR23 */
					   char **ppEqualSign,                           /* MR23 */
					   char **ppValue,                               /* MR23 */
					   char **ppSeparator,                           /* MR23 */
					   int *pNext);                                  /* MR23 */
extern char *strBetween(char *pStart,                                /* MR23 */
						char *pNext,                                 /* MR23 */
						char *pStop);                                /* MR23 */
extern int hasMultipleOperands(char *);                              /* MR23 */
extern void DumpInitializers(FILE*, RuleEntry*, char*);              /* MR23 */
extern int isTermEntryTokClass(TermEntry *);						 /* MR23 */
extern int isEmptyAlt(Node *, Node *);                               /* MR23 */
#else
extern int STRICMP();
extern void istackreset();
extern int istacksize();
extern void pushint();
extern int popint();
extern int istackempty();
extern int topint();
extern void NewSetWd();
extern void DumpSetWd();
extern void DumpSetWdForC();
extern void DumpSetWdForCC();
extern void NewSet();
extern void FillSet();
extern void ComputeErrorSets();
extern void ComputeTokSets();
extern void SubstErrorClass();
extern int DefErrSet();
extern int DefErrSetForC();
extern int DefErrSetForCC();
extern int DefErrSet1();
extern int DefErrSetForC1();
extern int DefErrSetForCC1();
extern int DefErrSetWithSuffix();                                   /* MR21 */
extern void GenErrHdr();
extern void dumpExpr();
extern void addParm();
extern Graph buildAction();
extern Graph buildToken();
extern Graph buildWildCard();
extern Graph buildRuleRef();
extern Graph Or();
extern Graph Cat();
extern Graph makeOpt();
extern Graph makeBlk();
extern Graph makeLoop();
extern Graph makePlus();
extern Graph emptyAlt();
extern Graph emptyAlt3();
extern TokNode * newTokNode();
extern RuleRefNode * newRNode();
extern Junction * newJunction();
extern ActionNode * newActionNode();
extern char * makelocks();
extern void preorder();
extern Tree * tnode();
extern void _Tfree();
extern Tree * tdup();
extern int is_single_tuple();
extern Tree * tappend();
extern void Tfree();
extern Tree * tlink();
extern Tree * tshrink();
extern Tree * tflatten();
extern Tree * tJunc();
extern Tree * tRuleRef();
extern Tree * tToken();
extern Tree * tAction();
extern int tmember();
extern int tmember_constrained();
extern Tree * tleft_factor();
extern Tree * trm_perm();
extern void tcvt();
extern Tree * permute();
extern Tree * VerifyAmbig();
extern set rJunc();
extern set rRuleRef();
extern set rToken();
extern set rAction();
extern void HandleAmbiguity();
extern set First();
extern void freeBlkFsets();
extern void genAction();
extern void genRuleRef();
extern void genToken();
extern void genOptBlk();
extern void genLoopBlk();
extern void genLoopBegin();
extern void genPlusBlk();
extern void genSubBlk();
extern void genRule();
extern void genJunction();
extern void genEndBlk();
extern void genEndRule();
extern void genHdr();
extern void genHdr1();
extern void dumpAction();
extern void dumpActionPlus();                           /* MR21 */
extern Entry ** newHashTable();
extern Entry * hash_add();
extern Entry * hash_get();
extern void hashStat();
extern char * mystrdup();
extern void genLexDescr();
extern void dumpLexClasses();
extern void genDefFile();
extern void DumpListOfParmNames();                    /* MR5 janm 26-May-97 */
extern int DumpNextNameInDef();
extern void DumpOldStyleParms();
extern void DumpType();
extern int strmember();
/* extern int HasComma(); MR23 Replaced by hasMultipleOperands() */
extern void DumpRetValStruct();
extern char * StripQuotes();
extern int main();
extern void readDescr();
extern FILE * NextFile();
extern char * outnameX();
extern char * outname();
extern void fatalFL();
extern void fatal_intern();
extern void cleanUp();
extern char * eMsg3();
extern char * eMsgd();
extern char * eMsgd2();
extern void s_fprT();
extern char * TerminalString();
extern void lexclass();
extern void lexmode();
extern int LexClassIndex();
extern int hasAction();
extern void setHasAction();
extern int addTname();
extern int addTexpr();
extern int Tnum();
extern void Tklink();
extern Entry * newEntry();
extern void list_add();
extern void list_free();                /* MR10 */
extern void list_apply();
extern int list_search_cstring ();      /* MR27 */
extern char * Fkey();
extern void FoPush();
extern void FoPop();
extern void RegisterCycle();
extern void ResolveFoCycles();
extern void pJunc();
extern void pRuleRef();
extern void pToken();
extern void pAction();
extern void FoLink();
extern void addFoLink();
extern void GenCrossRef();
extern void defErr();
extern void genStdPCCTSIncludeFile();
extern char * pcctsBaseName();                                /* MR32 */
extern Predicate *find_predicates();
extern Predicate *MR_find_predicates_and_supp();              /* MR13 */
extern int predicateLookaheadDepth();                         /* MR10 */
extern void predicate_free();                                 /* MR10 */
extern Predicate * predicate_dup();                           /* MR10 */
extern Predicate * predicate_dup_without_context();           /* MR11 */
extern void GenRulePrototypes();
extern Junction *first_item_is_guess_block();
extern Junction *first_item_is_guess_block_extra();			  /* MR30 */
extern Junction *analysis_point();
extern Tree *make_tree_from_sets();
extern Tree *tdup_chain();
extern Tree *tdif();
extern set covered_set();
extern void AmbiguityDialog();
extern void dumpAmbigMsg();
extern void GenRuleFuncRedefs();
extern void GenPredefinedSymbolRedefs();
extern void GenASTSymbolRedefs();
extern void GenRemapFile();
extern void GenSetRedefs();
extern ForcedToken *newForcedToken();
extern void RemapForcedTokens();
extern char *TokenOrExpr();
extern void setUpperRange();
extern void GenParser_c_Hdr();
extern void GenParser_h_Hdr();
extern void GenRuleMemberDeclarationsForCC();
extern int addForcedTname();
extern char *OutMetaName();
extern void OutFirstSetSymbol();                            /* MR21 */
extern void warnNoFL();
extern void warnFL();
extern void warn();
extern void warnNoCR();
extern void errNoFL();
extern void errFL();
extern void err();
extern void errNoCR();
extern void genPredTree();
extern UserAction *newUserAction();
extern char *gate_symbol();
extern char *makeAltID();
extern void DumpRemainingTokSets();
extern void DumpANSIFunctionArgDef();
extern void DumpFormals();                                           /* MR23 */
extern char* hideDefaultArgs();                                      /* MR22 VHS */
extern Predicate *computePredFromContextGuard();
extern void recomputeContextGuard();                                 /* MR13 */
extern Predicate *new_pred();
extern void chkGTFlag();
extern void leAdd();                                                 /* MR7 */
extern void leFixup();                                               /* MR7 */
extern void egAdd();                                                 /* MR7 */
extern void egFixup();                                               /* MR7 */
extern void altAdd();                                                /* MR7 */
extern void altFixup();                                              /* MR7 */
extern Predicate * MR_find_in_aSubBlk();       		                /* MR10 */
extern Predicate * MR_predFlatten();						        /* MR10 */
extern Predicate * MR_predSimplifyALL();                            /* MR10 */
extern Predicate * MR_predSimplifyALLX();                           /* MR10 */
extern void MR_cleanup_pred_trees();                                /* MR10 */
extern int MR_allPredLeaves();                                      /* MR10 */
extern int MR_predicate_context_completed();                        /* MR10 */
extern void MR_check_pred_too_long();                               /* MR10 */
extern Tree * MR_remove_epsilon_from_tree();				        /* MR10 */
extern Tree * MR_computeTreeAND();					                /* MR10 */
extern int MR_tree_equ();                   				        /* MR10 */
extern set MR_First();				                                /* MR10 */
extern set MR_compute_pred_set();				                    /* MR10 */
extern Tree * MR_compute_pred_tree_context();				        /* MR10 */
extern int MR_pointerStackPush();                                   /* MR10 */
extern void * MR_pointerStackPop();                                 /* MR10 */
extern void * MR_pointerStackTop();                                 /* MR10 */
extern void MR_pointerStackReset();                                 /* MR10 */
extern void MR_backTraceReport();                                   /* MR10 */
extern void MR_alphaBetaTraceReport();                              /* MR14 */
extern void MR_dumpRuleSet();                                       /* MR14 */
extern void MR_predContextPresent();                                /* MR10 */
extern void MR_dumpPred();                                          /* MR10 */
extern void MR_dumpPred1();                                         /* MR10 */
extern void MR_xxxIndent();                                         /* MR11 */
extern void MR_stderrIndent();                                      /* MR11 */
extern void MR_outputIndent();                                      /* MR11 */
extern Junction * MR_ruleReferenced();                              /* MR10 */
extern void MR_releaseResourcesUsedInRule();                        /* MR10 */
extern void MR_dumpTreeX();                                         /* MR10 */
extern void MR_dumpTreeF();                                         /* MR10 */
extern void DumpFcache();                                           /* MR10 */
extern void MR_dumpTokenSet();                                      /* MR10 */
extern void MR_traceAmbSource();                                    /* MR11 */
extern Node *MR_advance();                                          /* MR11 */
extern int  MR_offsetFromRule();                                    /* MR11 */
extern char *MR_ruleNamePlusOffset();                               /* MR11 */
extern void MR_traceAmbSourceK();                                   /* MR11 */
extern void MR_traceAmbSourceKclient();                             /* [i_a] added */
extern int  MR_max_height_of_tree();                                /* MR11 */
extern int  MR_all_leaves_same_height();                            /* MR11 */
extern void MR_projectTreeOntoSet();                                /* MR11 */
extern Tree *MR_make_tree_from_set();                               /* MR11 */
extern Predicate *MR_removeRedundantPredPass3();                    /* MR11 */
extern void MR_pred_depth();                                        /* MR11 */
extern int  MR_comparePredicates();                                 /* MR11 */
extern Predicate * MR_unfold();                                     /* MR11 */
extern void MR_simplifyInverted();                                  /* MR11 */
extern int  MR_secondPredicateUnreachable();                        /* MR11 */
extern Junction * MR_nameToRuleBlk();                               /* MR10 */
extern void MR_clearPredEntry();                                    /* MR11 */
extern void MR_orphanRules();                                       /* MR12 */
extern void MR_merge_contexts();                                    /* MR12 */
extern int ci_strequ();                                             /* MR12 */
extern void MR_guardPred_plainSet();                                /* MR12c */
extern void MR_suppressSearchReport();                              /* MR12c */
extern Predicate * MR_suppressK();                                  /* MR13 */
extern void MR_backTraceDumpItem();                                 /* MR13 */
extern void MR_backTraceDumpItemReset();                            /* MR13 */
extern Junction * MR_junctionWithoutP2();                           /* MR13 */
extern void MR_setConstrainPointer();					  		    /* MR18 */
extern void BlockPreambleOption();                                  /* MR23 */
extern char* getInitializer();                                      /* MR23 */
extern int hasMultipleOperands();                                   /* MR23 */
extern char *endFormal();                                           /* MR23 */
extern char *strBetween();                                          /* MR23 */
extern void DumpInitializers();                                     /* MR23 */
extern int isTermEntryTokClass();							 	    /* MR23 */
extern int isEmptyAlt();

#endif

#ifdef __USE_PROTOS
#include <stdlib.h>
#endif

/* MR20 G. Hobbelt  Create proper externs for dlg variables */

extern set attribsRefdFromAction;
extern int inAlt;
extern int UsedOldStyleAttrib;
extern int UsedNewStyleLabel;

#define MAX_BLK_LEVEL 100                       /* MR23 */
extern int     CurBlockID_array[MAX_BLK_LEVEL]; /* MR23 */
extern int     CurAltNum_array[MAX_BLK_LEVEL];  /* MR23 */
