// rea decompile_all
// name: FUN_005b79e0
// address: 0x5b79e0
// body: available
// range: 0x5b79e0-0x5b7c7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b79e0(void)

{
  int iVar1;
  double dVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int *piVar6;
  uint uVar7;
  int in_ECX;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint local_2c;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007197fc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (**(char **)(in_ECX + 0xbc) != '\0') {
    puVar4 = (undefined4 *)FUN_00458890(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    if (DVar5 != 0xffffffff) {
      FUN_00635980();
    }
  }
  puVar3 = PTR_DAT_00c7ed68;
  piVar6 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  piVar6 = (int *)FUN_00631af0(0,FUN_005b76b0,in_ECX,puVar3,5000,0,0,5,&DAT_00bfe12c);
  local_8 = 0;
  if (piVar6 != (int *)0x0) {
    FUN_00636040(&local_24);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00634890(&local_20);
    piVar8 = (int *)(local_20 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar8 = (int *)(local_24 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    operator_new(0x30);
    local_8._0_1_ = 2;
    piVar8 = (int *)FUN_0062aec0(in_ECX + 0xbc,0x8000);
    local_8 = (uint)local_8._1_3_ << 8;
    local_14 = piVar8;
    if (*(char *)piVar8[4] != '\0') {
      puVar4 = (undefined4 *)*piVar8;
      piVar8 = (int *)0x0;
      local_14 = (int *)0x0;
      (*(code *)*puVar4)(1);
    }
    if (piVar8 != (int *)0x0) {
      *(undefined1 *)(in_ECX + 0xc0) = 1;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = (**(code **)(*piVar6 + 4))();
      local_2c = 0;
      *(undefined8 *)(in_ECX + 200) = uVar11;
      local_18 = 0;
      local_1c = 0;
      do {
        uVar7 = *(uint *)(in_ECX + 0xcc);
        if (((*(uint *)(in_ECX + 200) & uVar7) != 0xffffffff) &&
           (((int)uVar7 < local_18 ||
            (((int)uVar7 <= local_18 && (*(uint *)(in_ECX + 200) <= local_2c))))))
        goto LAB_005b7c56;
        uVar7 = (**(code **)(*piVar6 + 0xc))(in_ECX + 0xd0,0x4000);
        if ((*(uint *)(in_ECX + 200) & *(uint *)(in_ECX + 0xcc)) == 0xffffffff) {
          uVar11 = (**(code **)(*piVar6 + 4))();
          *(undefined8 *)(in_ECX + 200) = uVar11;
        }
        if (uVar7 == 0) break;
        (**(code **)(*local_14 + 0x10))(in_ECX + 0xd0,uVar7);
        (**(code **)(*local_14 + 4))();
        local_2c = local_1c + uVar7;
        local_18 = local_18 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(local_1c,uVar7);
        local_1c = local_2c;
        if (*(int *)(in_ECX + 200) != 0 || *(int *)(in_ECX + 0xcc) != 0) {
          FUN_006f5730();
          dVar2 = (double)CONCAT44(uVar10,uVar9);
          FUN_006f5730();
          *(double *)(in_ECX + 0x58) = dVar2 / (double)CONCAT44(uVar10,uVar9);
        }
        Sleep(10);
      } while (*(char *)(in_ECX + 0x3c) == '\0');
      *(undefined1 *)(in_ECX + 0xc0) = 0;
LAB_005b7c56:
      (**(code **)*local_14)(1);
    }
    (**(code **)*piVar6)(1);
  }
  ExceptionList = local_10;
  return;
}

