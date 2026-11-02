// rea decompile_all
// name: CToolTipCtrl::OnAddTool
// address: 0x10098e00
// body: available
// range: 0x10098e00-0x10098e92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CToolTipCtrl::OnAddTool(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CToolTipCtrl::OnAddTool(CToolTipCtrl *this,uint param_1,long param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  undefined4 local_40;
  wchar_t *local_3c;
  undefined4 local_38 [8];
  int local_18;
  wchar_t *local_14;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  puVar2 = local_38;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *(undefined4 *)param_2;
    param_2 = (long)(param_2 + 4);
    puVar2 = puVar2 + 1;
  }
  if (((local_18 == 0) && (local_14 != (wchar_t *)0xffffffff)) && (local_14 != (wchar_t *)0x0)) {
    bVar1 = Lookup(this + 0x74,local_14,&local_40);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      puVar2 = CMapStringToPtr__operator__(this + 0x74,local_14);
      *puVar2 = 0;
    }
    local_3c = (wchar_t *)0x0;
    LookupKey(this + 0x74,local_14,&local_3c);
    local_14 = local_3c;
  }
  (**(code **)(*(int *)this + 0x11c))(0x432,param_1,local_38);
  lVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar3;
}

