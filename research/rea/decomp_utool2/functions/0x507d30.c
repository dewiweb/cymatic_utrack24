// rea decompile_all
// name: FUN_00507d30
// address: 0x507d30
// body: available
// range: 0x507d30-0x507e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00507d30(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  byte extraout_var;
  int in_ECX;
  int *piVar3;
  int unaff_ESI;
  int iVar4;
  int local_24;
  undefined1 auStack_20 [4];
  int local_1c;
  undefined4 uStack_14;
  
  local_1c = in_ECX + 0x7dc;
  (**(code **)(*(int *)(in_ECX + 0x7dc) + 0x28))(param_1 == in_ECX + 0xdc);
  local_24 = in_ECX + 0x344;
  iVar4 = in_ECX + 0x210;
  (**(code **)(*(int *)(in_ECX + 0x344) + 0x28))(param_1 == iVar4);
  FUN_004f7a10(param_1 == in_ECX + 0xdc);
  FUN_004f7a10(param_1 == iVar4);
  if (param_1 == iVar4) {
    puVar2 = (undefined4 *)FUN_0040f2d0(&local_24);
    uVar1 = *(undefined4 *)(unaff_ESI + 0xbbc);
    *(undefined4 *)(unaff_ESI + 0xbbc) = *puVar2;
    *puVar2 = uVar1;
    piVar3 = (int *)(local_24 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    *(undefined1 *)(unaff_ESI + 0xbc0) = 0;
    (**(code **)(**(int **)(unaff_ESI + 8) + 4))();
    return;
  }
  FUN_004f8930(auStack_20);
  piVar3 = (int *)(local_1c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar4 = *(int *)(unaff_ESI + 0xbbc);
  *(int *)(unaff_ESI + 0xbbc) = local_1c;
  UNLOCK();
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045e080(uStack_14,"FAT32");
  *(byte *)(unaff_ESI + 0xbc0) = extraout_var >> 7;
  FUN_004105c0();
  (**(code **)(**(int **)(unaff_ESI + 8) + 4))();
  return;
}

