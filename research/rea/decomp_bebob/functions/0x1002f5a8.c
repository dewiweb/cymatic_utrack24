// rea decompile_all
// name: CMFCToolBar::OnNeedTipText
// address: 0x1002f5a8
// body: available
// range: 0x1002f5a8-0x1002f6bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: int __thiscall CMFCToolBar::OnNeedTipText(unsigned int,struct tagNMHDR *,long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBar::OnNeedTipText(CMFCToolBar *this,uint param_1,tagNMHDR *param_2,long *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  tagPOINT local_40;
  undefined4 local_38 [9];
  short *local_14;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((_DAT_101677d0 & 1) == 0) {
    _DAT_101677d0 = _DAT_101677d0 | 1;
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(&DAT_101677cc,(int *)ppuVar1);
    _atexit((_func_4879 *)&LAB_1011aaf8);
  }
  iVar2 = *(int *)(this + 0xc94);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x20);
    }
    if (*(int *)param_2 == iVar2) {
      local_40.x = 0;
      local_40.y = 0;
      GetCursorPos(&local_40);
      ScreenToClient(*(HWND *)(this + 0x20),&local_40);
      _memset(local_38,0,0x30);
      local_38[0] = 0x2c;
      iVar2 = (**(code **)(*(int *)this + 0x74))(local_40.x,local_40.y,local_38);
      if (((-1 < iVar2) && (local_14 != (short *)0x0)) && (local_14 != (short *)0xffffffff)) {
        FUN_100022b0(&DAT_101677cc,local_14);
        _free(local_14);
        *(undefined4 *)(param_2 + 0xc) = DAT_101677cc;
        SendMessageW(*(HWND *)(*(int *)(this + 0xc94) + 0x20),0x30,DAT_10166bb8,0);
      }
    }
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

