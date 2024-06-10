##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=supervision_software
ConfigurationName      :=Debug
WorkspacePath          :=/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision
ProjectPath            :=/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Axel
Date                   :=09/06/24
CodeLitePath           :=/home/axel/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="supervision_software.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            := -no-pie $(shell wx-config   --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)IHM 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)PocoDataODBC $(LibrarySwitch)PocoData $(LibrarySwitch)PocoFoundation 
ArLibs                 :=  "PocoDataODBC" "PocoData" "PocoFoundation" 
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix) $(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix) $(IntermediateDirectory)/CustomEvents.cpp$(ObjectSuffix) $(IntermediateDirectory)/Thread_plot.cpp$(ObjectSuffix) $(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix) $(IntermediateDirectory)/Thread_get_data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Thread_monitor.cpp$(ObjectSuffix) $(IntermediateDirectory)/MESURE.cpp$(ObjectSuffix) $(IntermediateDirectory)/MACHINE.cpp$(ObjectSuffix) $(IntermediateDirectory)/Thread_action.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/DATA_BASE.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix): EvtFramePrincipal.cpp $(IntermediateDirectory)/EvtFramePrincipal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/EvtFramePrincipal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/EvtFramePrincipal.cpp$(DependSuffix): EvtFramePrincipal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/EvtFramePrincipal.cpp$(DependSuffix) -MM EvtFramePrincipal.cpp

$(IntermediateDirectory)/EvtFramePrincipal.cpp$(PreprocessSuffix): EvtFramePrincipal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/EvtFramePrincipal.cpp$(PreprocessSuffix) EvtFramePrincipal.cpp

$(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix): MyApp.cpp $(IntermediateDirectory)/MyApp.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/MyApp.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MyApp.cpp$(DependSuffix): MyApp.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MyApp.cpp$(DependSuffix) -MM MyApp.cpp

$(IntermediateDirectory)/MyApp.cpp$(PreprocessSuffix): MyApp.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MyApp.cpp$(PreprocessSuffix) MyApp.cpp

$(IntermediateDirectory)/CustomEvents.cpp$(ObjectSuffix): CustomEvents.cpp $(IntermediateDirectory)/CustomEvents.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/CustomEvents.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CustomEvents.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CustomEvents.cpp$(DependSuffix): CustomEvents.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CustomEvents.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CustomEvents.cpp$(DependSuffix) -MM CustomEvents.cpp

$(IntermediateDirectory)/CustomEvents.cpp$(PreprocessSuffix): CustomEvents.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CustomEvents.cpp$(PreprocessSuffix) CustomEvents.cpp

$(IntermediateDirectory)/Thread_plot.cpp$(ObjectSuffix): Thread_plot.cpp $(IntermediateDirectory)/Thread_plot.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/Thread_plot.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Thread_plot.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Thread_plot.cpp$(DependSuffix): Thread_plot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Thread_plot.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Thread_plot.cpp$(DependSuffix) -MM Thread_plot.cpp

$(IntermediateDirectory)/Thread_plot.cpp$(PreprocessSuffix): Thread_plot.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Thread_plot.cpp$(PreprocessSuffix) Thread_plot.cpp

$(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix): FramePrincipal.cpp $(IntermediateDirectory)/FramePrincipal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/FramePrincipal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FramePrincipal.cpp$(DependSuffix): FramePrincipal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/FramePrincipal.cpp$(DependSuffix) -MM FramePrincipal.cpp

$(IntermediateDirectory)/FramePrincipal.cpp$(PreprocessSuffix): FramePrincipal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FramePrincipal.cpp$(PreprocessSuffix) FramePrincipal.cpp

$(IntermediateDirectory)/Thread_get_data.cpp$(ObjectSuffix): Thread_get_data.cpp $(IntermediateDirectory)/Thread_get_data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/Thread_get_data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Thread_get_data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Thread_get_data.cpp$(DependSuffix): Thread_get_data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Thread_get_data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Thread_get_data.cpp$(DependSuffix) -MM Thread_get_data.cpp

$(IntermediateDirectory)/Thread_get_data.cpp$(PreprocessSuffix): Thread_get_data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Thread_get_data.cpp$(PreprocessSuffix) Thread_get_data.cpp

$(IntermediateDirectory)/Thread_monitor.cpp$(ObjectSuffix): Thread_monitor.cpp $(IntermediateDirectory)/Thread_monitor.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/Thread_monitor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Thread_monitor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Thread_monitor.cpp$(DependSuffix): Thread_monitor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Thread_monitor.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Thread_monitor.cpp$(DependSuffix) -MM Thread_monitor.cpp

$(IntermediateDirectory)/Thread_monitor.cpp$(PreprocessSuffix): Thread_monitor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Thread_monitor.cpp$(PreprocessSuffix) Thread_monitor.cpp

$(IntermediateDirectory)/MESURE.cpp$(ObjectSuffix): MESURE.cpp $(IntermediateDirectory)/MESURE.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/MESURE.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MESURE.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MESURE.cpp$(DependSuffix): MESURE.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MESURE.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MESURE.cpp$(DependSuffix) -MM MESURE.cpp

$(IntermediateDirectory)/MESURE.cpp$(PreprocessSuffix): MESURE.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MESURE.cpp$(PreprocessSuffix) MESURE.cpp

$(IntermediateDirectory)/MACHINE.cpp$(ObjectSuffix): MACHINE.cpp $(IntermediateDirectory)/MACHINE.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/MACHINE.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MACHINE.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MACHINE.cpp$(DependSuffix): MACHINE.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MACHINE.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MACHINE.cpp$(DependSuffix) -MM MACHINE.cpp

$(IntermediateDirectory)/MACHINE.cpp$(PreprocessSuffix): MACHINE.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MACHINE.cpp$(PreprocessSuffix) MACHINE.cpp

$(IntermediateDirectory)/Thread_action.cpp$(ObjectSuffix): Thread_action.cpp $(IntermediateDirectory)/Thread_action.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/Thread_action.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Thread_action.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Thread_action.cpp$(DependSuffix): Thread_action.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Thread_action.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Thread_action.cpp$(DependSuffix) -MM Thread_action.cpp

$(IntermediateDirectory)/Thread_action.cpp$(PreprocessSuffix): Thread_action.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Thread_action.cpp$(PreprocessSuffix) Thread_action.cpp

$(IntermediateDirectory)/DATA_BASE.cpp$(ObjectSuffix): DATA_BASE.cpp $(IntermediateDirectory)/DATA_BASE.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/nba/do_not_open/personal/projects/project_2024/energy_management_app_supervision/supervision_software/DATA_BASE.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DATA_BASE.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DATA_BASE.cpp$(DependSuffix): DATA_BASE.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DATA_BASE.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DATA_BASE.cpp$(DependSuffix) -MM DATA_BASE.cpp

$(IntermediateDirectory)/DATA_BASE.cpp$(PreprocessSuffix): DATA_BASE.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DATA_BASE.cpp$(PreprocessSuffix) DATA_BASE.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


