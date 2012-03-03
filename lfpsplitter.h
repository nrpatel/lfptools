#ifndef _LFPSPLITTER_H_
#define _LFPSPLITTER_H_

typedef enum {
    LFP_RAW_IMAGE,
    LFP_TEXT,
    LFP_DEPTH_LUT,
    LFP_JPEG
} section_type;

typedef struct lfp_section {
    section_type type;
    char typecode[4];
    int len;
    char sha1[46]; // including null termination
    char *name;
    char *data;
    struct lfp_section *next;
} lfp_section_t, *lfp_section_p;

typedef struct lfp_file {
    char *filename;
    char *data;
    int len;
    int num_images;
    lfp_section_p table;
    lfp_section_p sections;
} lfp_file_t, *lfp_file_p;

#endif /* _LFPSPLITTER_H_ */
