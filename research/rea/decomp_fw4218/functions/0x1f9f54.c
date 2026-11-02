// rea decompile_all
// name: FUN_001f9f54
// address: 0x1f9f54
// body: available
// range: 0x1f9f54-0x1fa04d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001f9f54(int *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = DAT_001fa0b0;
  iVar9 = 4;
  if ((char)param_1[6] != '\0') {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001fa07c,
                 s___tcp_bind__can_only_bind_in_sta_001fa052 + 2,0x1bc,_DAT_001fa050,param_4);
    return 0xfffffff9;
  }
  bVar1 = *(byte *)(param_1 + 2);
  if ((int)((uint)bVar1 << 0x1d) < 0) {
    iVar9 = 3;
  }
  if (param_3 == 0) {
    uVar6 = 0;
LAB_001f9f86:
    iVar3 = DAT_001fa0b4;
    uVar2 = *(ushort *)(DAT_001fa0b4 + 4);
    *(ushort *)(DAT_001fa0b4 + 4) = uVar2 + 1;
    if (uVar2 == DAT_001fa0b8) {
      *(undefined2 *)(iVar3 + 4) = 0xc000;
    }
    uVar5 = 0;
    do {
      for (iVar4 = **(int **)(iVar8 + uVar5 * 4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
        if (*(short *)(iVar4 + 0x1a) == *(short *)(iVar3 + 4)) {
          uVar6 = uVar6 + 1 & 0xffff;
          if (DAT_001fa0bc < uVar6) {
            return 0xfffffffd;
          }
          goto LAB_001f9f86;
        }
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 4);
    param_3 = (uint)*(ushort *)(DAT_001fa0b4 + 4);
    if (param_3 == 0) {
      return 0xfffffffd;
    }
  }
  iVar8 = 0;
  if (iVar9 != 0) {
    do {
      for (piVar7 = (int *)**(int **)(DAT_001fa0b0 + iVar8 * 4); piVar7 != (int *)0x0;
          piVar7 = (int *)piVar7[3]) {
        if (((*(ushort *)((int)piVar7 + 0x1a) == param_3) &&
            ((-1 < (int)((uint)bVar1 << 0x1d) || (-1 < (int)((uint)*(byte *)(piVar7 + 2) << 0x1d))))
            ) && ((piVar7 == (int *)0x0 ||
                  ((((*piVar7 == 0 || (param_2 == (int *)0x0)) || (*param_2 == 0)) ||
                   (*piVar7 == *param_2)))))) {
          return 0xfffffff7;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar9);
  }
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    *param_1 = *param_2;
  }
  *(short *)((int)param_1 + 0x1a) = (short)param_3;
  iVar8 = DAT_001fa0b4;
  param_1[3] = *(int *)(DAT_001fa0b4 + 0x10);
  *(int **)(iVar8 + 0x10) = param_1;
  FUN_001fd6c8();
  return 0;
}

