// rea decompile_all
// name: FUN_004ba270
// address: 0x4ba270
// body: available
// range: 0x4ba270-0x4ba329 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ba270(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070442e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0046e120(param_1);
  iVar1 = *(int *)(param_1 + 0x54);
  *(int *)(in_ECX + 0x54) = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined1 *)(in_ECX + 0x5c) = 0;
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(in_ECX + 0x60) = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  local_8 = 2;
  puVar2 = *(undefined4 **)(param_1 + 100);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 100) = 0;
  }
  else {
    puVar3 = operator_new(0x18);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    puVar3[4] = puVar2[4];
    puVar3[5] = puVar2[5];
    *(undefined4 **)(in_ECX + 100) = puVar3;
  }
  ExceptionList = local_10;
  return;
}

