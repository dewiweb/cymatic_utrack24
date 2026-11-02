// rea decompile_all
// name: FUN_005487b0
// address: 0x5487b0
// body: available
// range: 0x5487b0-0x5489d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005487b0(void)

{
  uint *puVar1;
  int *piVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int in_ECX;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined4 local_a4;
  uint local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070f701;
  local_10 = ExceptionList;
  if (*(int *)(in_ECX + 0x20) == 0) {
    return 0xffffffff;
  }
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00416890(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 1;
  cVar6 = FUN_006031f0(local_a4,*(undefined4 *)(in_ECX + 0x14),*(int *)(in_ECX + 0x30),
                       *(int *)(in_ECX + 0x30) >> 0x1f,100,0);
  if (cVar6 == '\0') {
    puVar9 = *(undefined4 **)(in_ECX + 0x20);
    if (puVar9 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x20) = 0;
      puVar9 = (undefined4 *)*puVar9;
LAB_005489ac:
      (*(code *)*puVar9)(1);
    }
  }
  else {
    iVar7 = __aulldiv(*(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0x34),
                      *(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x2c));
    if (0x1ff < iVar7) {
      iVar7 = 0x1ff;
    }
    iVar12 = 0;
    if (0 < *(int *)(in_ECX + 0x14)) {
      fVar14 = 4.656613e-10;
      do {
        FUN_00416750(100);
        iVar10 = ((uint)local_14 ^ (int)local_14 >> 0x1f) - ((int)local_14 >> 0x1f);
        iVar8 = (local_18 ^ (int)local_18 >> 0x1f) - ((int)local_18 >> 0x1f);
        if (iVar8 < iVar10) {
          iVar8 = iVar10;
        }
        iVar10 = *(int *)(*(int *)(in_ECX + 0x18) + iVar12 * 4);
        fVar13 = (float)iVar8 * fVar14;
        pfVar3 = (float *)(iVar10 + iVar7 * 4);
        if (*pfVar3 <= fVar13 && fVar13 != *pfVar3) {
          *(float *)(iVar10 + iVar7 * 4) = fVar13;
        }
        pfVar3 = (float *)(*(int *)(in_ECX + 0x1c) + iVar12 * 4);
        if (*pfVar3 <= fVar13 && fVar13 != *pfVar3) {
          *(float *)(*(int *)(in_ECX + 0x1c) + iVar12 * 4) = fVar13;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(in_ECX + 0x14));
    }
    puVar1 = (uint *)(in_ECX + 0x30);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + *(uint *)(in_ECX + 0x28);
    puVar9 = *(undefined4 **)(in_ECX + 0x20);
    *(int *)(in_ECX + 0x34) =
         *(int *)(in_ECX + 0x34) + *(int *)(in_ECX + 0x2c) +
         (uint)CARRY4(uVar4,*(uint *)(in_ECX + 0x28));
    if ((*(uint *)(in_ECX + 0x34) <= (uint)puVar9[7]) &&
       ((*(uint *)(in_ECX + 0x34) < (uint)puVar9[7] || (*(uint *)(in_ECX + 0x30) < (uint)puVar9[6]))
       )) {
      if (iVar7 != *(int *)(in_ECX + 0x38)) {
        puVar5 = *(undefined4 **)(in_ECX + 0x10);
        *(int *)(in_ECX + 0x38) = iVar7;
        if (puVar5 != (undefined4 *)0x0) {
          LOCK();
          puVar5[1] = puVar5[1] + 1;
          UNLOCK();
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        local_14 = puVar5;
        FUN_00416930(puVar9,&local_14);
        if (puVar5 != (undefined4 *)0x0) {
          LOCK();
          piVar2 = puVar5 + 1;
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*puVar5)(1);
          }
        }
      }
      uVar11 = 1;
      goto LAB_005489b3;
    }
    uVar11 = 0;
    if (puVar9 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x20) = 0;
      (**(code **)*puVar9)(1);
      uVar11 = extraout_ECX;
    }
    puVar9 = *(undefined4 **)(in_ECX + 0x10);
    if (puVar9 != (undefined4 *)0x0) {
      LOCK();
      puVar9[1] = puVar9[1] + 1;
      UNLOCK();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_14 = puVar9;
    FUN_00416930(uVar11,&local_14);
    if (puVar9 != (undefined4 *)0x0) {
      LOCK();
      piVar2 = puVar9 + 1;
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        puVar9 = (undefined4 *)*puVar9;
        goto LAB_005489ac;
      }
    }
  }
  uVar11 = 0xffffffff;
LAB_005489b3:
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return uVar11;
}

