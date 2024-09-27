# CMakeList.txt : projet CMake pour TP, incluez la source et définissez
# la logique spécifique au projet ici.
#

# Ajoutez une source à l'exécutable de ce projet.
add_executable (Exercice1 "Exercice 1.cpp")
add_executable (Exercice2 "Exercice 2.cpp")
add_executable (Exercice3 "Exercice 3.cpp")
add_executable (Exercice4 "Exercice 4.cpp" "Point3D.cpp" "Point3D.hpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET TP PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
