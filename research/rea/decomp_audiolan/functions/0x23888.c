// rea decompile_all
// name: FUN_00023888
// address: 0x23888
// body: available
// range: 0x23888-0x23b1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00023888(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 *local_34;
  
  FUN_000209c2(*(undefined4 *)(param_3 + 0x20));
  iVar1 = FUN_0016dc78();
  iVar8 = *(int *)(param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 0x20);
  for (local_34 = *(undefined4 **)(iVar1 * 4 + param_2 + 0x14); local_34 != (undefined4 *)0x0;
      local_34 = (undefined4 *)*local_34) {
    if ((local_34[1] == iVar8) && (iVar2 = FUN_0003b48a(local_34[4],uVar5), iVar2 != 0)) {
      if (local_34 != (undefined4 *)0x0) goto LAB_00023aec;
      break;
    }
  }
  uVar3 = FUN_00020a0a(*(int *)(param_3 + 0x20),*(int *)(param_3 + 0x20) + 0x100);
  local_34 = (undefined4 *)0x0;
  if (*(char *)(param_2 + 0xc) == '\0') {
    *(undefined1 *)(param_2 + 0xc) = 1;
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar4 = (undefined4 *)FUN_001952a0(0x9c);
      *puVar4 = 0;
      *(undefined4 **)(param_2 + 0x10) = puVar4;
      if (puVar4 != (undefined4 *)0x0) goto LAB_000239a0;
      iVar8 = *(int *)(param_2 + 4);
      uVar9 = 0;
      do {
        piVar6 = (int *)(uVar9 * 4 + param_2 + 0x14);
        for (piVar7 = (int *)*piVar6; piVar7 != (int *)0x0; piVar7 = (int *)*piVar7) {
          if ((piVar7[2] == 0) && (piVar7 != (int *)0x0)) {
            FUN_00024642(0,s_ReleaseAuthGroup__Releasing_Auth_00023b4c,piVar7[4]);
            if (*(int *)(*piVar6 + 0xc) != *piVar6 + 8) {
              FUN_00024642(0,DAT_00023b78);
            }
            if (*(int *)(*piVar6 + 0x10) != *piVar6 + 0x18) {
              FUN_00195340();
            }
            *(undefined4 *)(*piVar6 + 0x10) = 0;
            *piVar6 = *(int *)*piVar6;
            *piVar7 = *(undefined4 *)(param_2 + 0x10);
            *(int **)(param_2 + 0x10) = piVar7;
            *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
            piVar7 = piVar6;
          }
          piVar6 = piVar7;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 499);
      if (*DAT_00023b7c != 0) {
        FUN_00024642(3,_DAT_00023b80,iVar8 - *(int *)(param_2 + 4),iVar8,*(int *)(param_2 + 4));
      }
      if (*(int *)(param_2 + 0x10) != 0) goto LAB_000239a0;
    }
    else {
LAB_000239a0:
      local_34 = *(undefined4 **)(param_2 + 0x10);
      *(undefined4 *)(param_2 + 0x10) = *local_34;
      uVar9 = *(int *)(param_2 + 4) + 1;
      *(uint *)(param_2 + 4) = uVar9;
      if (*(uint *)(param_2 + 8) <= uVar9) {
        if (*DAT_00023b7c != 0) {
          FUN_00024642(3,s___RR_Auth_now_using__ld_objects_00023b82 + 2);
        }
        uVar9 = *(uint *)(param_2 + 8);
        if (uVar9 < 100) {
          iVar8 = uVar9 + 10;
        }
        else {
          if (999 < uVar9) {
            *(uint *)(param_2 + 8) = uVar9 + 1000;
            goto LAB_000239e0;
          }
          iVar8 = uVar9 + 100;
        }
        *(int *)(param_2 + 8) = iVar8;
      }
LAB_000239e0:
      FUN_001953c4(local_34,0x9c);
    }
    *(undefined1 *)(param_2 + 0xc) = 0;
    if (local_34 != (undefined4 *)0x0) {
      iVar1 = iVar1 * 4 + param_2;
      *local_34 = *(undefined4 *)(iVar1 + 0x14);
      uVar5 = *(undefined4 *)(param_3 + 0x14);
      local_34[2] = 0;
      local_34[1] = uVar5;
      local_34[3] = local_34 + 2;
      local_34[5] = 0;
      local_34[4] = local_34 + 6;
      if (uVar3 < 0x85) {
        iVar8 = local_34[4];
      }
      else {
        iVar8 = FUN_001952a0();
        local_34[4] = iVar8;
      }
      if (iVar8 == 0) {
        FUN_00024642(0,s_GetAuthGroup__Failed_to_allocate_00023bd8,*(undefined4 *)(param_3 + 0x20));
        *local_34 = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 **)(param_2 + 0x10) = local_34;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
        return (undefined4 *)0x0;
      }
      uVar3 = FUN_00020a0a(*(int *)(param_3 + 0x20),*(int *)(param_3 + 0x20) + 0x100);
      if (uVar3 < 0x101) {
        FUN_001952f0(local_34[4],*(undefined4 *)(param_3 + 0x20),uVar3);
      }
      else {
        *(undefined1 *)local_34[4] = 0;
      }
      iVar8 = *(int *)(param_3 + 0x14);
      uVar5 = *(undefined4 *)(param_3 + 0x20);
      for (piVar6 = *(int **)(iVar1 + 0x14); piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
        if ((piVar6[1] == iVar8) && (iVar2 = FUN_0003b48a(piVar6[4],uVar5), iVar2 != 0)) {
          if (piVar6 != (int *)0x0) {
            FUN_00024642(0,s_GetAuthGroup__Already_have_AuthG_00023c10,
                         *(undefined4 *)(param_3 + 0x20));
          }
          break;
        }
      }
      *(undefined4 **)(iVar1 + 0x14) = local_34;
      iVar8 = *(int *)(param_3 + 0x14);
      uVar5 = *(undefined4 *)(param_3 + 0x20);
      puVar4 = *(undefined4 **)(iVar1 + 0x14);
      if (puVar4 != (undefined4 *)0x0) {
        do {
          if ((puVar4[1] == iVar8) && (iVar1 = FUN_0003b48a(puVar4[4],uVar5), iVar1 != 0)) break;
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
        if (puVar4 != local_34) {
          FUN_00024642(0,s_GetAuthGroup__Not_finding_AuthGr_00023c40,*(undefined4 *)(param_3 + 0x20)
                      );
        }
      }
      goto LAB_00023ae8;
    }
  }
  else {
    FUN_00024642(0,s_GetFreeCacheRR_ERROR__Cache_alre_00023b20);
  }
  FUN_00024642(0,s_GetAuthGroup__Failed_to_allocate_00023ba4,*(undefined4 *)(param_3 + 0x20));
  local_34 = (undefined4 *)0x0;
LAB_00023ae8:
  if (local_34 != (undefined4 *)0x0) {
LAB_00023aec:
    if (*DAT_00023b7c != 0) {
      uVar5 = FUN_0002272c(param_3 + 4,*(int *)(param_3 + 0x24) + 4,param_1 + 0x37);
      FUN_00024642(3,s_InsertAuthRecord__inserting_auth_00023c70,uVar5);
    }
    *(int *)local_34[3] = param_3;
    local_34[3] = param_3;
  }
  return local_34;
}

