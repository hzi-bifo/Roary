extern int intlen( int *num );
extern char seqcheck( char **seq );
extern void scmx_calc( int icyc, char **aseq, double *effarr, double **scmx );
extern void exitall( char arr[] );
extern void display( char **seq, int nseq );
extern void intergroup_score( char **seq1, char **seq2, double *eff1, double *eff2, int clus1, int clus2, int len, double *value );
//extern void intergroup_score_dynmtx( double **pairoffset, int mtx[0x80][0x80], char **seq1, char **seq2, double *eff1, double *eff2, int clus1, int clus2, int len, double *value );
extern void intergroup_score_multimtx( int **whichmtx, double ***matrices, char **seq1, char **seq2, double *eff1, double *eff2, int clus1, int clus2, int len, double *value );
extern void intergroup_score_gapnomi( char **seq1, char **seq2, double *eff1, double *eff2, int clus1, int clus2, int len, double *value );
extern void intergroup_score_new( char **seq1, char **seq2, double *eff1, double *eff2, int clus1, int clus2, int len, double *value );
extern double score_calc5( char **seq, int s, double **eff, int ex );
extern double score_calc4( char **seq, int s, double **eff, int ex );
extern void upg2( int nseq, double **eff, int ***topol, double **len );
//extern void veryfastsupg_double_realloc_nobk_halfmtx( int njob, double **mtx, int ***topol, double **len );
//extern void veryfastsupg_double_realloc_nobk( int njob, double **mtx, int ***topol, double **len );
extern void veryfastsupg_int_realloc_nobk( int njob, int **mtx, int ***topol, double **len );
extern void veryfastsupg( int nseq, double **oeff, int ***topol, double **len );
extern void veryfastsupg_double( int nseq, double **oeff, int ***topol, double **len );
extern void veryfastsupg_double_loadtree( int nseq, double **oeff, int ***topol, double **len, char **name );
//extern void veryfastsupg_double_loadtop( int nseq, double **oeff, int ***topol, double **len );
extern void veryfastsupg_int( int nseq, int **oeff, int ***topol, double **len );
extern void fastsupg( int nseq, double **oeff, int ***topol, double **len );
extern void supg( int nseq, double **oeff, int ***topol, double **len );
extern void spg( int nseq, double **oeff, int ***topol, double **len );
extern double ipower( double x, int n );
extern void countnode( int nseq, int ***topol, double **node );
extern void countnode_int( int nseq, int ***topol, int **node );
extern void counteff_simple( int nseq, int ***topol, double **len, double *node );
extern void counteff_simple_double( int nseq, int ***topol, double **len, double *node );
extern void counteff_simple_double_nostatic( int nseq, int ***topol, double **len, double *node );
extern void counteff( int nseq, int ***topol, double **len, double **node );
extern double score_calc1( char *seq1, char *seq2 );
extern double score_calcp( char *seq1, char *seq2, int len );
extern double substitution_nid( char *seq1, char *seq2 );
extern double substitution_score( char *seq1, char *seq2 );
extern double substitution_hosei( char *seq1, char *seq2 );
extern double substitution( char *seq1, char *seq2 );
extern void treeconstruction( char **seq, int nseq, int ***topol, double **len, double **eff );
extern double bscore_calc( char **seq, int s, double **eff );
extern void AllocateTmpSeqs( char ***mseq2pt, char **mseq1pt, int locnlenmax );
extern void FreeTmpSeqs( char **mseq2, char *mseq1 );
extern void gappick_samestring( char *aseq );
extern void gappick0( char *aseq, char *seq );
extern void gappick( int nseq, int s, char **aseq, char **mseq2, 
					 double **eff, double *effarr );
extern void commongappick_record( int nseq, char **seq, int *map );
extern void commongappick( int nseq, char **seq );
extern int commongapcount( int , int, char **, char ** );
//extern void commongaprecord( int nseq, char **seq, char *originallygapped );
extern double score_calc0( char **seq, int s, double **eff, int ex );
extern void strins( char *str1, char *str2 );
extern int isaligned( int nseq, char **seq );
extern double score_calc_for_score( int nseq, char **seq );
extern void doublencpy( double *vec1, double *vec2, int len );
extern double score_calc_a( char **seq, int s, double **eff );
extern double score_calc_s( char **seq, int s, double **eff );
extern double score_calc_for_score_s( int s, char **seq );
extern double SSPscore( int s, char **seq );
extern double DSPscore( int s, char **seq );
extern int searchAnchors( int nseq, char **seq, Segment *seg );
extern char *progName( char *str );
extern void dontcalcimportance( int nseq, double *eff, char **seq, LocalHom **localhom );
extern void dontcalcimportance_lastone( int nseq, double *eff, char **seq, LocalHom **localhom );
extern void dontcalcimportance_firstone( int nseq, double *eff, char **seq, LocalHom **localhom );
extern void calcimportance( int nseq, double *eff, char **seq, LocalHom **localhom );
extern void weightimportance2( int nseq, double *eff, LocalHom **localhom );
extern void weightimportance4( int clus1, int clus2, double *eff1, double *eff2, LocalHom ***localhom );
extern void extendlocalhom( int nseq, LocalHom **localhom );
extern void extendlocalhom2( int nseq, LocalHom **localhom, double **mtx );
extern int makelocal( char *s1, char *s2, int thr );
extern void mdfymtx( char **pair, int s1, double **partialmtx, double **mtx );
extern double score_calc( char **seq, int s );
extern void cpmx_calc( char **seq, double **cpmx, double *eff, int lgth, int clus );
extern void cpmx_calc_new( char **seq, double **cpmx, double *eff, int lgth, int clus );
extern void MScpmx_calc_new( char **seq, double **cpmx, double *eff, int lgth, int clus );
extern void mseqcat( char **seq1, char **seq2, double **eff, double *effarr1, double *effarr2, char name1[M][B], char name2[M][B], int clus1, int clus2 );
extern void strnbcat( char *s1, char *s2, int m );
extern int conjuctionforgaln( int s0, int s1, char **seq, char **aseq, double *peff, double *eff, char **name, char **aname, char *d );
extern int fastconjuction( int *memlist, char **seq, char **aseq, double *peff, double *eff, char name[M][B], char aname[M][B], char *d );
extern int fastconjuction_noname_kozo( int *memlist, char **seq, char **aseq, double *peff, double *eff, double *peff_kozo, double *eff_kozo, char *d );
extern int fastconjuction_noname( int *memlist, char **seq, char **aseq, double *peff, double *eff, char *d, double mineff );
extern int fastconjuction_noweight( int *memlist, char **seq, char **aseq, double *peff, char *d );
extern int conjuctionfortbfast_old( char **pair, int s, char **seq, char **aseq, double *peff, double *eff, char *d );
extern int conjuction( char **pair, int s, char **seq, char **aseq, double *peff, double *eff, char **name, char **aname, char *d );
extern void doubledelete( double **cpmx, int d, int len );
extern void chardelete( char *seq, int d );
extern int RootBranchNode( int nseq, int ***topol, int step, int branch );
extern void BranchLeafNode( int nseq, int ***topol, int *node, int step, int branch );
extern void RootLeafNode( int nseq, int ***topol, int *node );
extern void nodeFromABranch( int nseq, int *result, int **pairwisenode, int ***topol, double **len, int step, int num );
//extern void OneClusterAndTheOther( int locnjob, char **pair, int *s1, int *s2, int ***topol, int step, int branch );
extern void OneClusterAndTheOther_fast( int locnjob, int *memlist1, int *memlist2, int *s1, int *s2, char *pairbuf, int ***topol, int step, int branch, double **smalldistmtx, double **distmtx, double *distontree );
extern void makeEffMtx( int nseq, double **mtx, double *vec );
extern void node_eff( int nseq, double *eff, int *node );
extern int shrinklocalhom( char **pair, int s1, int s2, LocalHom **localhom, LocalHom ***localhomshrink );
extern int msshrinklocalhom_fast( int *memlist1, int *memlist2, LocalHom **localhom, LocalHom ***localhomshrink );
extern int fastshrinklocalhom( int *mem1, int *mem2, LocalHom **localhom, LocalHom ***localhomshrink );
extern int fastshrinklocalhom_one( int *mem1, int *mem2, int norg, LocalHom **localhom, LocalHom ***localhomshrink );
extern int msfastshrinklocalhom( int *mem1, int *mem2, LocalHom **localhom, LocalHom ***localhomshrink );
extern int TreeDependentIteration( int locnjob, char **name, int nlen[M], char **aseq, char **bseq, int ***topol, double **len, double **eff, int **skipthisbranch, int alloclen, LocalHom **localhomtable, RNApair ***single, int nkozo, char *kozoarivec );
extern void checkMinusLength( int nseq, double **len );
extern void negativeMember2( int *mem, int *query, int locnseq );
extern int *negativeMember( int *query, int locnseq );
extern int IntExistsInVec( int query, int *vector );
extern NodeInCub searchParent( int top, int ***topol, int Start, int End );
extern void stopolInit( int n, Node *stopol );
extern void treeCnv( Node *stopol, int locnseq, int ***topol, double **len, double **bw );
extern int isLeaf( Node node );
extern double syntheticLength( Node *ob, Node *oppositeNode );
extern double calcW( Node *ob, Node *op );
extern void calcBranchWeight( double **bw, int locnseq, Node *stopol, int ***topol, double **len );
extern void branchWeightToPairWeight( int locnseq, int ***topol, double **pw, double **bw );
extern void weightFromABranch( int nseq, double *result, Node *stopol, int ***topol, int step, int LorR );
extern void distFromABranch( int nseq, double *result, Node *stopol, int ***topol, double **len, int step, int LorR );
extern void keika( char *str, int current, int all );
extern double maxItch( double *soukan, int size );
extern void calcNaiseki( Fukusosuu *value, Fukusosuu *x, Fukusosuu *y );
extern Fukusosuu *AllocateFukusosuuVec( int l1 );
extern Fukusosuu **AllocateFukusosuuMtx( int l1, int l2 );
extern Fukusosuu ***AllocateFukusosuuCub( int l1, int l2, int l3 );
extern void FreeFukusosuuVec( Fukusosuu *vec );
extern void FreeFukusosuuMtx( Fukusosuu **mtx );
extern int getKouho( int *kouho, int nkouho, double *soukan, int nlen2 );
extern void zurasu2( int lag, int    clus1, int    clus2, char  **seq1, char  **seq2, char **aseq1, char **aseq2 );
extern void zurasu( int lag, int    clus1, int    clus2, char  **seq1, char  **seq2, char **aseq1, char **aseq2 );
extern int alignableReagion( int    clus1, int    clus2, char  **seq1, char  **seq2, double *eff1, double *eff2, Segment *seg );
extern void blockAlign( int *cut1, int *cut2, double **ocrossscore, int *ncut );
extern void blockAlign2( int *cut1, int *cut2, Segment **seg1, Segment **seg2, double **ocrossscore, int *ncut );
extern void blockAlign3( int *cut1, int *cut2, Segment **seg1, Segment **seg2, double **ocrossscore, int *ncut );
extern double A__align11( char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch );
extern double imp_match_out_scD( int i1, int j1 );
extern void imp_match_init_strictD( double *imp, int clus1, int clus2, int lgth1, int lgth2, char **seq1, char **seq2, double *eff1, double *eff2, double *eff1kozo, double*eff2kozo, LocalHom ***localhom, int forscore );
extern void imp_match_init( double *imp, int clus1, int clus2, int lgth1, int lgth2, char **seq1, char **seq2, double *eff1, double *eff2, LocalHom ***localhom );
extern double MSalignmm( double **n_dynamicmtx, char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, char *, char *, char *, char *, int *, int, int *, int headgp, int tailgp );
extern double MSalignmm_variousdist( double **pairoffset, double ***matrices, double **dummtx, char **seq1, char **seq2, double *eff1, double *eff2, double **eff1s, double **eff2s, int icyc, int jcyc, int alloclen, char *, char *, char *, char *, int *, int, int *, int headgp, int tailgp );
extern double Lalignmm_hmout( char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, char *, char *, char *, char *, double **map );
extern double Lalign2m2m_hmout( char **seq1, char **seq2, char **seq1r, char **seq2r, char *dir1, char *dir2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, char *, char *, char *, char *, double **map );
extern double MSalign11( char **seq1, char **seq2, int alloclen );
//extern double rnalocal( char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, RNApair **pair );
extern double A__align( double **scoringmtx, char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch, char *gs1, char *gs2, char *ge1, char *ge2, int *, int, int *, int headgp, int tailgp );
extern double A__align_variousdist( int **which, double ***scoringmatrices, double **dummtx, char **seq1, char **seq2, double *eff1, double *eff2, double **eff1s, double **eff2s, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch, char *gs1, char *gs2, char *ge1, char *ge2, int *, int, int *, int headgp, int tailgp );
extern double A__align_gapmap( char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch, int *gapmap1, int *gapmap2 );
//extern double D__align_gapmap( char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch, int *gapmap1, int *gapmap2 );
extern double translate_and_Calign( char **mseq1, char **mseq2, double *effarr1, double *effarr2, int clus1, int clus2, int alloclen );
extern double Fgetlag( double **scoringmtx, char  **seq1, char  **seq2, double *eff1, double *eff2, int    clus1, int    clus2, int alloclen );
extern double Falign( int **whichmtx, double ***scoringmatrices, double **scoreingmtx, char  **seq1, char  **seq2, double *eff1, double *eff2, double **eff1s, double **eff2s, int    clus1, int    clus2, int alloclen, int *fftlog, int *, int, int * );
extern double Falign_udpari_long( int **whichmtx, double ***scoringmatrices, double **scoringmtx, char  **seq1, char  **seq2, double *eff1, double *eff2, double **eff1s, double **eff2s, int    clus1, int    clus2, int alloclen, int *fftlog );
double Falign_localhom( int **which, double ***scoringmatrices, double **scoreingmtx, char  **seq1, char  **seq2, double *eff1, double *eff2, double **eff1s, double **eff2s, int    clus1, int    clus2, int alloclen, LocalHom ***localhom, double *totalimpmatch, int *gapmap1, int *gapmap2, int *chudanpt, int chudanref, int *chudanres );
extern double part_imp_match_out_sc( int i1, int j1 );
extern void part_imp_match_init_strict( double *imp, int clus1, int clus2, int lgth1, int lgth2, char **seq1, char **seq2, double *eff1, double *eff2, double *eff1_kozo, double *eff2_kozo, LocalHom ***localhom, int forscore );
extern void part_imp_match_init( double *imp, int clus1, int clus2, int lgth1, int lgth2, char **seq1, char **seq2, double *eff1, double *eff2, LocalHom ***localhom );
extern double partA__align( char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch, int start1, int end1, int start2, int end2, int *gapmap1, int *gapmap2, char *, char *, char *, char *, int *, int, int * );
extern double partA__align_variousdist( int **which, double ***scoringmatrices, double **dummtx, char **seq1, char **seq2, double *eff1, double *eff2, double **eff1s, double **eff2s, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch, int start1, int end1, int start2, int end2, int *gapmap1, int *gapmap2, char *, char *, char *, char *, int *, int, int * );
extern double G__align11( double **scoringmtx, char **seq1, char **seq2, int alloclen, int headgp, int tailgp  );
extern double G__align11_noalign( double **scoringmtx, int penal, int penal_ex, char **seq1, char **seq2, int alloclen );
extern double L__align11( double **scoringmtx, double scoreoffset, char **seq1, char **seq2, int alloclen, int *off1pt, int *off2pt );
extern double L__align11_noalign( double **scoringmtx, char **seq1, char **seq2 );
extern double genL__align11( double **scoringmtx, char **seq1, char **seq2, int alloclen, int *off1pt, int *off2pt );
extern double genG__align11( char **seq1, char **seq2, int alloclen );
extern double VAalign11( char **seq1, char **seq2, int alloclen, int *off1pt, int *off2pt, LocalHom *lhmpt );
extern double suboptalign11( char **seq1, char **seq2, int alloclen, int *off1pt, int *off2pt, LocalHom *lhmpt )
;
extern int fft(int n, Fukusosuu *x, int dum);
extern void topolcpy( int s1[], int s2[], int *mpt1, int *mpt2 );
extern void topolcat( int s1[], int s2[], int *mpt1, int *mpt2 );
extern void topolsort( int m, int s[] );
extern void topolswap( int s1[], int s2[], int *mpt1, int *mpt2 );
extern void reduc( double **mtx, int nseq, int im, int jm );
extern void  nj( int nseq, double **omtx, int ***topol, double **dis );
extern void JTTmtx( double **rsr, double *freq, char locamino[0x80], char locgrp[0x80], int isTM );
extern void BLOSUMmtx( int n, double **matrix, double *freq, char *amino, char *amino_grp );
extern void extendedmtx( double **matrix, double *freq, unsigned char *amino, char *amino_grp );
extern void putlocalhom2( char *al1, char *al2, LocalHom *localhompt, int off1, int off2, int opt, int overlapaa );
extern void putlocalhom_str( char *al1, char *al2, double *equiv, double scale, LocalHom *localhompt, int off1, int off2, int opt, int overlapaa );
extern void putlocalhom_ext( char *al1, char *al2, LocalHom *localhompt, int off1, int off2, int opt, int overlapaa );
extern void putlocalhom3( char *al1, char *al2, LocalHom *localhompt, int off1, int off2, int opt, int overlapaa );
extern void putlocalhom( char *al1, char *al2, LocalHom *localhompt, int off1, int off2, int opt, int overlapaa );
extern char *cutal( char *al, int al_display_start, int start, int end );
extern void ErrorExit( char *message );
extern void strncpy_caseC( char *str1, char *str2, int len );
extern void seqUpper( int nseq, char **seq );
extern void seqLower( int nseq, char **seq );
extern int getaline_fp_eof( char *s, int l, FILE *fp );
extern int getaline_fp_eof_new(char s[], int l, FILE *fp);
extern int myfgets(char s[], int l, FILE *fp);
extern double input_new( FILE *fp, int d );
extern void PreRead( FILE *fp, int *locnjob, int *locnlenmax );
extern int allSpace( char *str );
extern void Read( char name[M][B], int nlen[M], char **seq );
extern void FRead( FILE *fp, char name[][B], int nlen[], char **seq );
extern void kake2hiku( char *str );
extern int copydatafromgui( char **namegui, char **seqgui, char **name, int *nlen, char **seq );
extern void readDataforgaln( FILE *fp, char **name, int *nlen, char **seq );
extern void readData( FILE *fp, char name[][B], int nlen[], char **seq );
extern void readData_pointer_casepreserve( FILE *fp, char **name, int *nlen, char **seq );
extern void readData_pointer( FILE *fp, char **name, int *nlen, char **seq );
extern void readData_pointer2( FILE *fp, int nseq, char **name, int *nlen, char **seq );
extern void readData_varlen( FILE *fp, char **name, int *nlen, char **seq );
extern int countATGC( char *s, int *total );
extern void getnumlen( FILE *fp );
extern void getnumlen_casepreserve( FILE *fp, int *nlenmin );
extern void getnumlen_nogap( FILE *fp, int *nlenmin );
extern void WriteGapFill( FILE *fp, int locnjob, char name[][B], int nlen[M], char **aseq );
extern void writeDataforgaln( FILE *fp, int locnjob, char **name, int *nlen, char **aseq );
extern void writeData( FILE *fp, int locnjob, char name[][B], int nlen[], char **aseq );
extern void writeData_pointer( FILE *fp, int locnjob, char **name, int *nlen, char **aseq );
extern void readhat2_doublehalf( FILE *fp, int nseq, char name[M][B], double **mtx );
extern void readhat2_doublehalf_pointer( FILE *fp, int nseq, char **name, double **mtx );
extern void readhat2_doublehalf_part_pointer( FILE *fp, int nseq, int nadd, char **name, double **mtx );
extern void readhat2_double( FILE *fp, int nseq, char name[M][B], double **mtx );
extern void readhat2_int( FILE *fp, int nseq, char name[M][B], int **mtx );
extern void readhat2_pointer( FILE *fp, int nseq, char **name, double **mtx );
extern void readhat2( FILE *fp, int nseq, char name[M][B], double **mtx );
extern void WriteFloatHat2_pointer_halfmtx( FILE *hat2p, int locnjob, char **name, double **mtx );
extern void WriteFloatHat2( FILE *hat2p, int locnjob, char name[M][B], double **mtx );
extern void WriteHat2_int( FILE *hat2p, int locnjob, char name[M][B], int **mtx );
extern void WriteHat2( FILE *hat2p, int locnjob, char name[M][B], double **mtx );
extern void WriteHat2_pointer( FILE *hat2p, int locnjob, char **name, double **mtx );
extern void WriteHat2_part_pointer( FILE *hat2p, int locnjob, int nadd, char **name, double **mtx );
extern int ReadFasta_sub( FILE *fp, double *dis, int nseq, char name[M][B] );
extern int ReadSsearch( FILE *fp, double *dis, int nseq, char name[M][B] );
extern int ReadBlastm7( FILE *fp, double *dis, int qmem, char **name, LocalHom *localhomlist );
extern int ReadBlastm7_scoreonly( FILE *fp, double *dis, int nin );
extern int ReadBlastm7_avscore( FILE *fp, double *dis, int nin );
extern int ReadFasta34noalign( FILE *fp, double *dis, int qmem, char **name, LocalHom *localhomlist );
extern int ReadFasta34m10_nuc( FILE *fp, double *dis, int qmem, char **name, LocalHom *localhomlist );
extern int ReadFasta34m10( FILE *fp, double *dis, int qmem, char **name, LocalHom *localhomlist );
extern int ReadFasta34m10_scoreonly_nuc( FILE *fp, double *dis, int nin );
extern int ReadFasta34m10_scoreonly( FILE *fp, double *dis, int nin );
extern int ReadFasta34( FILE *fp, double *dis, int nseq, char name[M][B], LocalHom *localhomlist );
extern int ReadFasta3( FILE *fp, double *dis, int nseq, char name[M][B] );
extern int ReadFasta( FILE *fp, double *dis, int nseq, char name[M][B] );
extern int ReadOpt( FILE *fp, int opt[M], int nseq, char name[M][B] );
extern int ReadOpt2( FILE *fp, int opt[M], int nseq, char name[M][B] );
extern int writePre( int nseq, char **name, int nlen[M], char **aseq, int force );
extern void readOtherOptions( int *ppidptr, int *fftThresholdptr, int *fftWinSizeptr );
extern void initSignalSM( void );
extern void initFiles( void );
extern void WriteForFasta( FILE *fp, int locnjob, char **name, int nlen[M], char **aseq );
extern void readlocalhomtable( FILE*fp, int njob, LocalHom **localhomtable, char *kozoarivec );
extern void readlocalhomtable2( FILE*fp, int njob, LocalHom **localhomtable, char *kozoarivec );
extern void readlocalhomtable_part( FILE*fp, int njob, int nadd, LocalHom **localhomtable, char *kozoarivec );
extern void readlocalhomtable_two( FILE*fp, int njob, int nadd, LocalHom **localhomtable, LocalHom **localhomtablex, char *kozoarivec );
extern void readlocalhomtable_one( FILE*fp, int njob, int nadd, LocalHom **localhomtable, char *kozoarivec );
extern void outlocalhom( LocalHom **localhom, int nseq );
extern void outlocalhom_part( LocalHom **localhom, int norg, int nadd );
extern void outlocalhompt( LocalHom ***localhom, int n1, int n2 );
extern void FreeLocalHomTable( LocalHom **localhomtable, int n ) ;
extern void FreeLocalHomTable_part( LocalHom **localhomtable, int n, int m ) ;
extern void FreeLocalHomTable_two( LocalHom **localhomtable, int n, int m ) ;
extern void FreeLocalHomTable_one( LocalHom **localhomtable, int n, int m ) ;
extern void constants( int nseq, char **seq );
extern void clustalout_pointer( FILE *fp, int nseq, int maxlen, char **seq, char **name, char *mark, char *comment, int *order, int namelen );
extern void phylipout_pointer( FILE *fp, int nseq, int maxlen, char **seq, char **name, int *order, int namelen );
extern void writeData_reorder( FILE *fp, int locnjob, char name[][B], int nlen[], char **aseq, int *order );
extern void writeData_reorder_pointer( FILE *fp, int locnjob, char **name, int *nlen, char **aseq, int *order );

extern void resetlocalhom( int, LocalHom ** );
extern int load1SeqWithoutName_new( FILE *fpp, char *cbuf );
extern char *load1SeqWithoutName_realloc( FILE *fpp );
extern char *load1SeqWithoutName_realloc_casepreserve( FILE *fpp );
extern void searchKUorWA( FILE *fp );
extern void gapireru( char *res, char *ori, char *gt );
extern int seqlen( char *seq );
extern void st_FinalGapCount( double *fgcp, int clus, char **seq, double *eff, int len );
extern void st_OpeningGapCount( double *ogcp, int clus, char **seq, double *eff, int len );
extern void st_OpeningGapCount( double *ogcp, int clus, char **seq, double *eff, int len );
extern void st_FinalGapCount_zure( double *fgcp, int clus, char **seq, double *eff, int len );
extern void getdiaminofreq_x( double *freq, int clus, char **seq, double *eff, int len );
extern void new_FinalGapCount_zure( double *fgcp, int clus, char **seq, double *eff, int len, char *s, char *e );
extern void new_FinalGapCount( double *fgcp, int clus, char **seq, double *eff, int len, char *g );
extern void new_OpeningGapCount( double *ogcp, int clus, char **seq, double *eff, int len, char *g );
extern void new_OpeningGapCount_zure( double *ogcp, int clus, char **seq, double *eff, int len, char *s, char *e );
extern void getGapPattern( double *fgcp, int clus, char **seq, double *eff, int len, char *g );
extern void getgapfreq( double *freq, int clus, char **seq, double *eff, int len );
extern void getgapfreq_zure( double *freq, int clus, char **seq, double *eff, int len );
//extern void getgapfreq_zure_part( double *freq, int clus, char **seq, double *eff, int len, char *s );
extern void getgapfreq_zure_part( double *freq, int clus, char **seq, double *eff, int len, char *s );
extern void getdiaminofreq_part( double *freq, int clus, char **seq, double *eff, int len, char *s, char *e );
extern void getdigapfreq_part( double *freq, int clus, char **seq, double *eff, int len, char *s, char *e );
extern void getdiaminofreq_st( double *freq, int clus, char **seq, double *eff, int len );
extern void getdigapfreq_st( double *freq, int clus, char **seq, double *eff, int len );
extern void st_getGapPattern( Gappat **gpat, int clus, char **seq, double *eff, int len );
extern void getkyokaigap( char *g, char **s, int pos, int n );
extern double *loadaamtx( void );
extern double naivepairscore( int nseq1, int nseq2, char **seq1, char **seq2, double *eff1, double *eff2, int penal );
extern double naivepairscore11( char *seq1, char *seq2, int penal );
extern double naivepairscore11_dynmtx( double **, char *seq1, char *seq2, int penal );
extern double naivepairscorefast( char *seq1, char *seq2, int *skip1, int *skip2, int penal );
extern double naiveQpairscore( int nseq1, int nseq2, char **seq1, char **seq2, double *eff1, double *eff2, int penal );
extern double naiveRpairscore( int nseq1, int nseq2, char **seq1, char **seq2, double *eff1, double *eff2, int penal );
extern double naiveHpairscore( int nseq1, int nseq2, char **seq1, char **seq2, double *eff1, double *eff2, int penal );
extern void foldrna( int nseq1, int nseq2, char **seq1, char **seq2, double *eff1, double *eff2, RNApair ***gr1, RNApair ***gr2, double **impmtx, int *gapmap1, int *gapmap2, RNApair *pair );
extern void foldrna_gappick( int nseq1, int nseq2, char **seq1, char **seq2, double *eff1, double *eff2, RNApair ***gr1, RNApair ***gr2, double **impmtx, int *gapmap1, int *gapmap2, RNApair *pair );
extern void imp_rna( int nseq1, int nseq2, char **seq1, char **seq2, double *eff1, double *eff2, RNApair ***gr1, RNApair ***gr2, int *gapmap1, int *gapmap2, RNApair *pair );
extern void imp_rnaD( int nseq1, int nseq2, char **seq1, char **seq2, double *eff1, double *eff2, RNApair ***gr1, RNApair ***gr2, int *gapmap1, int *gapmap2, RNApair *pair );
extern void part_imp_rna( int nseq1, int nseq2, char **seq1, char **seq2, double *eff1, double *eff2, RNApair ***gr1, RNApair ***gr2, int *gapmap1, int *gapmap2, RNApair *pair );
extern void foldalignedrna( int clus1, int clus2, char **mseq1, char **mseq2, double *effarr1, double *effarr2, RNApair *rnapairboth );
void readmccaskill( FILE *fp, RNApair **pairprob, int length );
void makegrouprna( RNApair ***group, RNApair ***all, int *memlist );
void makegrouprnait( RNApair ***group, RNApair ***all, char *pair, int s );
extern void fixed_musclesupg_double_realloc_nobk_halfmtx( int nseq, double **eff, int ***topol, double **len, Treedep *, int progressout, int efffree );
extern void loadtop( int nseq, double **mtx, int ***topol, double **len, char **name, int *nlen, Treedep * );
extern void loadtree( int nseq, int ***topol, double **len, char **name, int *nlen, Treedep * );
//extern void loadtop( int nseq, double **eff, int ***topol, double **len );
extern void fixed_musclesupg_double_realloc_nobk_halfmtx_treeout( int nseq, double **eff, int ***topol, double **len, char **name, int *nlen, Treedep *, int efffree );
extern void fixed_supg_double_realloc_nobk_halfmtx_treeout_constrained( int nseq, double **eff, int ***topol, double **len, char **name, int *nlen, Treedep *, int ncons, int **constraints, int efffree );
extern void fixed_musclesupg_double_treeout( int nseq, double **eff, int ***topol, double **len, char **name );
extern void fixed_supg_double_treeout_constrained( int nseq, double **eff, int ***topol, double **len, char **name, int ncons, int **constraints );
extern void imp_match_init_strict( double *imp, int clus1, int clus2, int lgth1, int lgth2, char **seq1, char **seq2, double *eff1, double *eff2, double *eff1kozo, double*eff2kozo, LocalHom ***localhom, int forscore );
extern void miyataout_reorder_pointer( FILE *fp, int locnjob, int nlenmax, char **name, int *nlen, char **aseq, int *order );
extern void veryfastsupg_double_outtree( int nseq, double **eff, int ***topol, double **len, char **name );
extern void cpmx_ribosum( char **seq, char **seqr, char *dir, double **cpmx, double *eff, int lgth, int clus );
extern void rnaalifoldcall( char **seq, int nseq, RNApair **pairprob );
extern void readpairfoldalign( FILE *fp, char *seq1, char *seq2, char *aln1, char *aln2, int q1, int q2, int *of1, int *of2, int sumlen );
extern void write1seq( FILE *fp, char *aseq );
extern void assignstrweight( int nseq, double *strweight, Node *stopol, int ***topol, int step, int LorR, char *kozoari, double *seqweight );
extern void cutData( FILE *, int **, char **, int * );
extern void cutAlignment( FILE *, int **, char **, int *, char **, char ** );
extern void catData( FILE * );
extern void getnumlen_nogap_outallreg_web( FILE *fp, FILE *ofp, int *nlenminpt, int *isalignedpt );
extern void getnumlen_nogap_outallreg( FILE *fp, int *nlenminpt );
extern double plainscore( int nseq, char **seq );
extern void eq2dash( char *s );
extern void eq2dashmatometehayaku( char **s, int n );
extern void findnewgaps( int n, int rep, char **seq, int *gaplen );
extern void findcommongaps( int, char **, int * );
extern void adjustgapmap( int, int *, char * );
extern void insertnewgaps_bothorders( int njob, int *alreadyaligned, char **seq, int *ex1, int *ex2, int *gaplen, int *gapmap, int gapmaplen, int alloclen, char alg, char gapchar );
extern void insertnewgaps( int njob, int *alreadyaligned, char **seq, int *ex1, int *ex2, int *gaplen, int *gapmap, int alloclen, char alg, char gapchar );
extern void restorecommongaps( int n, int n0, char **seq, int *top0, int *top1, int *gaplen, int alloclen, char gapchar );
extern void restorecommongapssmoothly( int n, int n0, char **seq, int *top0, int *top1, int *gaplen, int alloclen, char gapchar );
extern int samemember( int *mem, int *cand );
extern int samemembern( int *mem, int *cand, int candn );
extern int includemember( int *mem, int *cand );
extern int overlapmember( int *mem1, int *mem2 );
//extern void profilealignment( int n0, int n1, int n2, char **aln0, char **aln1, char **aln2, int alloclen, char alg );
extern void profilealignment2( int n0, int n2, char **aln0, char **aln2, int alloclen, char alg );
extern void sreverse( char *r, char *s );
extern int addonetip( int njobc, int ***topolc, double **lenc, double **iscorec, int ***topol, double **len, Treedep *dep, int treeout, Addtree *addtree, int iadd, char **name, int *alnleninnode, int *nogaplen, int noalign );
extern void intcpy( int *s1, int *s2 );
extern void intncpy( int *s1, int *s2, int n );
extern void fltncpy( double *s1, double *s2, int n );
extern void intcat( int *s1, int *s2 );
extern void readsubalignmentstable( int n, int **table, int *preservegaps, int *nsubpt, int *maxmempt );
extern int myatoi( char * );
extern double myatof( char * );
extern void gapcount( double *freq, char **seq, int nseq, double *eff, int lgth );
extern void gapcountf( double *freq, char **seq, int nseq, double *eff, int lgth );
extern void outgapcount( double *freq, int nseq, char *gappat, double *eff );
extern void makedynamicmtx( double **out, double **in, double offset );
extern double dist2offset( double dist );
extern void reporterr( const char *str, ... );
extern void freeconstants();
extern void closeFiles();
extern void FreeCommonIP();
extern void initglobalvariables();
extern void makeskiptable( int n, int **skip, char **seq );
extern int generatesubalignmentstable( int nseq, int ***tablept, int *nsubpt, int *maxmempt, int ***topol, double **len, double threshold );
extern double sumofpairsscore( int nseq, char **seq );
//extern int maskoriginalgaps( char *repseq, char *originallygapped );

//extern void restoregaponlysites( char *originallygapped, int n1, int n2, char **s1, char **s2, int rep );
extern int isallgap( char * );
extern int deletenewinsertions_whole( int on, int an, char **oseq, char **aseq, int **deletelist );
extern int recordoriginalgaps( char *originallygapped, int n, char **s );
extern void restoreoriginalgaps( int n, char **seq, char *originalgaps );
extern void reconstructdeletemap( int nadd, char ** addbk, int **deletelist, char **realn, FILE *fp, char **name );
extern double D__align( double **n_dynamicmtx, char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch, char *sgap1, char *sgap2, char *egap1, char *egap2, int *chudanpt, int chudanref, int *chudanres, int headgp, int tailgp );
extern double D__align_ls( double **n_dynamicmtx, char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch, char *sgap1, char *sgap2, char *egap1, char *egap2, int *chudanpt, int chudanref, int *chudanres, int headgp, int tailgp );
extern double D__align_variousdist( int **whichmtx, double ***matrices, double **n_dynamicmtx, char **seq1, char **seq2, double *eff1, double *eff2, double **eff1s, double **eff2s, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch, char *sgap1, char *sgap2, char *egap1, char *egap2, int *chudanpt, int chudanref, int *chudanres, int headgp, int tailgp );
extern double D__align_gapmap( char **seq1, char **seq2, double *eff1, double *eff2, int icyc, int jcyc, int alloclen, LocalHom ***localhom, double *impmatch, int *gapmap1, int *gapmap2 );
