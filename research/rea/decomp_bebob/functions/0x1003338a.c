// rea decompile_all
// name: CMFCBaseVisualManager::DrawPushButton
// address: 0x1003338a
// body: available
// range: 0x1003338a-0x10033465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseVisualManager::DrawPushButton(class CDC *,class
   CRect,class CMFCButton *,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCBaseVisualManager::DrawPushButton
          (CMFCBaseVisualManager *this,int param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,CWnd *param_7)

{
  CWnd *this_00;
  int iVar1;
  LRESULT LVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  undefined4 uVar5;
  undefined4 local_8;
  
  this_00 = param_7;
  if (*(int *)(this + 0x10) != 0) {
    local_8 = 1;
    iVar1 = CWnd::IsWindowEnabled(param_7);
    if (iVar1 == 0) {
      local_8 = 4;
    }
    else {
      iVar1 = CMFCButton::IsPressed((CMFCButton *)this_00);
      if ((iVar1 == 0) && (LVar2 = SendMessageW(*(HWND *)(this_00 + 0x20),0xf0,0,0), LVar2 == 0)) {
        if (*(int *)(this_00 + 0xa8) == 0) {
          pHVar3 = GetFocus();
          pCVar4 = CWnd::FromHandle(pHVar3);
          if (pCVar4 == this_00) {
            local_8 = 5;
          }
        }
        else {
          local_8 = 2;
        }
      }
      else {
        local_8 = 3;
      }
    }
    (**(code **)(*(int *)this_00 + 0x170))(param_1,param_3,param_4,param_5,param_6);
    if (*(code **)(this + 0x58) != (code *)0x0) {
      if (param_1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 4);
      }
      (**(code **)(this + 0x58))(*(undefined4 *)(this + 0x10),uVar5,1,local_8,&param_3,0);
    }
    return 1;
  }
  return 0;
}

