env = Environment()
debug = env.Clone()
debug.Append(CXXFLAGS=['-g3'])

onlyDebug = int(ARGUMENTS.get('debug', 0))

if onlyDebug == 1:
    SConscript('src/SCsub', exports={'env' : debug}, variant_dir='debug')
else:
    SConscript('src/SCsub', exports={'env' : env}, variant_dir='bin')
