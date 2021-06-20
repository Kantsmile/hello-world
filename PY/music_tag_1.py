from mutagen.flac import FLAC
import os
import re
os.chdir(r'.\\')
input_dir = os.getcwd()

def file_rename(file_dir):
    linee = re.sub('[\u4e00-\u9fa5]', '', file_dir)
    linee=linee.replace('()', '')
    linee=linee.replace('(.)', '')
    linee=linee.replace('-.', '- .')
    linee=linee.replace(' - ', '-')
    os.rename(file_dir, linee)

def file_rename2(file_dir):
    linee=file_dir
    linee=linee.replace('【有间音乐】', '')
    linee=linee.replace(' - ', '-')
    os.rename(file_dir, linee)


def flac_process_old(file_dir, info):
    audio = FLAC(file_dir)
 
    audio["TITLE"] = info['TITLE']
    audio["ARTIST"] = info['ARTIST']
    # audio["ALBUMARIST"] = info['ALBUMARIST']
    # audio["ALBUM"] = info['ALBUM']
    # audio["DATE"] = info['DATE']
    audio["GENRE"] = info['GENRE']
    audio["COMMENT"] = info['COMMENT']
    # audio["TRACKNUMBER"] = info['TRACKNUMBER']
    audio.pprint()
    audio.save()


def flac_process(file_dir, info):
    audio = FLAC(file_dir)

    if (('title' in audio.tags) and ('artist' in audio.tags)) == False:
        audio["TITLE"] = info['TITLE']
        audio["ARTIST"] = info['ARTIST']
        # audio["ALBUMARIST"] = info['ALBUMARIST']
        # audio["ALBUM"] = info['ALBUM']
        # audio["DATE"] = info['DATE']
        # audio["GENRE"] = info['GENRE']
        # audio["TRACKNUMBER"] = info['TRACKNUMBER']
        # audio.pprint()
        # audio.save()
    audio.pprint()
    audio.save()



# for root, dirs, files in os.walk("I:\\华语流行男歌手"):
#     for subdir in dirs:
#         tmpdir=os.path.join(root, subdir)
#         os.chdir(tmpdir)
#         for file in os.listdir(os.getcwd()):
#             print(file)
#             if file.split('.')[-1] == 'flac':
#                 file_rename2(file)

# os.chdir(r'I:\\华语流行男歌手')



for root, dirs, files in os.walk("I:\\华语流行男歌手"):
    for subdir in dirs:
        tmpdir=os.path.join(root, subdir)
        os.chdir(tmpdir)
        for file in os.listdir(os.getcwd()):
            print(file)
            if file.split('.')[-1] == 'flac':
                name = (file.split('.')[0]).split('-')[1]
                # print(name)
                artists = (file.split('.')[0]).split('-')[0]
                # number = str(int(file.split('.')[0]))
                # print(number)

                info = {
                    'TITLE': name,
                    'ARTIST': artists,
                    # 'ALBUMARIST': u'Various Artists',
                    # 'ALBUM': u'欧美金唱盘',
                    # 'DATE': '2015',
                    'GENRE': u'Pop',
                    'COMMENT': u'学哥珍藏'
                    # 'TRACKNUMBER': number
                }
                # print(info)
         
                flac_process_old(file, info)

os.chdir(r'I:\\华语流行男歌手')



# for file in os.listdir(input_dir):
#     if file.split('.')[-1] == 'flac':
#         file_rename2(file)

# for file in os.listdir(input_dir):
#     if file.split('.')[-1] == 'flac':
#         name = (file.split('.')[1]).split('-')[0]
#         # print(name)
#         artists = (file.split('.')[1]).split('-')[1]
#         number = str(int(file.split('.')[0]))
#         # print(number)

#         info = {
#             'TITLE': name,
#             'ARTIST': artists,
#             'ALBUMARIST': u'Various Artists',
#             'ALBUM': u'欧美金唱盘',
#             # 'DATE': '2015',
#             'GENRE': 'Pop',
#             'TRACKNUMBER': number
#         }
#         # print(info)
 
#         flac_process(file, info)


