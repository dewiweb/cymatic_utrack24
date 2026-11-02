// rea decompile_all
// name: CMFCBaseVisualManager::DrawStatusBarProgress
// address: 0x10034759
// body: available
// range: 0x10034759-0x10034864 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseVisualManager::DrawStatusBarProgress(class CDC *,class
   CMFCStatusBar *,class CRect,int,int,unsigned long,unsigned long,unsigned long,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCBaseVisualManager::DrawStatusBarProgress
          (CMFCBaseVisualManager *this,int *param_1,undefined4 param_2,int param_4,LONG param_5,
          int param_6,LONG param_7,int param_8,int param_9)

{
  CMFCBaseVisualManager *pCVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000030;
  CMFCBaseVisualManager *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10034765;
  local_28 = this;
  if (*(int *)(this + 0x1c) != 0) {
    if (*(code **)(this + 0x58) != (code *)0x0) {
      if (param_1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[1];
      }
      (**(code **)(this + 0x58))(*(int *)(this + 0x1c),iVar4,1,0,&param_4,0);
    }
    if (param_8 != 0) {
      local_24.left = param_4;
      local_24.top = param_5;
      local_24.right = param_6;
      local_24.bottom = param_7;
      InflateRect(&local_24,-3,-3);
      local_24.right = ((local_24.right - local_24.left) * param_9) / param_8 + local_24.left;
      if (*(code **)(local_28 + 0x58) != (code *)0x0) {
        if (param_1 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[1];
        }
        (**(code **)(local_28 + 0x58))(*(undefined4 *)(local_28 + 0x1c),iVar4,3,0,&local_24,0);
      }
      if (in_stack_00000030 != 0) {
        ppuVar2 = FUN_1000ad47();
        FUN_10005e00(&local_28,(int *)ppuVar2);
        local_8 = 0;
        FUN_100022f0(&local_28,L"%d%%");
        uVar3 = (**(code **)(*param_1 + 0x30))(DAT_10166ac0);
        pCVar1 = local_28;
        (**(code **)(*param_1 + 0x68))(local_28,*(undefined4 *)(local_28 + -0xc),&param_4,0x25);
        (**(code **)(*param_1 + 0x30))(uVar3);
        FUN_10001030((undefined4 *)(pCVar1 + -0x10));
      }
    }
  }
  iVar4 = FUN_100f90cf();
  return iVar4;
}

