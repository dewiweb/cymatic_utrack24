// rea decompile_all
// name: FUN_004f7540
// address: 0x4f7540
// body: available
// range: 0x4f7540-0x4f7606 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7540(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 extraout_EDX;
  float fVar6;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070644e;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar6 = (float)*(int *)(in_ECX + 0x1c) * 0.75;
  if (15.0 <= fVar6) {
    fVar6 = 15.0;
  }
  *(float *)(in_ECX + 0xe0) = fVar6;
  *(float *)(in_ECX + 0xe4) = fVar6 * 1.1;
  FUN_0057f4a0(uVar4);
  local_8 = extraout_EDX;
  puVar5 = (undefined4 *)FUN_00683640(&local_14);
  uVar3 = *(undefined4 *)(in_ECX + 0xe8);
  *(undefined4 *)(in_ECX + 0xe8) = *puVar5;
  *puVar5 = uVar3;
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
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_18 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_18)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

