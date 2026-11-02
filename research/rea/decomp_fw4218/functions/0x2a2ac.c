// rea decompile_all
// name: FUN_0002a2ac
// address: 0x2a2ac
// body: available
// range: 0x2a2ac-0x2a3b5 inclusive
// range: 0x2a3b8-0x2a4ab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0002a2ac(int param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10) + param_3 * 8;
  iVar2 = *(int *)(param_1 + 0x14);
  if (uVar1 < *(uint *)(param_1 + 0x10)) {
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 0x14) = iVar2;
  }
  *(uint *)(param_1 + 0x14) = iVar2 + (param_3 >> 0x1d);
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar1 = *(uint *)(param_1 + 0x58);
  puVar7 = (uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    iVar2 = (int)uVar1 >> 2;
    uVar5 = uVar1 & 3;
    uVar1 = uVar1 + param_3;
    if (uVar1 < 0x40) {
      *(uint *)(param_1 + 0x58) = uVar1;
      if (uVar5 + param_3 < 4) {
        uVar1 = puVar7[iVar2];
        if (uVar5 == 0) {
          uVar1 = (uint)(byte)*param_2;
          param_2 = (uint *)((int)param_2 + 1);
          param_3 = param_3 - 1;
          if (param_3 == 0) goto LAB_0002a3f8;
LAB_0002a3e6:
          uVar5 = *param_2;
          param_2 = (uint *)((int)param_2 + 1);
          uVar1 = uVar1 | (uint)(byte)uVar5 << 8;
          if (param_3 == 1) goto LAB_0002a3f8;
        }
        else {
          if (uVar5 == 1) goto LAB_0002a3e6;
          if (uVar5 != 2) goto LAB_0002a3f8;
        }
        uVar1 = uVar1 | (uint)(byte)*param_2 << 0x10;
LAB_0002a3f8:
        puVar7[iVar2] = uVar1;
        return 1;
      }
      uVar4 = uVar1 & 3;
      if (uVar5 == 0) {
        uVar6 = (uint)(byte)*param_2;
        param_2 = (uint *)((int)param_2 + 1);
LAB_0002a41c:
        uVar6 = uVar6 | (uint)(byte)*param_2 << 8;
        param_2 = (uint *)((int)param_2 + 1);
LAB_0002a424:
        uVar6 = uVar6 | (uint)(byte)*param_2 << 0x10;
        param_2 = (uint *)((int)param_2 + 1);
LAB_0002a42c:
        uVar6 = uVar6 | (uint)(byte)*param_2 << 0x18;
        param_2 = (uint *)((int)param_2 + 1);
      }
      else {
        uVar6 = puVar7[iVar2];
        if (uVar5 == 1) goto LAB_0002a41c;
        if (uVar5 == 2) goto LAB_0002a424;
        if (uVar5 == 3) goto LAB_0002a42c;
      }
      puVar7[iVar2] = uVar6;
      while (iVar2 = iVar2 + 1, iVar2 < (int)uVar1 >> 2) {
        uVar5 = *param_2;
        param_2 = param_2 + 1;
        puVar7[iVar2] = uVar5;
      }
      if (uVar4 == 0) {
        return 1;
      }
      uVar1 = 0;
      pbVar3 = (byte *)((int)param_2 + uVar4);
      if (uVar4 != 1) {
        if (uVar4 != 2) {
          if (uVar4 != 3) goto LAB_0002a48c;
          pbVar3 = pbVar3 + -1;
          uVar1 = (uint)*pbVar3 << 0x10;
        }
        pbVar3 = pbVar3 + -1;
        uVar1 = uVar1 | (uint)*pbVar3 << 8;
      }
      uVar1 = uVar1 | pbVar3[-1];
LAB_0002a48c:
      puVar7[iVar2] = uVar1;
      return 1;
    }
    uVar1 = iVar2 * 4;
    uVar4 = puVar7[iVar2];
    if (uVar5 == 0) {
      uVar4 = (uint)(byte)*param_2;
      param_2 = (uint *)((int)param_2 + 1);
LAB_0002a304:
      uVar4 = uVar4 | (uint)(byte)*param_2 << 8;
      param_2 = (uint *)((int)param_2 + 1);
LAB_0002a30c:
      uVar4 = uVar4 | (uint)(byte)*param_2 << 0x10;
      param_2 = (uint *)((int)param_2 + 1);
LAB_0002a314:
      uVar4 = uVar4 | (uint)(byte)*param_2 << 0x18;
      param_2 = (uint *)((int)param_2 + 1);
    }
    else {
      if (uVar5 == 1) goto LAB_0002a304;
      if (uVar5 == 2) goto LAB_0002a30c;
      if (uVar5 == 3) goto LAB_0002a314;
    }
    puVar7[iVar2] = uVar4;
    while (iVar2 = iVar2 + 1, iVar2 < 0x10) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar7[iVar2] = uVar1;
    }
    FUN_001ec278(param_1,puVar7,1,uVar1,param_4);
    param_3 = param_3 - (0x40 - *(int *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  uVar1 = param_3 >> 6;
  if (uVar1 != 0) {
    FUN_001eb850(param_1,param_2,uVar1);
    param_2 = param_2 + uVar1 * 0x10;
    param_3 = param_3 + uVar1 * -0x40;
  }
  if (param_3 == 0) {
    return 1;
  }
  uVar1 = param_3 & 3;
  *(uint *)(param_1 + 0x58) = param_3;
  for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
    uVar5 = *param_2;
    param_2 = param_2 + 1;
    *puVar7 = uVar5;
    puVar7 = puVar7 + 1;
  }
  uVar5 = 0;
  pbVar3 = (byte *)((int)param_2 + uVar1);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      if (uVar1 != 3) goto LAB_0002a4a6;
      pbVar3 = pbVar3 + -1;
      uVar5 = (uint)*pbVar3 << 0x10;
    }
    pbVar3 = pbVar3 + -1;
    uVar5 = uVar5 | (uint)*pbVar3 << 8;
  }
  uVar5 = uVar5 | pbVar3[-1];
LAB_0002a4a6:
  *puVar7 = uVar5;
  return 1;
}

