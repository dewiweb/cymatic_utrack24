// rea decompile_all
// name: FUN_004b9bf0
// address: 0x4b9bf0
// body: available
// range: 0x4b9bf0-0x4b9cdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b9bf0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fcbb6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004b9ce0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  (**(code **)(*in_ECX + 0xa4))(0x8d40,in_ECX[0xb23]);
  puVar3 = (undefined4 *)in_ECX[0xb22];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  local_8 = 0;
  (**(code **)(in_ECX[0xb20] + 4))(0x8892,0);
  (**(code **)(in_ECX[0xb20] + 4))(0x8893,0);
  (**(code **)(in_ECX[0xb20] + 8))(2,in_ECX + 0x1e);
  puVar3 = (undefined4 *)in_ECX[0x18];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_004bda20();
  FID_conflict__free((void *)in_ECX[0x12]);
  FUN_004bda20();
  FID_conflict__free((void *)in_ECX[0xf]);
  ExceptionList = local_10;
  return;
}

