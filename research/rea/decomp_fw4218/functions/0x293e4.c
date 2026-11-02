// rea decompile_all
// name: FUN_000293e4
// address: 0x293e4
// body: available
// range: 0x293e4-0x29679 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000293e4(int param_1,int param_2,int param_3)

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
  
  FUN_00025cca(*(undefined4 *)(param_3 + 0x20));
  iVar1 = FUN_001c6fe0();
  iVar8 = *(int *)(param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 0x20);
  for (local_34 = *(undefined4 **)(iVar1 * 4 + param_2 + 0x14); local_34 != (undefined4 *)0x0;
      local_34 = (undefined4 *)*local_34) {
    if ((local_34[1] == iVar8) && (iVar2 = FUN_000400ea(local_34[4],uVar5), iVar2 != 0)) {
      if (local_34 != (undefined4 *)0x0) goto LAB_00029648;
      break;
    }
  }
  uVar3 = FUN_00025d12(*(int *)(param_3 + 0x20),*(int *)(param_3 + 0x20) + 0x100);
  local_34 = (undefined4 *)0x0;
  if (*(char *)(param_2 + 0xc) == '\0') {
    *(undefined1 *)(param_2 + 0xc) = 1;
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar4 = (undefined4 *)FUN_001e5788(0x9c);
      *puVar4 = 0;
      *(undefined4 **)(param_2 + 0x10) = puVar4;
      if (puVar4 != (undefined4 *)0x0) goto LAB_000294fc;
      iVar8 = *(int *)(param_2 + 4);
      uVar9 = 0;
      do {
        piVar6 = (int *)(uVar9 * 4 + param_2 + 0x14);
        for (piVar7 = (int *)*piVar6; piVar7 != (int *)0x0; piVar7 = (int *)*piVar7) {
          if ((piVar7[2] == 0) && (piVar7 != (int *)0x0)) {
            FUN_0002a1c6(0,s_ReleaseAuthGroup__Releasing_Auth_000296a8,piVar7[4]);
            if (*(int *)(*piVar6 + 0xc) != *piVar6 + 8) {
              FUN_0002a1c6(0,DAT_000296d4);
            }
            if (*(int *)(*piVar6 + 0x10) != *piVar6 + 0x18) {
              FUN_001e5828();
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
      if (*DAT_000296d8 != 0) {
        FUN_0002a1c6(3,_DAT_000296dc,iVar8 - *(int *)(param_2 + 4),iVar8,*(int *)(param_2 + 4));
      }
      if (*(int *)(param_2 + 0x10) != 0) goto LAB_000294fc;
    }
    else {
LAB_000294fc:
      local_34 = *(undefined4 **)(param_2 + 0x10);
      *(undefined4 *)(param_2 + 0x10) = *local_34;
      uVar9 = *(int *)(param_2 + 4) + 1;
      *(uint *)(param_2 + 4) = uVar9;
      if (*(uint *)(param_2 + 8) <= uVar9) {
        if (*DAT_000296d8 != 0) {
          FUN_0002a1c6(3,s___RR_Auth_now_using__ld_objects_000296de + 2);
        }
        uVar9 = *(uint *)(param_2 + 8);
        if (uVar9 < 100) {
          iVar8 = uVar9 + 10;
        }
        else {
          if (999 < uVar9) {
            *(uint *)(param_2 + 8) = uVar9 + 1000;
            goto LAB_0002953c;
          }
          iVar8 = uVar9 + 100;
        }
        *(int *)(param_2 + 8) = iVar8;
      }
LAB_0002953c:
      FUN_001e58ac(local_34,0x9c);
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
        iVar8 = FUN_001e5788();
        local_34[4] = iVar8;
      }
      if (iVar8 == 0) {
        FUN_0002a1c6(0,s_GetAuthGroup__Failed_to_allocate_00029734,*(undefined4 *)(param_3 + 0x20));
        *local_34 = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 **)(param_2 + 0x10) = local_34;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
        return (undefined4 *)0x0;
      }
      uVar3 = FUN_00025d12(*(int *)(param_3 + 0x20),*(int *)(param_3 + 0x20) + 0x100);
      if (uVar3 < 0x101) {
        FUN_001e57d8(local_34[4],*(undefined4 *)(param_3 + 0x20),uVar3);
      }
      else {
        *(undefined1 *)local_34[4] = 0;
      }
      iVar8 = *(int *)(param_3 + 0x14);
      uVar5 = *(undefined4 *)(param_3 + 0x20);
      for (piVar6 = *(int **)(iVar1 + 0x14); piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
        if ((piVar6[1] == iVar8) && (iVar2 = FUN_000400ea(piVar6[4],uVar5), iVar2 != 0)) {
          if (piVar6 != (int *)0x0) {
            FUN_0002a1c6(0,s_GetAuthGroup__Already_have_AuthG_0002976c,
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
          if ((puVar4[1] == iVar8) && (iVar1 = FUN_000400ea(puVar4[4],uVar5), iVar1 != 0)) break;
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
        if (puVar4 != local_34) {
          FUN_0002a1c6(0,s_GetAuthGroup__Not_finding_AuthGr_0002979c,*(undefined4 *)(param_3 + 0x20)
                      );
        }
      }
      goto LAB_00029644;
    }
  }
  else {
    FUN_0002a1c6(0,s_GetFreeCacheRR_ERROR__Cache_alre_0002967c);
  }
  FUN_0002a1c6(0,s_GetAuthGroup__Failed_to_allocate_00029700,*(undefined4 *)(param_3 + 0x20));
  local_34 = (undefined4 *)0x0;
LAB_00029644:
  if (local_34 != (undefined4 *)0x0) {
LAB_00029648:
    if (*DAT_000296d8 != 0) {
      uVar5 = FUN_00028288(param_3 + 4,*(int *)(param_3 + 0x24) + 4,param_1 + 0x37);
      FUN_0002a1c6(3,s_InsertAuthRecord__inserting_auth_000297cc,uVar5);
    }
    *(int *)local_34[3] = param_3;
    local_34[3] = param_3;
  }
  return local_34;
}

