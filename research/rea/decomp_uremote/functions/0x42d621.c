// rea decompile_all
// name: FUN_0042d621
// address: 0x42d621
// body: available
// range: 0x42d621-0x42d9c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042d621(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  ushort local_2a;
  int local_28;
  ushort local_24;
  short local_22;
  ushort local_20;
  short local_1e;
  ushort local_1c;
  ushort local_1a;
  uint local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x68);
  local_14 = *(undefined4 *)(param_1 + 100);
  local_c = uVar5;
  if (*(int *)(param_1 + 0x2c8) == 0) {
    local_8 = (**(code **)(param_1 + 0x1fc))(param_1,0x67766172,uVar5,&local_18);
    if (local_8 != 0) {
      return local_8;
    }
    local_8 = (**(code **)(param_1 + 0x1fc))(param_1,0x66766172,uVar5,&local_18);
    if (local_8 != 0) {
      return local_8;
    }
    local_10 = FUN_004d021d();
    local_8 = FUN_00411560(uVar5,&local_28);
    if (local_8 != 0) {
      return local_8;
    }
    if ((((local_28 == 0x10000) && (local_22 == 2)) && (local_1e == 0x14)) && (local_20 < 0x3fff)) {
      if ((((uint)local_1a == (uint)local_20 * 4 + 4) && (local_1c < 0x7f00)) &&
         ((uint)local_1c * (uint)local_1a + (uint)local_20 * 0x14 + (uint)local_24 <= local_18)) {
        iVar1 = FUN_00411912(0x28,&local_8);
        *(int *)(param_1 + 0x2c8) = iVar1;
        if (local_8 != 0) {
          return local_8;
        }
        *(uint *)(iVar1 + 0xc) =
             ((uint)local_1c * 4 + 0x1d) * (uint)local_20 + 0x14 + (uint)local_1c * 8;
        puVar2 = (uint *)FUN_00411912(*(undefined4 *)(*(int *)(param_1 + 0x2c8) + 0xc),&local_8);
        iVar1 = 0;
        if (local_8 != 0) {
          return local_8;
        }
        *(uint **)(*(int *)(param_1 + 0x2c8) + 8) = puVar2;
        puVar2[1] = 0xffffffff;
        *puVar2 = (uint)local_20;
        puVar2[2] = (uint)local_1c;
        puVar3 = puVar2 + 5;
        puVar2[3] = (uint)puVar3;
        puVar2[4] = (uint)(puVar3 + (uint)local_20 * 6);
        puVar3 = puVar3 + (uint)local_20 * 6 + (uint)local_1c * 2;
        if (local_1c != 0) {
          do {
            *(uint **)(puVar2[4] + iVar1 * 8) = puVar3;
            puVar3 = puVar3 + local_20;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)(uint)local_1c);
        }
        iVar1 = 0;
        iVar7 = 0;
        if (local_20 != 0) {
          do {
            *(uint **)(iVar1 + puVar2[3]) = puVar3;
            puVar3 = (uint *)((int)puVar3 + 5);
            iVar7 = iVar7 + 1;
            iVar1 = iVar1 + 0x18;
          } while (iVar7 < (int)(uint)local_20);
        }
        iVar1 = FUN_0041106d();
        if (iVar1 != 0) {
          return iVar1;
        }
        piVar8 = (int *)puVar2[3];
        iVar1 = 0;
        if (local_20 != 0) {
          do {
            local_8 = 0;
            iVar7 = FUN_00411560(local_c,&local_3c);
            if (iVar7 != 0) {
              return iVar7;
            }
            piVar8[1] = local_38;
            piVar8[2] = local_34;
            piVar8[3] = local_30;
            piVar8[4] = local_3c;
            piVar8[5] = (uint)local_2a;
            *(char *)*piVar8 = (char)((uint)local_3c >> 0x18);
            *(undefined1 *)(*piVar8 + 1) = *(undefined1 *)((int)piVar8 + 0x12);
            *(undefined1 *)(*piVar8 + 2) = *(undefined1 *)((int)piVar8 + 0x11);
            *(char *)(*piVar8 + 3) = (char)piVar8[4];
            *(undefined1 *)(*piVar8 + 4) = 0;
            piVar8 = piVar8 + 6;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)(uint)local_20);
        }
        local_8 = 0;
        local_10 = 0;
        piVar8 = (int *)puVar2[4];
        if (local_1c != 0) {
          do {
            local_8 = FUN_004111b5();
            if (local_8 != 0) {
              return local_8;
            }
            uVar4 = FUN_00411277();
            piVar8[1] = uVar4 & 0xffff;
            FUN_00411277();
            iVar1 = 0;
            if (local_20 != 0) {
              do {
                uVar5 = FUN_004112c7();
                *(undefined4 *)(*piVar8 + iVar1 * 4) = uVar5;
                iVar1 = iVar1 + 1;
              } while (iVar1 < (int)(uint)local_20);
            }
            FUN_00411249();
            local_10 = local_10 + 1;
            piVar8 = piVar8 + 2;
          } while (local_10 < (int)(uint)local_1c);
        }
        goto LAB_0042d8ed;
      }
    }
    local_8 = 8;
  }
  else {
LAB_0042d8ed:
    if ((param_2 != (undefined4 *)0x0) &&
       (puVar2 = (uint *)FUN_00411912(*(undefined4 *)(*(int *)(param_1 + 0x2c8) + 0xc),&local_8),
       local_8 == 0)) {
      _memcpy(puVar2,*(void **)(*(int *)(param_1 + 0x2c8) + 8),
              *(size_t *)(*(int *)(param_1 + 0x2c8) + 0xc));
      puVar3 = puVar2 + 5;
      puVar2[3] = (uint)puVar3;
      uVar4 = 0;
      puVar2[4] = (uint)(puVar3 + *puVar2 * 6);
      puVar3 = puVar3 + *puVar2 * 6 + puVar2[2] * 2;
      if (puVar2[2] != 0) {
        do {
          *(uint **)(puVar2[4] + uVar4 * 8) = puVar3;
          uVar4 = uVar4 + 1;
          puVar3 = puVar3 + *puVar2;
        } while (uVar4 < puVar2[2]);
      }
      puVar6 = (undefined4 *)puVar2[3];
      uVar4 = 0;
      if (*puVar2 != 0) {
        do {
          iVar1 = puVar6[4];
          *puVar6 = puVar3;
          if (iVar1 == 0x77676874) {
            *puVar6 = "Weight";
          }
          else if (iVar1 == 0x77647468) {
            *puVar6 = "Width";
          }
          else if (iVar1 == 0x6f70737a) {
            *puVar6 = "OpticalSize";
          }
          else if (iVar1 == 0x736c6e74) {
            *puVar6 = "Slant";
          }
          puVar3 = (uint *)((int)puVar3 + 5);
          puVar6 = puVar6 + 6;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar2);
      }
      *param_2 = puVar2;
    }
  }
  return local_8;
}

