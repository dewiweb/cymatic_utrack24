// rea decompile_all
// name: FUN_10003bb0
// address: 0x10003bb0
// body: available
// range: 0x10003bb0-0x10003cf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10003bb0(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 local_818;
  undefined4 local_817;
  undefined4 local_813;
  undefined1 local_80f;
  short local_80e;
  undefined2 local_80c;
  undefined2 local_80a;
  undefined2 local_808;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar3 = FUN_100f8660(param_1,param_2);
  piVar1 = FUN_10003930(param_1 + 1,param_3);
  if (piVar1 != (int *)0x0) {
    if (piVar1[param_4] != (int)uVar3) {
      local_80e = (short)param_4 + 0x200;
      local_813 = 1;
      local_817 = 1;
      local_80f = 1;
      local_80a = 2;
      local_80c = (undefined2)(param_3 << 8);
      local_818 = 0;
      local_808 = (undefined2)uVar3;
      iVar2 = (**(code **)(*param_1 + 0x20))(&local_818,0x810,0,0,0);
      if (iVar2 != 0) goto LAB_10003c48;
      piVar1[param_4] = (int)uVar3;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  AfxMessageBox(L"FeatureBlockID not defined",0,0);
LAB_10003c48:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

