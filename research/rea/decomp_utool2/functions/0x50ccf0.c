// rea decompile_all
// name: FUN_0050ccf0
// address: 0x50ccf0
// body: available
// range: 0x50ccf0-0x50cef9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050ccf0(void)

{
  void *_Memory;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined4 uVar10;
  uint local_38;
  int local_34;
  int local_2c;
  void *local_1c [3];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  iVar6 = 0;
  do {
    iVar1 = *(int *)(in_ECX + 0xb0);
    if (*(int *)(iVar1 + 0x10) == 0) {
      if (*(int *)(iVar1 + 8) == 0) {
        iVar1 = *(int *)(*(int *)(iVar1 + 0xc) + 100);
      }
      else {
        iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x5c);
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0x4bc);
    }
    if (iVar1 <= (int)uVar7) {
      puVar3 = (undefined4 *)FUN_00508fa0(local_1c);
      iVar6 = *(int *)(in_ECX + 0xb0);
      if (*(int *)(iVar6 + 0x10) == 0) {
        if (*(int *)(iVar6 + 8) == 0) {
          puVar8 = (undefined4 *)(*(int *)(iVar6 + 0xc) + 0x74);
        }
        else {
          puVar8 = (undefined4 *)(*(int *)(iVar6 + 8) + 0x40);
        }
      }
      else {
        puVar8 = (undefined4 *)(*(int *)(iVar6 + 0x10) + 0x4c8);
      }
      if (puVar8 != puVar3) {
        FUN_00414760(puVar3);
        _Memory = (void *)*puVar8;
        *puVar8 = local_10;
        puVar8[1] = local_c;
        puVar8[2] = local_8;
        FID_conflict__free(_Memory);
      }
      FID_conflict__free(local_1c[0]);
      FUN_005130b0();
      *(undefined1 *)(in_ECX + 0xb9) = 0;
      FUN_00515db0(0);
      return;
    }
    FUN_00513680(&local_38,uVar7);
    if (local_38 < *(uint *)(in_ECX + 0x140)) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x138) + local_38 * 4);
    }
    else {
      iVar1 = 0;
    }
    if (((*(char *)(iVar1 + 0x7b8) == '\0') && (*(char *)(iVar1 + 0x7bb) == '\0')) &&
       ((*(char *)(iVar1 + 0x7ba) != '\0' || (*(char *)(iVar1 + 0x7b9) != '\0')))) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    if (*(char *)(iVar1 + 0x7b8) == '\0') {
      uVar10 = *(undefined4 *)(iVar1 + 0x7c0);
      fVar9 = *(float *)(iVar1 + 0x7bc);
    }
    else {
      uVar10 = 0;
      fVar9 = 0.0;
    }
    iVar1 = *(int *)(in_ECX + 0xb0);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 8);
      if ((iVar2 != 0) && ((int)uVar7 < (int)*(uint *)(iVar2 + 0x5c))) {
        if (*(uint *)(iVar2 + 0x5c) <= uVar7) goto LAB_0050cdd3;
        iVar2 = *(int *)(*(int *)(iVar2 + 0x54) + uVar7 * 4);
        goto LAB_0050cdd5;
      }
LAB_0050cdf0:
      if (*(int *)(iVar1 + 0xc) != 0) {
        *(float *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x5c) + 0xc + iVar6) = fVar9;
        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x5c) + 0x14 + iVar6) = uVar10;
        *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x5c) + 0x10 + iVar6) = uVar5;
      }
    }
    else {
      if ((int)*(uint *)(iVar2 + 0x4bc) <= (int)uVar7) goto LAB_0050cdf0;
      if (uVar7 < *(uint *)(iVar2 + 0x4bc)) {
        iVar2 = *(int *)(*(int *)(iVar2 + 0x4b4) + uVar7 * 4);
      }
      else {
LAB_0050cdd3:
        iVar2 = 0;
      }
LAB_0050cdd5:
      if (iVar2 == 0) goto LAB_0050cdf0;
      if (fVar9 <= -64.0) {
        fVar9 = -64.0;
      }
      *(undefined4 *)(iVar2 + 0x30) = uVar10;
      *(undefined1 *)(iVar2 + 0x34) = uVar5;
      *(float *)(iVar2 + 0x2c) = fVar9;
    }
    piVar4 = (int *)(local_2c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_34 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    uVar7 = uVar7 + 1;
    iVar6 = iVar6 + 0x18;
  } while( true );
}

