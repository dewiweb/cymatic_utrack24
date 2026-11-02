// rea decompile_all
// name: FUN_00554d60
// address: 0x554d60
// body: available
// range: 0x554d60-0x555087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00554d60(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int in_ECX;
  int *piVar5;
  byte bVar6;
  undefined4 in_stack_ffffffa4;
  undefined4 uVar7;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00711088;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar6 = 0;
  local_2c = in_ECX + 0x18;
  cVar2 = FUN_00632c80();
  if (cVar2 == '\0') {
    local_28 = in_ECX + 0x1c;
    uVar7 = 0x554dc0;
    cVar2 = FUN_00632c80();
    if (cVar2 == '\0') {
      FUN_00632c10(&stack0xffffffac,&DAT_0073e980,in_stack_ffffffa4,uVar7);
      FUN_006377c0();
      local_8 = 0;
      FUN_006329c0(&local_20,&DAT_0073e988);
      local_8._0_1_ = 1;
      FUN_00635a10(&local_1c);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00635a10(&local_18);
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,6);
      piVar5 = (int *)(local_24 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      if (*local_18 != '\0') {
        puVar3 = (undefined4 *)FUN_00458890();
        DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
        if ((DVar4 & 0x10) == 0) {
          bVar6 = 1;
        }
      }
      FUN_006329c0(&local_3c,&DAT_0073e9bc);
      local_8._0_1_ = 7;
      FUN_00635a10(&local_38);
      local_8._0_1_ = 8;
      FUN_00635a10(&local_34);
      local_8._0_1_ = 9;
      FUN_00635a10(&local_30);
      local_8 = CONCAT31(local_8._1_3_,10);
      FUN_00635a10(&local_14);
      piVar5 = (int *)(local_30 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_34 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_38 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,0xf);
      piVar5 = (int *)(local_3c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      if (*local_14 != '\0') {
        puVar3 = (undefined4 *)FUN_00458890();
        DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
        if ((DVar4 & 0x10) == 0) {
          bVar6 = bVar6 | 2;
        }
      }
      piVar5 = (int *)(local_14 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      ExceptionList = local_10;
      return bVar6;
    }
  }
  cVar2 = FUN_00632c80();
  ExceptionList = local_10;
  return (cVar2 == '\0') + 1;
}

