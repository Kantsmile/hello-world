from mutagen.flac import FLAC
import os
os.chdir(r'.\\(24)滚石香港黄金十年系列-华人电影音乐典藏馆精选\\')
input_dir = os.getcwd()


def flac_process(file_dir, info):
    audio = FLAC(file_dir)
 
    audio["TITLE"] = info['TITLE']
    audio["ARTIST"] = info['ARTIST']
    audio["ALBUMARIST"] = info['ALBUMARIST']
    audio["ALBUM"] = info['ALBUM']
    # audio["DATE"] = info['DATE']
    audio["GENRE"] = info['GENRE']
    audio["TRACKNUMBER"] = info['TRACKNUMBER']
    audio.pprint()
    audio.save()


for file in os.listdir(input_dir):
    if file.split('.')[-1] == 'flac':
        name = file.split('.')[1]
        # print(name)
        number = str(int(file.split('.')[0]))
        # print(number)

        info = {
            'TITLE': name,
            'ARTIST': u'Unknown Artist',
            'ALBUMARIST': u'Various Artists',
            'ALBUM': u'滚石十年-华人电影音乐',
            # 'DATE': '2015',
            'GENRE': 'Pop',
            'TRACKNUMBER': number
        }
        # print(info)
 
        flac_process(file, info)