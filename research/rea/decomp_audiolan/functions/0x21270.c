// rea decompile_all
// name: FUN_00021270
// address: 0x21270
// body: available
// range: 0x21270-0x213cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00021270(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int local_30;
  uint local_2c;
  
  FUN_000209c2();
  iVar1 = FUN_0016dc78();
  iVar6 = *(int *)(param_2 + 4);
  piVar5 = *(int **)(iVar1 * 4 + param_1 + 0x15c);
  while ((piVar5 != (int *)0x0 &&
         ((piVar5[1] != iVar6 || (iVar1 = FUN_0003b48a(piVar5[4],param_2 + 0x130), iVar1 == 0))))) {
    piVar5 = (int *)*piVar5;
  }
  local_30 = 0;
  if (piVar5 != (int *)0x0) {
    local_2c = DAT_000213d0;
    for (piVar5 = (int *)piVar5[2]; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
      if ((((*(short *)((int)piVar5 + 6) == 0xc) && (5 < *(ushort *)(piVar5 + 4))) &&
          (piVar5 != (int *)param_3)) &&
         (((piVar5 != (int *)param_4 && (iVar1 = FUN_0003b56c(piVar5 + 1,param_2), iVar1 != 0)) &&
          ((((*(short *)((int)piVar5 + 6) != *(short *)(&LAB_00002c0e + param_1) ||
             ((*(short *)(piVar5 + 2) != *(short *)(&LAB_00002c10 + param_1) ||
              (*(short *)(piVar5 + 4) != *(short *)(&LAB_00002c18 + param_1))))) ||
            (piVar5[6] != *(int *)(&DAT_00002c20 + param_1))) ||
           (iVar1 = FUN_0003b600(piVar5 + 1,*(int *)(&DAT_00002c2c + param_1) + 4,DAT_000213d4),
           iVar1 == 0)))))) {
        iVar1 = piVar5[9];
        uVar2 = DAT_000213d0;
        if (((((4 < *(byte *)(iVar1 + 4)) && (uVar3 = *(byte *)(iVar1 + 5) - 0x30, uVar3 < 10)) &&
             (*(byte *)(iVar1 + 6) - 0x30 < 10)) &&
            ((uVar4 = (uint)*(byte *)(iVar1 + 8), uVar4 - 0x30 < 10 &&
             (uVar7 = (uint)*(byte *)(iVar1 + 9), uVar7 - 0x30 < 10)))) &&
           ((((*(byte *)(iVar1 + 4) < 0xb || ((*(char *)(iVar1 + 7) != '-' || (uVar4 != 0x39)))) ||
             ((uVar7 != 0x39 ||
              (((*(char *)(iVar1 + 10) != '-' || (*(char *)(iVar1 + 0xb) != '9')) ||
               (*(char *)(iVar1 + 0xc) != '9')))))) ||
            (((*(char *)(iVar1 + 0xd) != '-' || (*(char *)(iVar1 + 0xe) != '9')) ||
             (*(char *)(iVar1 + 0xf) != '9')))))) {
          uVar2 = DAT_000213d8 * uVar3 + DAT_000213dc * (uint)*(byte *)(iVar1 + 6) + uVar4 * 1000 +
                  uVar7 * 100 + (uint)*(byte *)(iVar1 + 0xb) * 10 + (uint)*(byte *)(iVar1 + 0xc) +
                  DAT_000213e0;
        }
        if (uVar2 < local_2c) {
          local_30 = (int)piVar5;
          local_2c = uVar2;
        }
      }
    }
  }
  return local_30;
}

