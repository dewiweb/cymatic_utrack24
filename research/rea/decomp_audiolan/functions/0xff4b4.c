// rea decompile_all
// name: FUN_000ff4b4
// address: 0xff4b4
// body: available
// range: 0xff4b4-0xff753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

uint FUN_000ff4b4(uint *param_1,undefined4 param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined1 auStack_54 [60];
  
  uVar10 = param_1[1];
  if (param_1[1] != 0) {
    do {
      uVar12 = FUN_0010f598(param_2,uVar10);
      iVar9 = (int)((ulonglong)uVar12 >> 0x20);
      iVar7 = (int)uVar12;
      if (0 < iVar7) {
        iVar9 = 1;
      }
      if (iVar7 < 0) {
        iVar9 = 0;
      }
      if (iVar7 == 0) {
        if (uVar10 != 0) {
          uVar8 = FUN_0017bfc0();
          *(undefined4 *)(uVar10 + 0x20) = uVar8;
          if (*(char *)(uVar10 + 0x1c) != '\0' && *(char *)(uVar10 + 0x1c) != '\x02') {
            return 0;
          }
          if (*(int *)(uVar10 + 0x18) == 0) {
            return 0;
          }
          return uVar10;
        }
        break;
      }
      uVar5 = *(uint *)(uVar10 + iVar9 * 4 + 0x2c);
      if (uVar5 == 0) break;
      bVar3 = 0;
      if (iVar9 != 0) {
        bVar3 = *(byte *)(uVar10 + 0x34);
      }
      uVar10 = uVar5;
    } while (iVar9 == 0 || (bVar3 & 0x80) == 0);
  }
  if ((*param_1 < 0x400) &&
     (puVar6 = (undefined4 *)FUN_0016d7a4(0x38,DAT_000ff754), puVar6 != (undefined4 *)0x0)) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    iVar7 = FUN_0010f638();
    iVar7 = FUN_0010f638(iVar7 + 0xc);
    iVar7 = iVar7 + -0xc;
  }
  else {
    uVar10 = param_1[1];
    if (uVar10 == 0) {
      return 0;
    }
    uVar5 = uVar10;
    iVar7 = *(int *)(uVar10 + 0x2c);
    while (uVar11 = uVar5, iVar7 != 0) {
      uVar5 = *(uint *)(uVar5 + 0x2c);
      iVar7 = *(int *)(uVar5 + 0x2c);
    }
    while (uVar11 != 0) {
      if ((*(uint *)(uVar11 + 0x20) < *(uint *)(uVar5 + 0x20)) &&
         (*(char *)(uVar11 + 0x1c) == '\0' || *(char *)(uVar11 + 0x1c) == '\x02')) {
        uVar5 = uVar11;
      }
      if (uVar11 == 0) {
        uVar11 = uVar10;
        iVar7 = *(int *)(uVar10 + 0x2c);
        if (uVar10 == 0) break;
        while (iVar7 != 0) {
          puVar2 = (uint *)(uVar11 + 0x2c);
          uVar11 = *puVar2;
          iVar7 = *(int *)(*puVar2 + 0x2c);
        }
      }
      else {
        pbVar1 = (byte *)(uVar11 + 0x34);
        uVar11 = *(uint *)(uVar11 + 0x30);
        uVar4 = uVar11;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            uVar11 = uVar4;
            if (uVar11 == 0) goto LAB_000ff674;
            uVar4 = *(uint *)(uVar11 + 0x2c);
          } while (*(uint *)(uVar11 + 0x2c) != 0);
        }
      }
    }
LAB_000ff674:
    if (uVar5 == 0) {
      return 0;
    }
    iVar7 = FUN_001bdad0(param_1,uVar5);
    if (iVar7 == 0) {
      return 0;
    }
  }
  *(undefined4 *)(iVar7 + 0x18) = 0;
  FUN_0010f650(iVar7,param_2);
  *(undefined1 *)(iVar7 + 0x1c) = 1;
  uVar8 = FUN_0017bfc0();
  *(undefined4 *)(iVar7 + 0x24) = uVar8;
  *(undefined4 *)(iVar7 + 0x20) = 0;
  *(undefined1 *)(iVar7 + 0x28) = 0;
  FUN_001bd888(param_1,iVar7);
  local_6c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_64 = 0;
  local_5e = 0;
  local_5c = 0;
  local_56 = 0;
  iVar7 = FUN_0010f718(auStack_54);
  *(undefined4 *)(iVar7 + 0x20) = 0;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined1 *)(iVar7 + 0x35) = 1;
  FUN_000ee880(iVar7 + -0x1c);
  FUN_000ee0d4(&local_70,0,param_2);
  (**(code **)(*(int *)param_1[5] + 0xc))((int *)param_1[5],&local_70);
  FUN_000ee880(&local_70);
  FUN_000e9f98(&local_5c);
  FUN_000e9f98(&local_64);
  return 0;
}

