// rea decompile_all
// name: FUN_10003d00
// address: 0x10003d00
// body: available
// range: 0x10003d00-0x10003e0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10003d00(void *this,uint param_1,int param_2,double *param_3)

{
  int iVar1;
  undefined1 local_828 [4];
  double *local_824;
  int *local_820;
  short local_81c [2];
  undefined1 local_818;
  undefined4 local_817;
  undefined4 local_813;
  undefined1 local_80f;
  short local_80e;
  undefined2 local_80c;
  undefined4 local_80a;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_824 = param_3;
  local_820 = FUN_10003930((void *)((int)this + 4),param_1);
  if (local_820 == (int *)0x0) {
    AfxMessageBox(L"FeatureBlockID not defined",0,0);
  }
  else {
    local_818 = 1;
    local_813 = 1;
    local_817 = 1;
    local_80f = 1;
    local_80e = (short)param_2 + 0x200;
    local_80c = (undefined2)(param_1 << 8);
    local_80a = 2;
    iVar1 = (**(code **)(*(int *)this + 0x20))(&local_818,0x810,local_81c,2,local_828);
    if (iVar1 == 0) {
      local_820[param_2] = (int)local_81c[0];
      local_820 = (int *)(int)local_81c[0];
      *local_824 = (double)(int)local_820 * 0.00390625;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

