// rea decompile_all
// name: FUN_0061cce0
// address: 0x61cce0
// body: available
// range: 0x61cce0-0x61ce75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0061cce0(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071cf77;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar7 = (int *)(in_ECX + 4);
  local_14 = in_ECX;
  iVar3 = FUN_0045d670(*piVar7,"<!DOCTYPE",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (iVar3 == 0) {
    FUN_0044ebd0(9);
    pcVar1 = (char *)*piVar7;
    iVar3 = 1;
    do {
      iVar4 = FUN_00443260();
      if (iVar4 == 0) {
        iVar6 = 0;
        *(undefined1 *)(local_14 + 8) = 1;
        do {
          *piVar7 = *piVar7 + -1;
          if ((*(byte *)*piVar7 & 0xc0) != 0x80) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 4);
      }
      if (*(char *)(local_14 + 8) != '\0') {
        ExceptionList = local_10;
        return 0;
      }
      if (iVar4 == 0x3c) {
        iVar3 = iVar3 + 1;
      }
      else if (iVar4 == 0x3e) {
        iVar3 = iVar3 + -1;
      }
    } while (0 < iVar3);
    local_18 = *piVar7;
    FUN_0044ebd0(0xffffffff);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      puVar9 = (undefined4 *)&DAT_00bfe12c;
    }
    else {
      iVar3 = local_18 - (int)pcVar1;
      uVar8 = iVar3 + 4U & 0xfffffffc;
      puVar5 = (undefined4 *)FUN_004bfe22(uVar8 + 0xb);
      puVar5[1] = uVar8;
      puVar9 = puVar5 + 2;
      *puVar5 = 0;
      FUN_004c2c30(puVar9,pcVar1,iVar3);
      *(undefined1 *)((int)puVar9 + iVar3) = 0;
    }
    local_8 = 0;
    local_1c = puVar9;
    puVar5 = (undefined4 *)FUN_006378b0(&local_20);
    uVar2 = *(undefined4 *)(local_14 + 0x10);
    *(undefined4 *)(local_14 + 0x10) = *puVar5;
    *puVar5 = uVar2;
    piVar7 = (int *)(local_20 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = puVar9 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}

