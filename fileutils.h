#ifndef FILEUTILS_H
#define FILEUTILS_H

#define DEFAULT_DIR "/"

extern FATFS g_fs;
extern DIR g_dir;
extern uint8_t g_fat_buffer[FAT_BUF_SIZE];

int get_num_files(FILINFO* pfile_info);
int get_file_at_index(FILINFO* pfile_info, int index);
FRESULT change_dir(char* dir);

#endif