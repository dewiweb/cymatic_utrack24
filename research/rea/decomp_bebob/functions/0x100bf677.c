// rea decompile_all
// name: CMFCOutlookBarPane::OnCreate
// address: 0x100bf677
// body: available
// range: 0x100bf677-0x100bf788 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCOutlookBarPane::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCOutlookBarPane::OnCreate(CMFCOutlookBarPane *this,tagCREATESTRUCTW *param_1)

{
  int iVar1;
  LONG *pLVar2;
  undefined4 local_20 [2];
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = CMFCToolBar::OnCreate((CMFCToolBar *)this,param_1);
  if (iVar1 != -1) {
    (**(code **)(*(int *)this + 0x1e0))(*(uint *)(this + 0x90) & 0xffbff0ff);
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    (**(code **)(*(int *)this + 0x234))(&DAT_10166638,0,0,0,0,0x13,0);
    pLVar2 = (LONG *)FUN_10037b18(local_20);
    local_18.right = *pLVar2;
    local_18.bottom = pLVar2[1];
    local_18.left = 0;
    local_18.top = 0;
    InflateRect(&local_18,3,3);
    (**(code **)(*(int *)(this + 0xde0) + 0x160))
              (&PTR_1011d390,0x40000000,&local_18,this,0xffffffff);
    CMFCButton::SetStdImage((CMFCButton *)(this + 0xde0),0x18,0,0);
    (**(code **)(*(int *)(this + 0x1530) + 0x160))
              (&PTR_1011d390,0x40000000,&local_18,this,0xffffffff);
    CMFCButton::SetStdImage((CMFCButton *)(this + 0x1530),0xd,0,0);
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

