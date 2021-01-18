
#READ FILE LIST
urllist = 'miranvideos.dat'
with open(urllist) as fp:
   line = fp.readline()

   cnt = 1
   while line:

        ### edit teksta
        append_str = 'view-source' # definisan string za prefix
        line_prefix_edit = append_str+':'+line # dodavanje prefixa
        line_edit = line_prefix_edit.replace("www","m") #menjanje teksta


        print(line_edit)

        line = fp.readline()
        cnt += 1
