#define LOG10 2.302585092994046

#define NHISTPOINT 100
#define NHIST 100

#define MODE_STREAM 1
#define MODE_BLOCK 2        /* unimplemented */
#define MODE_TABLE 3

#define NPOINTS_DEF 1024
#define NPOINTS_MIN 128

#define HOP_DEF 512
#define NPEAK_DEF 20

#define VIBRATO_DEF 1
#define STABLETIME_DEF 50
#define MINPOWER_DEF 50
#define GROWTH_DEF 7

#define OUT_PITCH 0
#define OUT_ENV 1
#define OUT_NOTE 2
#define OUT_PEAKS 3
#define OUT_TRACKS 4
#define OUT_SMSPITCH 5
#define OUT_SMSNONPITCH 6

typedef float t_float;       /* a float type at most the same size */
typedef float t_sample;       /* a float type at most the same size */

typedef struct peak
{
  t_float p_freq;
  t_float p_amp;
  t_float p_ampreal;
  t_float p_ampimag;
  t_float p_pit;
  t_float p_db;
  t_float p_salience;
  t_float p_tmp;
} t_peak;

typedef struct _histpoint
{
  t_float h_freq;
  t_float h_power;
} t_histpoint;

typedef struct _notefinder
{
  t_float n_age;
  t_float n_hifreq;
  t_float n_lofreq;
  int n_peaked;
  t_histpoint n_hist[NHISTPOINT];
  int n_histphase;
} t_notefinder;

