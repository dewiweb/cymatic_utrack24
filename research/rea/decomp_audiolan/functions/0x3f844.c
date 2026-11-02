// rea decompile_all
// name: FUN_0003f844
// address: 0x3f844
// body: available
// range: 0x3f844-0x3f9cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0003f844(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  int local_60 [2];
  int *local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  
  local_34 = -1;
  uVar7 = 0;
  local_2c = (byte *)(param_2 + 0x130);
  local_38 = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_28 = FUN_0001eb78();
  pbVar5 = local_2c;
  local_30 = local_18 + 0xc0;
  uVar3 = *DAT_0003f9cc;
  *(undefined4 *)(local_18 + 0xd0) = DAT_0003f9cc[1];
  *(undefined4 *)(local_18 + 0xcc) = uVar3;
  local_60[0] = *(int *)(DAT_0003f9d0 + 0x50);
  local_60[1] = *(int *)(DAT_0003f9d0 + 0x54);
  local_58 = *(int **)(DAT_0003f9d0 + 0x58);
  uStack_54 = *(undefined4 *)(DAT_0003f9d0 + 0x5c);
  local_4c = *(undefined4 *)(DAT_0003f9d0 + 100);
  local_50 = *(undefined4 *)(DAT_0003f9d0 + 0x60);
  iVar4 = 0;
  iVar1 = FUN_0001eb78();
  if (3 < iVar1) {
    if (local_60[0] == 0) {
LAB_0003f8a6:
      if (local_60[iVar4] != 0) {
        pbVar5 = pbVar5 + *pbVar5 + 1;
        iVar1 = FUN_0003b438(pbVar5,DAT_0003f9d4);
        local_24 = 0;
        if (iVar1 != 0) {
          iVar1 = FUN_0003b438(pbVar5 + *pbVar5 + 1,DAT_0003f9d8);
          local_24 = 0;
          if (iVar1 != 0) {
            local_24 = 1;
          }
        }
        goto LAB_0003f8d2;
      }
    }
    else {
      do {
        iVar1 = FUN_0003b438(local_60[iVar4],pbVar5);
        if (iVar1 != 0) goto LAB_0003f8a6;
        iVar4 = iVar4 + 1;
      } while (local_60[iVar4] != 0);
    }
  }
  local_24 = 0;
LAB_0003f8d2:
  piVar6 = *(int **)(&DAT_00001fe4 + local_1c);
  if (piVar6 == (int *)0x0) {
    *(undefined2 *)(local_30 + 0x14) = 0;
  }
  else {
    local_48 = local_18 + 0x100;
    do {
      if (((piVar6[8] & 1U) == 0) && ((piVar6[0x4c] == 0 || (piVar6[1] != *DAT_0003f9dc)))) {
        piVar2 = piVar6 + 0xb;
        iVar1 = FUN_0001eb78();
        local_44 = iVar1;
        if (((local_24 == 0) || (piVar6[0x4e] == 0)) &&
           ((((piVar6[0x4c] == 0 &&
              ((*(int *)(local_48 + 0x14) == 0 || (*(int *)(local_48 + 0x14) == *DAT_0003f9e0)))) ||
             (piVar6[1] == *(int *)(local_48 + 0x14))) &&
            ((local_60[1] = local_34, local_58 = piVar2, iVar1 <= local_28 && (local_34 <= iVar1))))
           )) {
          uVar3 = thunk_FUN_0003fc2c(local_2c,local_28 - iVar1);
          iVar4 = FUN_0003b48a(uVar3,local_58);
          if (iVar4 != 0) {
            local_34 = local_44;
            if (local_60[1] != iVar1) {
              uVar3 = *DAT_0003f9cc;
              *(undefined4 *)(local_30 + 0x10) = DAT_0003f9cc[1];
              *(undefined4 *)(local_30 + 0xc) = uVar3;
              local_38 = 0;
            }
            local_38 = piVar6[0x4d] + local_38;
            iVar1 = (uVar7 >> 5) * 4 + local_18;
            *(uint *)(iVar1 + 0xcc) = *(uint *)(iVar1 + 0xcc) | 1 << (uVar7 & 0x1f);
          }
        }
        uVar7 = uVar7 + 1;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
    *(undefined2 *)(local_30 + 0x14) = 0;
    if (local_38 != 0) {
      return local_38;
    }
  }
  return 0x1e;
}

