// rea decompile_all
// name: FUN_005b3be0
// address: 0x5b3be0
// body: available
// range: 0x5b3be0-0x5b3f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b3be0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *in_EDX;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int *piStack_d4;
  int local_6c;
  int *local_68;
  int *local_60;
  int *local_5c;
  undefined4 local_58;
  int local_54;
  uint local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  char acStack_1b [2];
  int local_19;
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00719183;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *in_EDX;
  *in_ECX = iVar4;
  piVar2 = (int *)(iVar4 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  piVar2 = (int *)(*in_EDX + -8);
  local_58 = 1;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piStack_d4 = (int *)0x5b3c69;
  local_68 = in_ECX;
  local_44 = in_ECX;
  cVar1 = FUN_005b5020();
  if (cVar1 != '\0') {
    piStack_d4 = (int *)0x5b3c7f;
    FUN_006369b0();
    uVar7 = 1;
    local_8 = 1;
    local_50 = 1;
    while( true ) {
      local_19._0_1_ = 0;
      local_3c = (int *)(acStack_1b + 2);
      if ((int)uVar7 < 0) {
        uVar7 = -uVar7;
        do {
          piVar2 = local_3c;
          local_3c = (int *)((int)piVar2 + -1);
          uVar6 = uVar7 / 10;
          *(char *)local_3c = (char)uVar7 + (char)uVar6 * -10 + '0';
          uVar7 = uVar6;
        } while (uVar6 != 0);
        local_3c = (int *)((int)piVar2 + -2);
        *(char *)local_3c = '-';
      }
      else {
        do {
          local_3c = (int *)((int)local_3c + -1);
          uVar6 = uVar7 / 10;
          *(char *)local_3c = (char)uVar7 + (char)uVar6 * -10 + '0';
          uVar7 = uVar6;
        } while (uVar6 != 0);
      }
      iVar4 = -(int)local_3c;
      pcVar8 = acStack_1b + iVar4 + 2;
      piStack_d4 = (int *)0x5b3d0e;
      piVar3 = (int *)FUN_004bfe22();
      piVar3[1] = (uint)(&uStack_15 + iVar4) & 0xfffffffc;
      local_60 = piVar3 + 2;
      *piVar3 = 0;
      local_4c = local_60;
      local_5c = local_3c;
      piVar2 = local_3c;
      while ((0 < (int)pcVar8 && (iVar4 = FUN_00443260(), piVar2 = extraout_ECX, iVar4 != 0))) {
        piStack_d4 = (int *)0x5b3d4a;
        FUN_0044ecc0();
        pcVar8 = pcVar8 + -1;
        piVar2 = extraout_ECX_00;
      }
      *(undefined1 *)local_4c = 0;
      local_8._0_1_ = 2;
      uVar7 = local_50 + 1;
      local_3c = (int *)&piStack_d4;
      local_54 = local_40;
      piVar5 = (int *)(local_40 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      piStack_d4 = piVar2;
      local_50 = uVar7;
      FUN_006377c0(local_40);
      FUN_00637730();
      piStack_d4 = (int *)0x5b3da9;
      FUN_006377c0();
      local_8._0_1_ = 4;
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          piStack_d4 = (int *)0x5b3dd8;
          FID_conflict__free(piVar3);
        }
      }
      piStack_d4 = (int *)0x5b3de7;
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,5);
      piStack_d4 = &local_6c;
      piVar2 = (int *)FUN_00635a10();
      piVar3 = local_68;
      iVar4 = *local_68;
      *local_68 = *piVar2;
      *piVar2 = iVar4;
      piVar2 = (int *)(local_6c + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          piStack_d4 = (int *)0x5b3e49;
          FID_conflict__free(piVar2);
        }
      }
      local_8._0_1_ = 4;
      piVar2 = local_44 + -2;
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          piStack_d4 = (int *)0x5b3e7c;
          FID_conflict__free(piVar2);
        }
      }
      piVar2 = (int *)(*piVar3 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piStack_d4 = (int *)0x5b3ea4;
      cVar1 = FUN_005b5020();
      if (cVar1 == '\0') break;
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar2 = (int *)(local_48 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          piStack_d4 = (int *)0x5b3ee3;
          FID_conflict__free(piVar2);
        }
      }
    }
    piVar2 = (int *)(local_48 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        piStack_d4 = (int *)0x5b3f0b;
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_40 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        piStack_d4 = (int *)0x5b3f2b;
        FID_conflict__free(piVar2);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

