// rea decompile_all
// name: FUN_0006e060
// address: 0x6e060
// body: available
// range: 0x6e060-0x6e115 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0006e060(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  
  uVar6 = 0xffffffff;
LAB_0006e080:
  thunk_EXT_FUN_004001ec(param_1 + 0xec,uVar6);
  FUN_001f00bc();
  do {
    iVar1 = FUN_001d06b8();
    piVar7 = *(int **)(param_1 + 0x118);
    piVar5 = (int *)*piVar7;
    uVar6 = 0xffffffff;
    while( true ) {
      if (piVar5 == piVar7) {
        FUN_001f06d4(param_1 + 200);
        goto LAB_0006e080;
      }
      if ((uint)piVar5[4] <= (uint)(iVar1 - piVar5[5])) break;
      uVar2 = piVar5[4] - (iVar1 - piVar5[5]);
      if (uVar2 < uVar6) {
        uVar6 = uVar2;
      }
      piVar5 = (int *)*piVar5;
    }
    uVar4 = piVar5[3];
    uVar3 = piVar5[2];
    if (piVar5[6] == 0) {
      if (piVar5 != piVar7) {
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + -1;
        *piVar5 = *(undefined4 *)(param_1 + 0x10c);
        *(int **)(param_1 + 0x10c) = piVar5;
      }
    }
    else {
      piVar5[4] = piVar5[6];
      piVar5[5] = iVar1;
    }
    (**(code **)**(undefined4 **)(param_1 + 0xc4))
              (*(undefined4 **)(param_1 + 0xc4),param_1,uVar3,uVar4);
  } while( true );
}

