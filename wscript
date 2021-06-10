import os

APPNAME = 'log-rng'
VERSION = '0.0.0'

top = '.'
out = 'build'


def options(ctx):
    ctx.load('compiler_cxx')

def configure(ctx):
    ctx.load('compiler_cxx')

def build(bld):
    
    bld.stlib(source=bld.path.ant_glob('src/**/*.cpp'), target='log-rng')