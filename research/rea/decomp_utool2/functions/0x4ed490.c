// rea decompile_all
// name: FUN_004ed490
// address: 0x4ed490
// body: available
// range: 0x4ed490-0x4ed5de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004ed490(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 in_ECX;
  undefined4 in_EDX;
  void *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007052e7;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = operator_new(0x16c);
  local_8 = 0;
  puVar5 = (undefined4 *)FUN_004ed5e0(uVar4);
  local_8 = 1;
  FUN_004eabf0(0,param_1,1);
  FUN_004eabf0(1,param_2,1);
  FUN_004eabf0(2,param_3,1);
  puVar5[0x4b] = 2;
  local_18 = DAT_00c7ebbc;
  local_8._0_1_ = 2;
  operator_new(0x28);
  local_14 = (undefined4 *)FUN_00468a40(0);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 4;
  FUN_00636ec0(in_EDX);
  FUN_0044ec90();
  FUN_00644f50(&local_14,&local_18);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  FUN_004eb590(in_ECX);
  FUN_006e5240();
  uVar3 = puVar5[0x5a];
  (**(code **)*puVar5)(1);
  ExceptionList = local_10;
  return uVar3;
}

