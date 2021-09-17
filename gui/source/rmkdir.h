// rmkdir(): Recursive mkdir().
#ifndef EVENTIDE_RMKDIR_H
#define EVENTIDE_RMKDIR_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Recursively mkdir() a directory.
 * @param path Absolute path.
 * @param omde Mode.
 * @return 0 on success; non-zero on error.
 */
int rmkdir(const char *path, int mode);

#ifdef __cplusplus
}
#endif

#endif /* EVENTIDE_RMKDIR_H */
