// rea decompile_all
// name: FUN_006d02b0
// address: 0x6d02b0
// body: available
// range: 0x6d02b0-0x6d03fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d02b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Memory;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  int local_44;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726af4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)(in_ECX + 0x84);
  local_44 = 0x6d02ee;
  piVar3 = (int *)FUN_0062a070();
  local_8 = 0;
  local_44 = 0x6d0303;
  piVar4 = (int *)FUN_0062a070();
  if (*piVar4 == *piVar3) {
    iVar5 = 0;
  }
  else {
    local_44 = *piVar4;
    uStack_48 = 0x6d0320;
    iVar5 = FUN_00448730();
  }
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_44 = 0x6d0347;
      FID_conflict__free(piVar3);
    }
  }
  local_8 = 0xffffffff;
  piVar3 = (int *)(local_18 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_44 = 0x6d036e;
      FID_conflict__free(piVar3);
    }
  }
  if (iVar5 != 0) {
    if (puVar1 != param_1) {
      local_44 = 0x6d0385;
      FUN_0041b050();
      _Memory = (void *)*puVar1;
      *puVar1 = local_2c;
      *(undefined4 *)(in_ECX + 0x88) = local_28;
      *(undefined4 *)(in_ECX + 0x8c) = local_24;
      FUN_0040f7f0();
      local_44 = 0x6d03b5;
      FID_conflict__free(_Memory);
    }
    FUN_006e7e60();
    FUN_006e6400(auStack_4c);
    FUN_006ce9f0(1);
    FUN_006b5ac0();
  }
  ExceptionList = local_10;
  return;
}

