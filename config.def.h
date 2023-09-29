/* user and group to drop privileges to */
static const char *user  = "gubasso";
static const char *group = "gubasso";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#7949a9",   /* during input */
	[FAILED] = "#860029",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
