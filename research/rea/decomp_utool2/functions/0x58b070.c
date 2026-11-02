// rea decompile_all
// name: FUN_0058b070
// address: 0x58b070
// body: available
// range: 0x58b070-0x58b21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0058b070(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 local_38 [8];
  int local_30;
  undefined1 local_20 [4];
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713c38;
  local_10 = ExceptionList;
  if (*(int *)(in_ECX + 0x10) == 0) {
    return 0;
  }
  puVar4 = *(undefined4 **)(in_ECX + 0x14);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  ExceptionList = &local_10;
  *(undefined1 *)(puVar4 + 0x25) = 0;
  FUN_006031f0(puVar4[3],*puVar4,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c),
               *(undefined4 *)(in_ECX + 0x20),0);
  local_14 = 0;
  iVar5 = FUN_00412c20(local_38,*(undefined4 *)(in_ECX + 0x30));
  piVar6 = (int *)(local_30 + -8);
  iVar5 = *(int *)(iVar5 + 4);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_1c = (undefined4 *)FUN_0053b6e0(*(int *)(in_ECX + 0x28) + iVar5);
  if (local_1c != (undefined4 *)0x0) {
    piVar6 = (int *)FUN_0053f050(&local_18);
    local_8 = 0;
    uVar8 = __allmul(*(int *)(*piVar6 + 0x20),*(int *)(*piVar6 + 0x20) >> 0x1f,
                     *(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
    uVar8 = __alldiv(uVar8,8,0);
    iVar5 = *(int *)(in_ECX + 0x38);
    puVar1 = (uint *)(iVar5 + 0x30);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + (uint)uVar8;
    *(int *)(iVar5 + 0x34) =
         *(int *)(iVar5 + 0x34) + (int)((ulonglong)uVar8 >> 0x20) + (uint)CARRY4(uVar3,(uint)uVar8);
    (**(code **)(**(int **)(*(int *)(iVar5 + 0x10) + 0x28) + 0x18))(uVar8);
    if (local_18 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = local_18 + 1;
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*local_18)(1);
      }
    }
    piVar6 = *(int **)(in_ECX + 0x14);
    iVar5 = local_1c[9];
    if (iVar5 < 0) {
      uVar7 = *(undefined4 *)piVar6[3];
      FUN_00591a50(&local_1c);
      local_14 = FUN_004e5c20(*(undefined4 *)(in_ECX + 0x30));
      if (local_1c != (undefined4 *)0x0) {
        LOCK();
        piVar6 = local_1c + 1;
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*local_1c)(1);
        }
      }
      goto LAB_0058b1f9;
    }
    if (iVar5 < *piVar6) {
      uVar7 = *(undefined4 *)(piVar6[3] + iVar5 * 4);
      FUN_00591a50(local_20);
      local_14 = FUN_004e5c20(*(undefined4 *)(in_ECX + 0x30));
      FUN_004030d0();
      goto LAB_0058b1f9;
    }
  }
  uVar7 = 0;
LAB_0058b1f9:
  FUN_004c2c30(local_14,uVar7,*(int *)(in_ECX + 0x20) << 2);
  ExceptionList = local_10;
  return 0;
}

