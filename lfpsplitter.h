typedef struct lfp_section {
    char type[4];
    int len;
    char sha1[45];
    char *data;
} lfp_section_t, *lfp_section_p;
