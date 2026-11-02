// rea decompile_all
// name: FUN_005e8da0
// address: 0x5e8da0
// body: available
// range: 0x5e8da0-0x5e925a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e8da0(int param_1)

{
  int *piVar1;
  undefined4 *_Memory;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_ECX;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_EDX;
  int local_1c;
  int local_18;
  int local_14;
  
  piVar1 = *(int **)(in_EDX + 0x1c);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  _memset(in_ECX,0,0x70);
  iVar2 = FUN_004c5556(1,0x88);
  iVar6 = 0;
  in_ECX[0x1a] = iVar2;
  in_ECX[1] = in_EDX;
  if (piVar1[2] != 0) {
    for (uVar3 = piVar1[2] - 1; uVar3 != 0; uVar3 = uVar3 >> 1) {
      iVar6 = iVar6 + 1;
    }
  }
  *(int *)(iVar2 + 0x2c) = iVar6;
  uVar4 = FUN_004c5556(1,4);
  *(undefined4 *)(iVar2 + 0xc) = uVar4;
  uVar4 = FUN_004c5556(1,4);
  *(undefined4 *)(iVar2 + 0x10) = uVar4;
  uVar4 = FUN_004c5556(1,0x14);
  **(undefined4 **)(iVar2 + 0xc) = uVar4;
  uVar4 = FUN_004c5556(1,0x14);
  **(undefined4 **)(iVar2 + 0x10) = uVar4;
  FUN_005dfe60();
  FUN_005dfe60();
  iVar6 = 0;
  if (*piVar1 != 0) {
    for (uVar3 = *piVar1 - 1; uVar3 != 0; uVar3 = uVar3 >> 1) {
      iVar6 = iVar6 + 1;
    }
  }
  iVar7 = 0;
  *(int *)(iVar2 + 4) = iVar6 + -6;
  if (piVar1[1] != 0) {
    for (uVar3 = piVar1[1] - 1; uVar3 != 0; uVar3 = uVar3 >> 1) {
      iVar7 = iVar7 + 1;
    }
  }
  *(int *)(iVar2 + 8) = iVar7 + -6;
  if (param_1 == 0) {
    if (piVar1[0x2c8] == 0) {
      iVar6 = FUN_004c5556(piVar1[6],0x38);
      piVar1[0x2c8] = iVar6;
      local_1c = 0;
      if (0 < piVar1[6]) {
        piVar8 = piVar1 + 0x1c8;
        piVar5 = piVar8;
        do {
          if ((*piVar5 == 0) || (iVar6 = FUN_005d8c80(), iVar6 != 0)) {
            local_1c = 0;
            if (0 < piVar1[6]) {
              do {
                _Memory = (undefined4 *)*piVar8;
                if (_Memory != (undefined4 *)0x0) {
                  if (_Memory[9] != 0) {
                    if ((void *)_Memory[8] != (void *)0x0) {
                      FID_conflict__free((void *)_Memory[8]);
                    }
                    if ((void *)_Memory[2] != (void *)0x0) {
                      FID_conflict__free((void *)_Memory[2]);
                    }
                    *_Memory = 0;
                    _Memory[1] = 0;
                    _Memory[2] = 0;
                    _Memory[3] = 0;
                    _Memory[4] = 0;
                    _Memory[5] = 0;
                    _Memory[6] = 0;
                    _Memory[7] = 0;
                    *(undefined8 *)(_Memory + 8) = 0;
                    FID_conflict__free(_Memory);
                  }
                  *piVar8 = 0;
                }
                local_1c = local_1c + 1;
                piVar8 = piVar8 + 1;
              } while (local_1c < piVar1[6]);
            }
            FUN_005e8a50();
            return 0xffffffff;
          }
          FUN_005d9480();
          local_1c = local_1c + 1;
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        } while (local_1c < piVar1[6]);
      }
    }
  }
  else {
    iVar6 = *piVar1;
    *(int *)(iVar2 + 0x14) = iVar6;
    uVar4 = FUN_004c5556(iVar6 * 3,4);
    *(undefined4 *)(iVar2 + 0x18) = uVar4;
    uVar4 = FUN_004c5556(0x20,4);
    *(undefined4 *)(iVar2 + 0x1c) = uVar4;
    if (iVar6 != 1) {
      FUN_005d8a70(uVar4);
    }
    iVar6 = piVar1[1];
    *(int *)(iVar2 + 0x20) = iVar6;
    uVar4 = FUN_004c5556(iVar6 * 3,4);
    *(undefined4 *)(iVar2 + 0x24) = uVar4;
    uVar4 = FUN_004c5556(0x20,4);
    *(undefined4 *)(iVar2 + 0x28) = uVar4;
    if (iVar6 != 1) {
      FUN_005d8a70(uVar4);
    }
    if (piVar1[0x2c8] == 0) {
      iVar6 = FUN_004c5556(piVar1[6],0x38);
      piVar1[0x2c8] = iVar6;
      local_14 = 0;
      if (0 < piVar1[6]) {
        do {
          FUN_005d92e0();
          local_14 = local_14 + 1;
        } while (local_14 < piVar1[6]);
      }
    }
    uVar4 = FUN_004c5556(piVar1[7],0x34);
    *(undefined4 *)(iVar2 + 0x38) = uVar4;
    local_18 = 0;
    if (0 < piVar1[7]) {
      piVar8 = piVar1 + 0x2c9;
      do {
        FUN_005dd7c0(piVar1 + 0x2cd,piVar1[*(int *)*piVar8] / 2,*(undefined4 *)(in_EDX + 8));
        local_18 = local_18 + 1;
        piVar8 = piVar8 + 1;
      } while (local_18 < piVar1[7]);
    }
    *in_ECX = 1;
  }
  in_ECX[4] = piVar1[1];
  uVar4 = FUN_004c554b(*(int *)(in_EDX + 4) << 2);
  in_ECX[2] = uVar4;
  uVar4 = FUN_004c554b(*(int *)(in_EDX + 4) << 2);
  in_ECX[3] = uVar4;
  if (0 < *(int *)(in_EDX + 4)) {
    iVar6 = 0;
    do {
      uVar4 = FUN_004c5556(in_ECX[4],4);
      *(undefined4 *)(in_ECX[2] + iVar6 * 4) = uVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_EDX + 4));
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  iVar6 = piVar1[1];
  in_ECX[0xc] = iVar6 / 2;
  in_ECX[5] = iVar6 / 2;
  uVar4 = FUN_004c5556(piVar1[4],4);
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
  uVar4 = FUN_004c5556(piVar1[5],4);
  *(undefined4 *)(iVar2 + 0x34) = uVar4;
  local_1c = 0;
  if (0 < piVar1[4]) {
    piVar8 = piVar1 + 200;
    do {
      uVar4 = (**(code **)((&PTR_DAT_00b9c314)[*piVar8] + 8))(in_ECX,piVar8[0x40]);
      *(undefined4 *)((int)piVar8 + *(int *)(iVar2 + 0x30) + (-800 - (int)piVar1)) = uVar4;
      local_1c = local_1c + 1;
      piVar8 = piVar8 + 1;
    } while (local_1c < piVar1[4]);
  }
  local_1c = 0;
  if (0 < piVar1[5]) {
    piVar8 = piVar1 + 0x148;
    do {
      uVar4 = (**(code **)((&PTR_DAT_00b16a2c)[*piVar8] + 8))(in_ECX,piVar8[0x40]);
      *(undefined4 *)((int)piVar8 + *(int *)(iVar2 + 0x34) + (-0x520 - (int)piVar1)) = uVar4;
      local_1c = local_1c + 1;
      piVar8 = piVar8 + 1;
    } while (local_1c < piVar1[5]);
  }
  return 0;
}

