// rea decompile_all
// name: FUN_006acc30
// address: 0x6acc30
// body: available
// range: 0x6acc30-0x6acd26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006acc30(undefined4 param_1,undefined4 param_2,int param_3,char param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 *local_28;
  undefined **local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723586;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if (param_3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_0040de70(param_3);
  }
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    puVar4[1] = puVar4[1] + 1;
    UNLOCK();
  }
  local_28 = puVar4;
  FUN_004aecf0(param_5,&local_28);
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar4 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(1,uVar3);
    }
  }
  if ((param_4 != '\0') && (param_3 != 0)) {
    local_24[0] = &PTR_vftable_00c7ed34;
    local_1c[0] = 1;
    local_8 = 0;
    FUN_00637060(&DAT_00c8a978,local_24);
    local_8 = 0xffffffff;
    (**(code **)(*local_24[0] + 0x54))(local_1c);
  }
  FUN_006ade90(param_1,param_2,param_5);
  (**(code **)(*in_ECX + 0x84))();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

