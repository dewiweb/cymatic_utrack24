// rea decompile_all
// name: FUN_001194c4
// address: 0x1194c4
// body: available
// range: 0x1194c4-0x1196d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_001194c4(int *param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint extraout_r2;
  int extraout_r3;
  ushort uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar5 = DAT_001196d8;
  if (0x31 < (uint)(param_2 - param_1[3])) {
    uVar7 = param_1[4];
    uVar4 = param_3 - uVar7;
    param_1[3] = param_2;
    uVar1 = DAT_001196d8;
    uVar10 = param_4 - (param_1[5] + (uint)(param_3 < uVar7));
    uVar9 = 0;
    if (uVar10 != 0 || uVar10 < (uVar5 <= uVar4)) {
      iVar8 = uVar7 + DAT_001196d8;
      bVar11 = CARRY4(uVar4,-DAT_001196d8);
      uVar4 = uVar4 + -DAT_001196d8;
      param_1[5] = param_1[5] + (uint)CARRY4(uVar7,DAT_001196d8);
      uVar10 = uVar10 - !bVar11;
      param_1[4] = iVar8;
      if (uVar10 != 0 || uVar10 < (uVar1 <= uVar4)) {
        FUN_0000243c(param_3,param_4,uVar1,0,param_4);
        uVar5 = param_3 - extraout_r2;
        iVar8 = param_4 - (extraout_r3 + (uint)(param_3 < extraout_r2));
        param_1[4] = uVar5;
        param_1[5] = iVar8;
        uVar4 = param_3 - uVar5;
        uVar10 = param_4 - (iVar8 + (uint)(param_3 < uVar5));
      }
    }
    if (uVar10 == 0 && (DAT_001196dc <= uVar4) <= uVar10) {
      if (uVar10 != 0 || uVar10 < (DAT_001196e4 <= uVar4)) {
        uVar9 = 8;
      }
    }
    else {
      uVar9 = 0x10;
      if (uVar10 != 0 || uVar10 < (DAT_001196e0 <= uVar4)) {
        uVar9 = 0x18;
      }
    }
    if (uVar10 != 0 || uVar10 < (DAT_001196e8 <= uVar4)) {
      do {
        bVar11 = CARRY4(uVar4,DAT_001196ec);
        uVar4 = uVar4 + DAT_001196ec;
        uVar10 = uVar10 - !bVar11;
      } while (uVar10 != 0 || uVar10 < (-DAT_001196ec <= uVar4));
    }
    if (uVar10 != 0 || uVar10 < (DAT_001196f0 <= uVar4)) {
      uVar9 = uVar9 | 4;
      bVar11 = CARRY4(uVar4,DAT_001196f4);
      uVar4 = uVar4 + DAT_001196f4;
      uVar10 = uVar10 - !bVar11;
    }
    if (uVar10 == 0 && (DAT_001196f8 <= uVar4) <= uVar10) {
      *(undefined1 *)((int)param_1 + 0x1e) = 1;
    }
    else {
      uVar9 = uVar9 | 2;
      bVar11 = CARRY4(uVar4,DAT_001196fc);
      uVar4 = uVar4 + DAT_001196fc;
      uVar10 = uVar10 - !bVar11;
      *(undefined1 *)((int)param_1 + 0x1e) = 0;
    }
    if (uVar10 != 0 || uVar10 < (DAT_00119700 <= uVar4)) {
      uVar9 = uVar9 | 1;
    }
    uVar2 = *(ushort *)(param_1 + 7) ^ uVar9;
    uVar3 = 0;
    if (uVar2 != 0) {
      if ((uVar2 & 2) != 0) {
        if (*(char *)((int)param_1 + 0x1e) == '\0') {
          uVar3 = 0x4000;
        }
        else {
          uVar3 = 0x2000;
        }
        uVar2 = uVar2 | uVar3;
      }
      iVar8 = *param_1;
      while (uVar3 = uVar2, iVar8 != 0) {
        uVar3 = *(ushort *)(iVar8 + 0xc) & uVar2;
        if (uVar3 != 0) {
          piVar6 = (int *)param_1[6];
          if (piVar6 != (int *)0x0) {
            piVar6 = (int *)(*(int *)(*piVar6 + -0xc) + (int)piVar6);
          }
          (**(code **)**(undefined4 **)(iVar8 + 0x10))
                    (*(undefined4 **)(iVar8 + 0x10),piVar6,param_3,param_4,uVar3);
        }
        if (iVar8 == 0) {
          iVar8 = *param_1;
        }
        else {
          iVar8 = *(int *)(iVar8 + 8);
        }
      }
    }
    *(ushort *)(param_1 + 7) = uVar9;
    return uVar3;
  }
  return 0;
}

