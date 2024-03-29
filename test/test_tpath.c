/* This file is part of the YAZ toolkit.
 * Copyright (C) Index Data
 * See the file LICENSE for details.
 */
#include <yaz/tpath.h>
#include <yaz/test.h>
#include <string.h>
#include <yaz/log.h>

#if HAVE_CONFIG_H
#include <config.h>
#endif


static void tst_tpath(void)
{
    char fullpath[FILENAME_MAX];

#ifdef __OS2__
    char filename[] = "test_tpath";
    fopen(filename, "a");
    fclose(filename);
#endif

    YAZ_CHECK(!yaz_filepath_resolve("etc", 0, 0, fullpath));
    YAZ_CHECK(!yaz_filepath_resolve("etc", "", 0, fullpath)); /* bug #606 */
    YAZ_CHECK(!yaz_filepath_resolve("etc", ".", 0, fullpath));
    YAZ_CHECK(!yaz_filepath_resolve("does_not_exist", "", 0, fullpath));
    YAZ_CHECK(!yaz_filepath_resolve("does_not_exist", ".", 0, fullpath));
    YAZ_CHECK(yaz_filepath_resolve("test_tpath", 0, 0, fullpath));

    YAZ_CHECK(yaz_filepath_resolve("test_tpath", "", 0, fullpath));
    YAZ_CHECK(yaz_filepath_resolve("test_tpath", ".", 0, fullpath));

    YAZ_CHECK(!yaz_filepath_resolve("test_tpath", "unknown_dir", 0, fullpath));
    YAZ_CHECK(yaz_filepath_resolve("test_tpath", "unknown_dir:.", 0, fullpath));
    YAZ_CHECK(!yaz_filepath_resolve("test_tpath", "unknown_dir:", 0, fullpath));
    YAZ_CHECK(!yaz_filepath_resolve("test_tpath", "unknown_dir:c:", 0, fullpath));
    YAZ_CHECK(!yaz_filepath_resolve("test_tpath", "unknown_dir:c:\\other", 0, fullpath));
#ifdef __OS2__
    remove(filename);
#endif

}

int main(int argc, char **argv)
{
    YAZ_CHECK_INIT(argc, argv);
    tst_tpath();
    YAZ_CHECK_TERM;
}

/*
 * Local variables:
 * c-basic-offset: 4
 * c-file-style: "Stroustrup"
 * indent-tabs-mode: nil
 * End:
 * vim: shiftwidth=4 tabstop=8 expandtab
 */

