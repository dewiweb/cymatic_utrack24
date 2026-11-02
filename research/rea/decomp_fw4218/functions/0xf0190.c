// rea decompile_all
// name: FUN_000f0190
// address: 0xf0190
// body: available
// range: 0xf0190-0xf01a7 inclusive
// range: 0x103ee4-0x103fff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000f0190(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 auStack_30 [20];
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  
  iVar2 = FUN_00104000();
  puVar8 = auStack_30;
  uVar3 = FUN_001cfb1c();
  FUN_001cfbe0(uVar3,0,&local_1c);
  piVar4 = *(int **)(iVar2 + 0xe0);
  if (*(int **)(iVar2 + 0xe4) != piVar4) {
    piVar9 = *(int **)(iVar2 + 0xe4);
    piVar7 = piVar4;
    do {
      if (*piVar7 == param_1) {
        if (piVar4 != piVar9) {
          piVar4 = piVar7 + 1;
          if (piVar4 != piVar9) {
            iVar1 = (int)piVar9 - (int)piVar4 >> 2;
            if (0 < iVar1) {
              iVar5 = 0;
              if (piVar4 < piVar9) {
                iVar6 = -(((int)piVar9 - (int)piVar4) * 0x20000000 >> 0x1f);
                if (iVar6 == 1) {
                  iVar5 = 1;
                  *piVar7 = *piVar4;
                }
              }
              else {
                iVar6 = 0;
              }
              for (; iVar6 < iVar1; iVar6 = iVar6 + 2) {
                piVar7[iVar5] = piVar4[iVar5];
                piVar7[iVar5 + 1] = piVar4[iVar5 + 1];
                iVar5 = iVar5 + 2;
              }
            }
          }
          *(int *)(iVar2 + 0xe4) = *(int *)(iVar2 + 0xe4) + -4;
        }
        uVar3 = FUN_001cfb1c();
        puVar8 = auStack_18;
        goto LAB_00103ff4;
      }
      piVar7 = piVar7 + 1;
    } while (piVar9 != piVar7);
  }
  if ((int)*(int **)(iVar2 + 0xe4) - (int)piVar4 >> 2 == 0) {
    thunk_EXT_FUN_00400100(iVar2 + 0xc0);
  }
  uVar3 = FUN_001cfb1c();
LAB_00103ff4:
  FUN_001cfbe0(uVar3,local_1c,puVar8);
  return;
}

