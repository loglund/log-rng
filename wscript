import os
from waflib.Build import BuildContext

APPNAME = 'log-rng'
VERSION = '0.0.0'

def build(bld):

    bld(
        features=['cxx', 'cxxstlib'],
        source=bld.path.ant_glob('src/**/*.cpp'),
        target='log-rng',
        install_path= '${PREFIX}/lib',
        export_includes=["src"]
    )

    bld.program(
            features="cxx test",
            source=bld.path.ant_glob("test/**/*.cpp"),
            target="rng_tests",
            use=["log-rng", "gtest", "stub_includes"],
        )
    
    