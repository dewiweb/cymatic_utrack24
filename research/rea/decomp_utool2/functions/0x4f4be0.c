// rea decompile_all
// name: FUN_004f4be0
// address: 0x4f4be0
// body: available
// range: 0x4f4be0-0x4f4f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004f4c82) */

void FUN_004f4be0(void)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  int local_48;
  int local_28;
  uint local_24;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070605a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 0x878);
  bVar10 = false;
  FUN_0040f710();
  if (*(int *)(in_ECX + 0x87c) != 0) {
    local_48 = 0x4f4c2b;
    FID_conflict__free((void *)*piVar1);
    *piVar1 = 0;
    *(undefined4 *)(in_ECX + 0x87c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x880) = 0;
  local_8 = 0;
  local_48 = *(int *)(in_ECX + 0x874) * 4 >> 2;
  uStack_4c = 0x4f4c63;
  FUN_0040f830();
  local_8 = 0xffffffff;
  if (*(int *)(in_ECX + 0x874) == 0) {
LAB_004f4ccb:
    bVar2 = true;
  }
  else {
    local_48 = 0x4f4c8d;
    piVar3 = (int *)FUN_00636040();
    bVar10 = true;
    if (*(int *)(in_ECX + 0x874) == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)**(undefined4 **)(in_ECX + 0x86c);
    }
    if (*piVar8 != *piVar3) {
      local_48 = *piVar8;
      uStack_4c = 0x4f4cbe;
      iVar4 = FUN_0045c1e0();
      if (iVar4 != 0) goto LAB_004f4ccb;
    }
    bVar2 = false;
  }
  if ((bVar10) && (piVar3 = (int *)(local_28 + -8), piVar3 != &DAT_00bfe124)) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_48 = 0x4f4cf5;
      FID_conflict__free(piVar3);
    }
  }
  if (bVar2) {
    local_48 = 0x4f4d05;
    puVar5 = operator_new(8);
    *puVar5 = 0;
    puVar5[1] = 0xffffffff;
    if (*(int *)(in_ECX + 0x87c) < *(int *)(in_ECX + 0x880) + 1) {
      local_48 = 0x4f4d3a;
      FUN_00409cf0();
    }
    iVar4 = *(int *)(in_ECX + 0x880);
    *(int *)(in_ECX + 0x880) = iVar4 + 1;
    *(undefined4 **)(*piVar1 + iVar4 * 4) = puVar5;
  }
  local_24 = 0;
  if (0 < *(int *)(in_ECX + 0x874)) {
    bVar10 = *(int *)(in_ECX + 0x874) != 0;
    do {
      if (bVar10) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x86c) + local_24 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (((*(int *)(iVar4 + 4) == 0) ||
          (iVar6 = *(int *)(*(int *)(iVar4 + 4) + 0x20), iVar6 == 0x10)) || (iVar6 == 0x18)) {
        local_48 = 0x4f4d93;
        piVar3 = operator_new(8);
        *piVar3 = iVar4;
        piVar3[1] = -1;
        iVar6 = *(int *)(in_ECX + 0x880);
        iVar7 = iVar6 + 1;
        if ((int)*(uint *)(in_ECX + 0x87c) < iVar7) {
          if (iVar7 < 0) {
            iVar7 = iVar6 + 2;
          }
          uVar9 = iVar6 + 9 + (iVar7 >> 1) & 0xfffffff8;
          if (*(uint *)(in_ECX + 0x87c) != uVar9) {
            if ((int)uVar9 < 1) {
              local_48 = 0x4f4df6;
              FID_conflict__free((void *)*piVar1);
              *piVar1 = 0;
            }
            else {
              local_48 = *piVar1;
              if (local_48 == 0) {
                local_48 = 0x4f4ddb;
                iVar6 = FUN_004c554b();
                *piVar1 = iVar6;
              }
              else {
                uStack_4c = 0x4f4de8;
                iVar6 = FUN_004c553b();
                *piVar1 = iVar6;
              }
            }
            *(uint *)(in_ECX + 0x87c) = uVar9;
          }
        }
        iVar6 = *(int *)(in_ECX + 0x880);
        *(int *)(in_ECX + 0x880) = iVar6 + 1;
        *(int **)(*piVar1 + iVar6 * 4) = piVar3;
        if ((*(char *)(iVar4 + 8) != '\0') &&
           (local_1c = 0, 0 < *(int *)(*(int *)(iVar4 + 4) + 0x24))) {
          do {
            local_48 = 0x4f4e38;
            piVar3 = operator_new(8);
            *piVar3 = iVar4;
            piVar3[1] = local_1c;
            iVar6 = *(int *)(in_ECX + 0x880);
            iVar7 = iVar6 + 1;
            if ((int)*(uint *)(in_ECX + 0x87c) < iVar7) {
              if (iVar7 < 0) {
                iVar7 = iVar6 + 2;
              }
              uVar9 = iVar6 + 9 + (iVar7 >> 1) & 0xfffffff8;
              if (*(uint *)(in_ECX + 0x87c) != uVar9) {
                if ((int)uVar9 < 1) {
                  local_48 = 0x4f4e9c;
                  FID_conflict__free((void *)*piVar1);
                  *piVar1 = 0;
                }
                else {
                  local_48 = *piVar1;
                  if (local_48 == 0) {
                    local_48 = 0x4f4e81;
                    iVar6 = FUN_004c554b();
                    *piVar1 = iVar6;
                  }
                  else {
                    uStack_4c = 0x4f4e8e;
                    iVar6 = FUN_004c553b();
                    *piVar1 = iVar6;
                  }
                }
                *(uint *)(in_ECX + 0x87c) = uVar9;
              }
            }
            iVar6 = *(int *)(in_ECX + 0x880);
            local_1c = local_1c + 1;
            *(int *)(in_ECX + 0x880) = iVar6 + 1;
            *(int **)(*piVar1 + iVar6 * 4) = piVar3;
          } while (local_1c < *(int *)(*(int *)(iVar4 + 4) + 0x24));
        }
      }
      local_24 = local_24 + 1;
      bVar10 = local_24 < *(uint *)(in_ECX + 0x874);
    } while ((int)local_24 < (int)*(uint *)(in_ECX + 0x874));
  }
  if ((*(int *)(in_ECX + 500) == 0) && (*(int *)(in_ECX + 500) != *(int *)(in_ECX + 0x7c))) {
    *(int *)(in_ECX + 500) = *(int *)(in_ECX + 0x7c);
    FUN_006e6400(auStack_50);
    FUN_006ce9f0(1);
    FUN_006e7e60();
  }
  FUN_006e7e60();
  FUN_006e6400(auStack_50);
  FUN_006ce9f0(1);
  ExceptionList = local_10;
  return;
}

