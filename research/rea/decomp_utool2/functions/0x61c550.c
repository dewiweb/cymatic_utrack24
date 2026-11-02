// rea decompile_all
// name: FUN_0061c550
// address: 0x61c550
// body: available
// range: 0x61c550-0x61c915 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0061c550(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int local_28;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071cf54;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0061cb80();
  if (*(char *)(in_ECX + 8) != '\0') {
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
  piVar11 = (int *)(in_ECX + 4);
  iVar4 = FUN_00426f70();
  if (iVar4 != 0x3c) {
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
  FUN_0044eb90();
  FUN_0061d210();
  if (local_24 == *piVar11) {
    FUN_0061cb80();
    FUN_0061d210();
    if (local_24 == *piVar11) {
      FUN_0045c990();
      piVar11 = (int *)(param_1 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        *piVar11 = *piVar11 + 1;
        UNLOCK();
      }
      LOCK();
      iVar4 = *(int *)(in_ECX + 0xc);
      *(int *)(in_ECX + 0xc) = param_1;
      UNLOCK();
      piVar11 = (int *)(iVar4 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      *(undefined1 *)(in_ECX + 9) = 1;
      FUN_00637c10();
      ExceptionList = local_10;
      return (undefined4 *)0x0;
    }
  }
  puVar5 = operator_new(0x10);
  local_8 = 0;
  iVar4 = *piVar11;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar1 = puVar5 + 3;
  puVar13 = puVar1;
  FUN_0061f730(puVar1,iVar4);
  FUN_0061f950(puVar13,iVar4);
  local_8 = 0xffffffff;
  *piVar11 = local_24;
  puVar13 = puVar5 + 2;
  do {
    FUN_0061cb80();
    iVar4 = FUN_00426f70();
    if (iVar4 == 0x2f) {
      FUN_0044ebd0();
      iVar4 = FUN_00426f70();
      if (iVar4 == 0x3e) {
        FUN_0044ebd0();
        ExceptionList = local_10;
        return puVar5;
      }
    }
    else if (iVar4 == 0x3e) {
      bVar2 = *(byte *)*piVar11;
      pbVar12 = (byte *)*piVar11 + 1;
      *piVar11 = (int)pbVar12;
      if (-1 < (char)bVar2) goto LAB_0061c8f5;
      uVar10 = 0x40;
      if ((bVar2 & 0x40) != 0) break;
      goto LAB_0061c8f5;
    }
    cVar3 = FUN_0061d2b0();
    if (cVar3 == '\0') {
      if (*(char *)(in_ECX + 8) != '\0') {
        ExceptionList = local_10;
        return puVar5;
      }
      uVar9 = extraout_ECX;
      uVar8 = extraout_ECX;
      uVar14 = extraout_ECX;
      FUN_00637690(puVar1);
      FUN_006377c0(uVar9);
      FUN_00621710(uVar8);
      uVar9 = FUN_006377c0(uVar14);
      FUN_0061d1c0(uVar9);
      piVar11 = puVar5 + 1;
      if (piVar11 == &DAT_00bfe124) {
        ExceptionList = local_10;
        return puVar5;
      }
      LOCK();
      iVar4 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar4 != 0) {
        ExceptionList = local_10;
        return puVar5;
      }
      FID_conflict__free(piVar11);
      ExceptionList = local_10;
      return puVar5;
    }
    FUN_0061d210();
    iVar4 = *piVar11;
    if (local_28 == iVar4) {
      ExceptionList = local_10;
      return puVar5;
    }
    *(int *)(in_ECX + 4) = local_28;
    FUN_0061cb80();
    iVar6 = FUN_0061d080();
    if (iVar6 != 0x3d) {
      uVar8 = FUN_0062cd70(iVar4,local_28);
      local_8 = 2;
      uVar9 = extraout_ECX_00;
      FUN_00637690(uVar8);
      uVar9 = FUN_006377c0(uVar9);
      FUN_0061d1c0(uVar9);
      piVar11 = (int *)(param_1 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      piVar11 = (int *)(local_28 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      ExceptionList = local_10;
      return puVar5;
    }
    FUN_0061cb80();
    iVar6 = FUN_00426f70();
    if ((iVar6 != 0x22) && (iVar6 != 0x27)) {
      ExceptionList = local_10;
      return puVar5;
    }
    operator_new(0xc);
    local_8 = 1;
    puVar7 = (undefined4 *)FUN_0061ab80(iVar4);
    local_8 = 0xffffffff;
    FUN_0061c920();
    *puVar13 = puVar7;
    puVar13 = puVar7;
  } while( true );
  while( true ) {
    pbVar12 = pbVar12 + 1;
    uVar10 = uVar10 >> 1;
    *piVar11 = (int)pbVar12;
    if (((int)(char)bVar2 & uVar10) == 0) break;
    if (uVar10 < 9) break;
  }
LAB_0061c8f5:
  if ((char)param_1 != '\0') {
    FUN_0061bc90();
  }
  ExceptionList = local_10;
  return puVar5;
}

