workspace "BigBaseC"
  architecture "x64"
  startproject "BigBaseC"

  configurations
  {
    "Release",
    "Dist"
  }

  entrypoint "DllMain"
  intrinsics "on"

  staticruntime "on"
  systemversion "10.0"
  toolset "v142"
  
  defines
  {
    "_CRT_SECURE_NO_WARNINGS",
    "NOMINMAX",
    "WIN32_LEAN_AND_MEAN",
    "_WIN32_WINNT=0x601", -- Windows 7
    "NDEBUG"
  }

  inlining "auto"
  optimize "speed"

  filter "configurations:Dist"
    flags { "LinkTimeOptimization" }

  flags { "NoImportLib", "Maps", "NoBufferSecurityCheck", "OmitDefaultLibrary", "MultiProcessorCompile" }

  project "BigBaseC"
    kind "SharedLib"
    language "C"

    targetdir ("bin/%{cfg.buildcfg}")
    objdir ("bin/int/%{cfg.buildcfg}")

    files
    {
      "src/**.h",
      "src/**.c",
      "src/**.asm"
    }

    includedirs
    {
      "src/"
    }

    links
    {
      "shlwapi"
    }

    pchheader "pch.h"
    pchsource "src/pch.c"

    forceincludes
    {
      "pch.h"
    }
