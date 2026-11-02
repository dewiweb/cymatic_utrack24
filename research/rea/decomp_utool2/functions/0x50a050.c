// rea decompile_all
// name: FUN_0050a050
// address: 0x50a050
// body: available
// range: 0x50a050-0x50a141 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050a050(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007083a3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x18) != 0) {
    if (*(int *)(in_ECX + 0x70) < 0) {
      FUN_0044ec90(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    }
    FUN_00635430(&DAT_0073a2c8);
    local_8 = 0;
    FUN_0057f4a0();
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar3 = (undefined4 *)FUN_00683640(&local_14);
    uVar2 = *(undefined4 *)(in_ECX + 0x74);
    *(undefined4 *)(in_ECX + 0x74) = *puVar3;
    *puVar3 = uVar2;
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_14 + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*local_14)(1);
      }
    }
    if (local_18 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_18 + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*local_18)(1);
      }
    }
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

