project('gock11', 'cpp', default_options: ['cpp_std=c++20'])

sdl2 = dependency('sdl2')
sdl2_ttf = dependency('sdl2_ttf')
glm = dependency('glm')
bullet = dependency('Bullet')

game_deps = [sdl2, sdl2_ttf, glm, bullet]

glad_proj = subproject('glad')
glad_dep = glad_proj.get_variable('libglad_dep')
game_deps += [glad_dep]

executable('game', [
  'main.cpp',
  'window.cpp',
  'window.hpp',
  'engine.cpp',
  'engine.hpp'
], dependencies: [game_deps])