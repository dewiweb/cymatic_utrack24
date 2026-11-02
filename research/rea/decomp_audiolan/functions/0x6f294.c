// rea decompile_all
// name: FUN_0006f294
// address: 0x6f294
// body: available
// range: 0x6f294-0x6f3db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0006f294(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = DAT_0006f3dc;
  uVar7 = DAT_0006f3dc;
  piVar1 = (int *)FUN_0006e06c(param_1,DAT_0006f3e0,0,DAT_0006f3dc,DAT_0006f3dc,DAT_0006f3dc,
                               DAT_0006f3dc,DAT_0006f3dc);
  iVar2 = DAT_0006f3e4;
  iVar3 = DAT_0006f3e4 + 0x48;
  *piVar1 = DAT_0006f3e4;
  piVar1[0x30] = iVar3;
  piVar1[0x31] = iVar2 + 0x5c;
  piVar1[0x33] = iVar2 + 0x94;
  piVar1[0x32] = iVar2 + 0x74;
  piVar1[0x34] = -1;
  piVar1[0x35] = 0;
  piVar1[0x36] = 0;
  piVar1[0x37] = 0;
  piVar1[0x38] = 0;
  piVar1[0x39] = 0;
  *(undefined1 *)(piVar1 + 0x3a) = 0;
  *(undefined1 *)((int)piVar1 + 0xe9) = 0;
  iVar2 = FUN_00084950();
  piVar4 = *(int **)(iVar2 + 0x38);
  iVar2 = FUN_0006f6b4();
  piVar5 = *(int **)(iVar2 + 4);
  iVar2 = (**(code **)(*piVar4 + 0xa4))(piVar4,2,DAT_0006f3e8);
  piVar1[0x35] = iVar2;
  piVar5 = (int *)(**(code **)(*piVar5 + 0x138))(piVar5,8,DAT_0006f3ec);
  piVar1[0x36] = (int)piVar5;
  iVar2 = (**(code **)(*piVar5 + 0x80))
                    (piVar5,DAT_0006f3f4,DAT_0006f3f0,0,piVar1[0x35],0,uVar6 & 0xffff0000,
                     uVar7 & 0xffff0000);
  piVar1[0x37] = iVar2;
  (**(code **)(*(int *)piVar1[0x36] + 0x4c))((int *)piVar1[0x36],piVar1 + 0x32);
  FUN_0006eda4(piVar1);
  (**(code **)(*piVar4 + 0xb0))(piVar4);
  return piVar1;
}

