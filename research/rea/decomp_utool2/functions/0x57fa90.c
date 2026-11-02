// rea decompile_all
// name: FUN_0057fa90
// address: 0x57fa90
// body: available
// range: 0x57fa90-0x57fbda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057fa90(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  int *piVar4;
  int *in_ECX;
  char *pcVar5;
  uint uVar6;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_007126a6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar6 = 0;
  local_8 = 0;
  if (0 < in_ECX[2]) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        LOCK();
        param_1[1] = param_1[1] + 1;
        UNLOCK();
      }
      local_8._0_1_ = 2;
      pcVar5 = "\n";
      if (in_ECX[2] + -1 <= (int)uVar6) {
        pcVar5 = "";
      }
      FUN_0045c990(pcVar5);
      local_8._0_1_ = 3;
      if (uVar6 < (uint)in_ECX[2]) {
        ppuVar3 = (undefined **)(*in_ECX + uVar6 * 4);
      }
      else {
        ppuVar3 = &PTR_DAT_00c7ed68;
      }
      puVar2 = *ppuVar3;
      piVar4 = (int *)(puVar2 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      FUN_00637730(puVar2);
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_0057f500();
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
      local_8 = local_8 & 0xffffff00;
      piVar4 = (int *)(local_14 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < in_ECX[2]);
  }
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_1 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return;
}

