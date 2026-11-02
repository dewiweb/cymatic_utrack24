// rea decompile_all
// name: FUN_000fe0a0
// address: 0xfe0a0
// body: available
// range: 0xfe0a0-0xfe213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fe0a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  
  piVar1 = DAT_000fe214;
  iVar4 = *(int *)(*(int *)(param_1 + 0x198) + 8);
  if (iVar4 != *(int *)(param_1 + 0x198)) {
    do {
      iVar6 = *(int *)(iVar4 + 0x14);
      if (iVar6 != 0) {
        FUN_00232920(iVar6 + 0x80);
        FUN_00232920(iVar6 + 100);
        piVar7 = *(int **)(iVar6 + 0x58);
        for (piVar5 = *(int **)(iVar6 + 0x54); piVar5 != piVar7; piVar5 = piVar5 + 1) {
          if ((int *)*piVar5 != piVar1 + 3) {
            piVar3 = (int *)*piVar5 + -3;
            iVar2 = *piVar3;
            if ((iVar2 == -1) || ((piVar3 != piVar1 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
              FUN_00173a54(*piVar5 + -0xc,*(int *)(*piVar5 + -8) + 0xe,0);
            }
          }
        }
        iVar2 = *(int *)(iVar6 + 0x54);
        FUN_00173a54(iVar2,*(int *)(iVar6 + 0x5c) - iVar2 >> 2,0);
        FUN_00232920(iVar6 + 0x50);
        FUN_00232920(iVar6 + 0x40);
        FUN_00232920(iVar6 + 0x38);
        FUN_00232920(iVar6 + 0x30);
        FUN_00232920(iVar6 + 0x28);
        FUN_001f01ac(iVar6);
        FUN_001eecc8(iVar6);
      }
      iVar6 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar4 + 0xc) == 0) {
        iVar6 = *(int *)(iVar4 + 4);
        while (iVar2 = iVar6, iVar4 == *(int *)(iVar2 + 0xc)) {
          iVar4 = iVar2;
          iVar6 = *(int *)(iVar2 + 4);
        }
        if (*(int *)(iVar4 + 0xc) != iVar2) {
          iVar4 = iVar2;
        }
      }
      else {
        do {
          iVar4 = iVar6;
          iVar6 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
    } while (iVar4 != *(int *)(param_1 + 0x198));
  }
  iStack_24 = *(int *)(param_1 + 0x198);
  local_28 = *(undefined4 *)(iStack_24 + 8);
  FUN_00220e94(auStack_20,param_1 + 0x188,&local_28,&iStack_24);
  return;
}

