// rea decompile_all
// name: CPaneFrameWnd::Serialize
// address: 0x1003d419
// body: available
// range: 0x1003d419-0x1003d5a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::Serialize(CPaneFrameWnd *this,CArchive *param_1)

{
  int iVar1;
  ulong uVar2;
  CWnd *this_00;
  CArchiveException *local_3c;
  uint local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x1003d425;
  if (((byte)param_1[0x18] & 1) == 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_24);
    if (*(int *)(this + 0x84) != 0) {
      local_24.bottom = *(int *)(this + 0x9c) + local_24.top;
    }
    local_38 = IsWindowVisible(*(HWND *)(this + 0x20));
    uVar2 = CWnd::GetExStyle((CWnd *)this);
    CArchive::operator<<(param_1,uVar2);
    CArchive::Write(param_1,&local_24,0x10);
    CArchive::operator<<(param_1,local_38);
    this_00 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
    if (this_00 == (CWnd *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = CWnd::GetDlgCtrlID(this_00);
    }
    CArchive::operator<<(param_1,iVar1);
    CArchive::operator<<(param_1,*(long *)(this + 0xb8));
    CArchive::operator<<(param_1,*(long *)(this + 0x88));
  }
  else {
    local_38 = 0;
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    SetRectEmpty(&local_34);
    CArchive::operator>>(param_1,(long *)&local_38);
    operator>>(param_1,&local_34);
    CArchive::operator>>(param_1,(long *)&local_3c);
    CArchive::operator>>(param_1,(long *)(this + 0xb4));
    CArchive::operator>>(param_1,(long *)(this + 0xb8));
    CArchive::operator>>(param_1,(long *)(this + 0x88));
    iVar1 = (**(code **)(*(int *)this + 0x200))
                      (&PTR_1011d390,local_38 & 0xefffffff,&local_34,DAT_101680a4,0);
    if (iVar1 == 0) {
      local_3c = FUN_1000858a(0x10);
      local_8 = 0;
      if (local_3c == (CArchiveException *)0x0) {
        local_38 = 0;
      }
      else {
        local_38 = CArchiveException::CArchiveException(local_3c,0,(char *)0x0);
      }
      local_8 = 0xffffffff;
      __CxxThrowException_8(&local_38,&DAT_1014e200);
    }
    *(undefined4 *)(this + 0xbc) = *(undefined4 *)(DAT_101680a4 + 0x20);
  }
  FUN_100f90cf();
  return;
}

