// rea decompile_all
// name: FUN_0069abb0
// address: 0x69abb0
// body: available
// range: 0x69abb0-0x69aef6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069abb0(void)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int *in_ECX;
  char cVar8;
  undefined1 *local_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 *local_1c;
  int local_18;
  code *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722234;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_40 = (undefined1 *)&uStack_3c;
  FUN_006e6400();
  local_40 = (undefined1 *)0x1;
  FUN_006ce9f0();
  iVar3 = FUN_006e9580();
  puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 0x24) + 0xc))();
  ppuVar1 = (undefined4 **)(in_ECX + 0x2f);
  local_8 = 0;
  puVar2 = *ppuVar1;
  local_1c = puVar4;
  if (puVar2 != (undefined4 *)0x0) {
    if ((*(char *)(puVar2 + 0x33) == '\0') && (*(char *)((int)puVar2 + 0xcd) == '\0')) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x01';
    }
    *(char *)(puVar4 + 0x33) = cVar8;
    *(undefined2 *)((int)puVar4 + 0xcd) = 0;
    *(byte *)(puVar4 + 0x1a) =
         *(byte *)(puVar4 + 0x1a) & 0x9f | (cVar8 != '\0') << 5 | (cVar8 != '\0') << 6;
    if (puVar4[0x27] != (*ppuVar1)[0x27]) {
      puVar4[0x27] = (*ppuVar1)[0x27];
      FUN_006e6400(&local_40);
      FUN_006ce9f0(1);
    }
    piStack_38 = (int *)0x69ac9c;
    piVar5 = (int *)(**(code **)((*ppuVar1)[0x1c] + 4))();
    local_8._0_1_ = 1;
    local_14 = *(code **)(puVar4[0x1c] + 8);
    if (local_14 == FUN_0040a040) {
      local_14 = (code *)(puVar4 + 0x1d);
      piVar6 = (int *)(*piVar5 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      LOCK();
      iVar3 = *(int *)local_14;
      *(int *)local_14 = *piVar5;
      UNLOCK();
      piVar5 = (int *)(iVar3 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          piStack_38 = (int *)0x69acf2;
          FID_conflict__free(piVar5);
        }
      }
    }
    else {
      piStack_38 = (int *)0x69acfd;
      (*local_14)();
    }
    local_8._0_1_ = 0;
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        piStack_38 = (int *)0x69ad24;
        FID_conflict__free(piVar5);
      }
    }
    piStack_38 = &local_18;
    uStack_3c = 0x69ad34;
    piStack_38 = (int *)FUN_006e25d0();
    local_8 = CONCAT31(local_8._1_3_,2);
    uStack_3c = 0x69ad42;
    FUN_006e4900();
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        piStack_38 = (int *)0x69ad63;
        FID_conflict__free(piVar5);
      }
    }
  }
  if (ppuVar1 != &local_1c) {
    puVar2 = *ppuVar1;
    *ppuVar1 = puVar4;
    puVar4 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piStack_38 = (int *)0x69ad7d;
      (**(code **)*puVar2)();
    }
  }
  local_8 = 0xffffffff;
  if (puVar4 != (undefined4 *)0x0) {
    piStack_38 = (int *)0x69ad90;
    (**(code **)*puVar4)();
  }
  piVar5 = *ppuVar1;
  if (piVar5 != (int *)0x0) {
    piStack_38 = (int *)0x69ad9f;
    (**(code **)(*piVar5 + 0x28))();
    uStack_3c = 0x69ada9;
    piStack_38 = piVar5;
    FUN_006e5050();
  }
  if ((*(char *)(*ppuVar1 + 0x33) == '\0') && (*(char *)((int)*ppuVar1 + 0xcd) == '\0')) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  iVar3 = (bVar7 != 0) + 1;
  if (iVar3 != in_ECX[0x32]) {
    in_ECX[0x32] = iVar3;
    *(byte *)(in_ECX + 0x1a) = (bVar7 ^ 1) << 5 | *(byte *)(in_ECX + 0x1a) & 0xdf;
  }
  if (in_ECX != (int *)0xffffff88) {
    piStack_38 = (int *)0x69adfc;
    FUN_004097d0();
  }
  uStack_3c = 0x69ae06;
  FUN_006dfe90();
  piStack_38 = (int *)0x1000280;
  uStack_3c = 0x69ae1c;
  FUN_006e6170();
  local_40 = &stack0xffffffcc;
  piStack_38 = (int *)0x0;
  uStack_3c = 0x1000a00;
  FUN_006e8e70();
  piStack_38 = (int *)0x1000281;
  uStack_3c = 0x69ae3a;
  FUN_006e6170();
  local_40 = &stack0xffffffcc;
  piStack_38 = (int *)0x0;
  uStack_3c = 0x1000a00;
  FUN_006e8e70();
  piStack_38 = (int *)0x1000201;
  uStack_3c = 0x69ae58;
  FUN_006e6170();
  piStack_38 = (int *)0x1000200;
  uStack_3c = 0x69ae6e;
  FUN_006e6170();
  local_40 = &stack0xffffffcc;
  piStack_38 = (int *)0x0;
  uStack_3c = 0x1000202;
  FUN_006e8e70();
  piStack_38 = (int *)0x1000202;
  uStack_3c = 0x69ae8c;
  FUN_006e6170();
  piStack_38 = (int *)0x1000205;
  uStack_3c = 0x69aea2;
  FUN_006e6170();
  if (*(code **)(*in_ECX + 0x84) == FUN_0069af40) {
    if ((0 < in_ECX[7]) && (0 < in_ECX[6])) {
      iVar3 = FUN_006e9580();
      uStack_3c = 0x69aecf;
      (**(code **)(*(int *)(iVar3 + 0x24) + 0x10))();
      ExceptionList = local_10;
      return;
    }
  }
  else {
    (**(code **)(*in_ECX + 0x84))();
  }
  ExceptionList = local_10;
  return;
}

