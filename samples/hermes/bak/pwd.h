struct passwd
{
  char *pw_name;		/* Username.  */
  char *pw_passwd;		/* Hashed passphrase, if shadow database
                                   not in use (see shadow.h).  */
  int pw_uid;		/* User ID.  */
  int pw_gid;		/* Group ID.  */
  char *pw_gecos;		/* Real name.  */
  char *pw_dir;			/* Home directory.  */
  char *pw_shell;		/* Shell program.  */
};

extern struct passwd *getpwnam (const char *__name);

extern struct passwd *getpwuid (int __uid);
extern int getuid (void);
extern int chmod (const char *__file, int __mode);
extern char *realpath (const char *__restrict __name, char *__restrict __resolved);