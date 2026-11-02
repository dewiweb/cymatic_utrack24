// rea decompile_all
// name: CSmartDockingManager::MoveCentralGroup
// address: 0x10072af5
// body: available
// range: 0x10072af5-0x10072be1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::MoveCentralGroup(class CRect,int,unsigned long)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CSmartDockingManager::MoveCentralGroup
          (CSmartDockingManager *this,LONG param_2,LONG param_3,LONG param_4,LONG param_5,
          undefined4 param_6,uint param_7)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 4) != 0) &&
     (*(CSmartDockingGroupGuidesManager **)(this + 0xfc) != (CSmartDockingGroupGuidesManager *)0x0))
  {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    CSmartDockingGroupGuidesManager::GetWindowRect
              (*(CSmartDockingGroupGuidesManager **)(this + 0xfc),(CRect *)&local_18);
    BVar2 = EqualRect(&local_18,(RECT *)&param_2);
    uVar1 = param_7;
    if (BVar2 == 0) {
      CSmartDockingGroupGuidesManager::ShowGuide
                (*(CSmartDockingGroupGuidesManager **)(this + 0xfc),4,param_7 >> 0xc & 1,1);
      CSmartDockingGroupGuidesManager::ShowGuide
                (*(CSmartDockingGroupGuidesManager **)(this + 0xfc),6,uVar1 >> 0xd & 1,1);
      CSmartDockingGroupGuidesManager::ShowGuide
                (*(CSmartDockingGroupGuidesManager **)(this + 0xfc),5,uVar1 >> 0xe & 1,1);
      CSmartDockingGroupGuidesManager::ShowGuide
                (*(CSmartDockingGroupGuidesManager **)(this + 0xfc),7,uVar1 >> 0xf & 1,1);
      iVar3 = (**(code **)(**(int **)(this + 0xfc) + 0x18))(param_2,param_3,param_4,param_5,param_6)
      ;
      if (iVar3 != 0) {
        *(undefined4 *)(this + 0x100) = 0xffffffff;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

