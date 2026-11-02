// rea decompile_all
// name: FUN_000a3bc0
// address: 0xa3bc0
// body: available
// range: 0xa3bc0-0xa3cfb inclusive
// range: 0xf5858-0xf585b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf5858 to 0x5f57c FUN_0005f57c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a3bc0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  *param_1 = DAT_000a3cfc;
  FUN_0005f148(param_1);
  if ((-1 < (int)param_1[0x17b]) && (iVar2 = FUN_0005f2d8(param_1), iVar2 != 0)) {
    param_1[0x17b] = 0xffffffff;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x179);
  bVar1 = *(byte *)((int)param_1 + 0x5e5);
  while (uVar5 != bVar1) {
    if ((-1 < (int)param_1[uVar5 * 0x15 + 0x2a]) && (iVar2 = FUN_0005f2d8(param_1), iVar2 != 0)) {
      param_1[uVar5 * 0x15 + 0x2a] = 0xffffffff;
    }
    uVar5 = uVar5 + 1 & 0xff;
    if (0xf < uVar5) {
      uVar5 = 0;
    }
  }
  uVar5 = 0;
  do {
    if (param_1[uVar5 + 399] != 0) {
      uVar3 = FUN_000ec4b0();
      FUN_000ec19c(uVar3,param_1[uVar5 + 399]);
      param_1[uVar5 + 399] = 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 9);
  FUN_00004074(param_1 + 0x1a2,DAT_000a3d00,0x2c,9);
  if (param_1[0x27] != DAT_000a3d04) {
    piVar4 = (int *)(param_1[0x27] + -0xc);
    iVar2 = *piVar4;
    if ((iVar2 == -1) || ((piVar4 != DAT_000a3d08 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
      FUN_00173a54(param_1[0x27] + -0xc,*(int *)(param_1[0x27] + -8) + 8,0);
    }
  }
  FUN_0005f57c(param_1);
  return;
}

