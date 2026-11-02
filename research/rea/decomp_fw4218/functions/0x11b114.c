// rea decompile_all
// name: FUN_0011b114
// address: 0x11b114
// body: available
// range: 0xf01a8-0xf01bf inclusive
// range: 0x103d04-0x103ee3 inclusive
// range: 0x11b114-0x11b173 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00103dc4) */
/* WARNING: Removing unreachable block (ram,0x00103dd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011b114(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auStack_40 [28];
  undefined4 local_24;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  
  iVar6 = FUN_000134dc(*(undefined4 *)(param_1 + 0x34),7,0);
  if (iVar6 != 0) {
    local_18 = _DAT_0011b174;
    FUN_001b17cc(DAT_0011b194,1,s___StreamMidiTransmitter_cpp_0011b176 + 2,0xe8);
    return;
  }
  iVar6 = FUN_00104000();
  uVar2 = FUN_001cfb1c();
  FUN_001cfbe0(uVar2,0,&local_24);
  piVar3 = *(int **)(iVar6 + 0xe0);
  piVar9 = *(int **)(iVar6 + 0xe4);
  piVar8 = piVar3;
  while( true ) {
    if (piVar9 == piVar8) {
      if (piVar9 == *(int **)(iVar6 + 0xe8)) {
        uVar1 = (int)piVar9 - (int)piVar3 >> 2;
        if (uVar1 < (uint)((int)*(int **)(iVar6 + 0xe8) - (int)piVar3 >> 2)) {
          *(int **)(iVar6 + 0xe4) = piVar9 + 1;
          if (piVar9 != (int *)0x0) {
            *piVar9 = piVar9[-1];
          }
          *piVar9 = param_1;
        }
        else {
          uVar10 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar10 < uVar1 + 1) {
            uVar10 = uVar1 + 1;
          }
          piVar4 = (int *)FUN_001f01c4(uVar10 << 2,*(undefined1 *)(iVar6 + 0xdc));
          piVar3 = piVar4;
          for (piVar8 = *(int **)(iVar6 + 0xe0); piVar8 != piVar9; piVar8 = piVar8 + 1) {
            if (piVar3 != (int *)0x0) {
              *piVar3 = *piVar8;
            }
            piVar3 = piVar3 + 1;
          }
          piVar8 = (int *)(((int)piVar9 - *(int *)(iVar6 + 0xe0) & 0xfffffffcU) + (int)piVar4);
          if (piVar8 != (int *)0x0) {
            *piVar8 = param_1;
          }
          piVar3 = *(int **)(iVar6 + 0xe4);
          piVar8 = (int *)(((int)piVar9 - *(int *)(iVar6 + 0xe0) & 0xfffffffcU) + (int)piVar4);
          for (; piVar9 != piVar3; piVar9 = piVar9 + 1) {
            piVar8 = piVar8 + 1;
            if (piVar8 != (int *)0x0) {
              *piVar8 = *piVar9;
            }
          }
          iVar5 = *(int *)(iVar6 + 0xe0);
          iVar7 = *(int *)(iVar6 + 0xe4);
          FUN_001eecc8();
          *(int **)(iVar6 + 0xe8) = piVar4 + uVar10;
          *(int **)(iVar6 + 0xe4) = piVar4 + (iVar7 - iVar5 >> 2) + 1;
          *(int **)(iVar6 + 0xe0) = piVar4;
        }
      }
      else {
        *(int **)(iVar6 + 0xe4) = piVar9 + 1;
        if (piVar9 != (int *)0x0) {
          *piVar9 = param_1;
        }
      }
      uVar2 = FUN_001cfb1c();
      FUN_001cfbe0(uVar2,local_24,auStack_40);
      thunk_EXT_FUN_0040010c(iVar6 + 0xc0);
      return;
    }
    if (*piVar8 == param_1) break;
    piVar8 = piVar8 + 1;
  }
  uVar2 = FUN_001cfb1c();
  FUN_001cfbe0(uVar2,local_24,auStack_20);
  return;
}

