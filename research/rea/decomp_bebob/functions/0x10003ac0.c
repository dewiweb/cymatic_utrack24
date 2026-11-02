// rea decompile_all
// name: FUN_10003ac0
// address: 0x10003ac0
// body: available
// range: 0x10003ac0-0x10003ba6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10003ac0(void *this,uint param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 local_818;
  undefined4 local_817;
  undefined4 local_813;
  undefined1 local_80f;
  short local_80e;
  undefined2 local_80c;
  undefined2 local_80a;
  char local_808;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  piVar1 = FUN_10003930((void *)((int)this + 4),param_1);
  if (piVar1 == (int *)0x0) {
    AfxMessageBox(L"FeatureBlockID not defined",0,0);
LAB_10003afd:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (*(char *)(param_2 + 0x18 + (int)piVar1) != param_3) {
    local_813 = 1;
    local_817 = 1;
    local_80f = 1;
    local_80e = (short)param_2 + 0x100;
    local_80a = 1;
    local_808 = param_3;
    local_80c = (undefined2)(param_1 << 8);
    local_818 = 0;
    iVar2 = (**(code **)(*(int *)this + 0x20))(&local_818,0x810,0,0,0);
    if (iVar2 != 0) goto LAB_10003afd;
    *(char *)(param_2 + 0x18 + (int)piVar1) = param_3;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

