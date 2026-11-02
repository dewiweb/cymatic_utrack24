// rea decompile_all
// name: FUN_0044bc60
// address: 0x44bc60
// body: available
// range: 0x44bc60-0x44befc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044bc60(void)

{
  void **ppvVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  int iVar5;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff868;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppvVar1 = (void **)(in_ECX + 0xd0);
  local_14 = in_ECX;
  FUN_0040f7f0();
  if (*(int *)(in_ECX + 0xd4) != 0) {
    uStack_50 = 0x44bca7;
    FID_conflict__free(*ppvVar1);
    *ppvVar1 = (void *)0x0;
    *(undefined4 *)(in_ECX + 0xd4) = 0;
  }
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  piVar4 = *(int **)(*(int *)(in_ECX + 0xb0) + 0x98);
  if (piVar4 == (int *)0x0) goto LAB_0044bed0;
  if (*(int *)(in_ECX + 200) == 0) {
    uStack_50 = 0x44bce5;
    puVar3 = (undefined4 *)(**(code **)(*piVar4 + 8))();
LAB_0044bcf5:
    FUN_0040f7f0();
    pvVar2 = *ppvVar1;
    *ppvVar1 = (void *)*puVar3;
    *puVar3 = pvVar2;
    *(undefined4 *)(in_ECX + 0xd4) = puVar3[1];
    *(undefined4 *)(in_ECX + 0xd8) = puVar3[2];
    puVar3[2] = 0;
    FUN_0040f7f0();
    uStack_50 = 0x44bd29;
    FID_conflict__free(local_38);
  }
  else if (*(int *)(in_ECX + 200) == 1) {
    uStack_50 = 0x44bcf5;
    puVar3 = (undefined4 *)(**(code **)(*piVar4 + 4))();
    goto LAB_0044bcf5;
  }
  if (*(char *)(in_ECX + 0xc4) != '\0') {
    iVar7 = 0;
    local_2c = (void *)0x0;
    local_28 = 0;
    local_24 = 0;
    iVar6 = 0;
    local_8 = 0;
    iVar5 = *(int *)(local_14 + 0xd8);
    if (0 < iVar5) {
      do {
        if (iVar6 + 1 < iVar5) {
          uStack_50 = 0x44bdee;
          local_18 = (undefined4 *)FUN_0040d240();
          if (local_28 < iVar7 + 1) {
            uStack_50 = 0x44be18;
            FUN_00409cf0();
            iVar7 = local_24;
          }
          puVar3 = (undefined4 *)((int)local_2c + iVar7 * 4);
          iVar5 = local_20;
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *local_18;
            *local_18 = &DAT_00bfe12c;
          }
        }
        else {
          uStack_50 = 0x44bd85;
          local_18 = (undefined4 *)FUN_006378b0();
          if (local_28 < iVar7 + 1) {
            uStack_50 = 0x44bdac;
            FUN_00409cf0();
            iVar7 = local_24;
          }
          puVar3 = (undefined4 *)((int)local_2c + iVar7 * 4);
          iVar5 = local_1c;
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *local_18;
            *local_18 = &DAT_00bfe12c;
          }
        }
        iVar7 = iVar7 + 1;
        piVar4 = (int *)(iVar5 + -8);
        local_24 = iVar7;
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            uStack_50 = 0x44be59;
            FID_conflict__free(piVar4);
          }
        }
        iVar6 = iVar6 + 2;
        iVar5 = *(int *)(local_14 + 0xd8);
      } while (iVar6 < iVar5);
    }
    if (ppvVar1 != &local_2c) {
      uStack_50 = 0x44be80;
      FUN_0041b050();
      pvVar2 = *ppvVar1;
      *ppvVar1 = local_38;
      *(undefined4 *)(in_ECX + 0xd4) = local_34;
      *(undefined4 *)(in_ECX + 0xd8) = local_30;
      FUN_0040f7f0();
      uStack_50 = 0x44beb0;
      FID_conflict__free(pvVar2);
    }
    local_8 = 0xffffffff;
    FUN_0040f7f0();
    uStack_50 = 0x44beca;
    FID_conflict__free(local_2c);
  }
LAB_0044bed0:
  FUN_006e7e60();
  FUN_006e6400(auStack_58);
  FUN_006ce9f0(1);
  ExceptionList = local_10;
  return;
}

