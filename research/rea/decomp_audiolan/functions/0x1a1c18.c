// rea decompile_all
// name: FUN_001a1c18
// address: 0x1a1c18
// body: available
// range: 0x1a1c18-0x1a1d19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a1c18(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint local_1c [2];
  
  local_1c[0] = 0;
  while( true ) {
    iVar1 = FUN_0016f184(DAT_001a1d1c,param_2,param_1,local_1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_1c[0] == 0) {
      return 0;
    }
    cVar3 = local_1c[0] != param_2;
    if ((bool)cVar3) {
      param_2 = local_1c[0];
    }
    iVar1 = FUN_0016f184(DAT_001a1d20,param_2,param_1 + 0xc,local_1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_1c[0] == 0) {
      return 0;
    }
    if (local_1c[0] != param_2) {
      cVar3 = cVar3 + '\x01';
      param_2 = local_1c[0];
    }
    iVar1 = FUN_0016f184(DAT_001a1d24,param_2,param_1 + 8,local_1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_1c[0] == 0) {
      return 0;
    }
    if (local_1c[0] != param_2) {
      cVar3 = cVar3 + '\x01';
      param_2 = local_1c[0];
    }
    iVar1 = FUN_0016f2f0(DAT_001a1d28,param_2,param_1 + 0x10,local_1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_1c[0] == 0) {
      return 0;
    }
    if (local_1c[0] != param_2) {
      cVar3 = cVar3 + '\x01';
      param_2 = local_1c[0];
    }
    iVar1 = FUN_0016f2f0(DAT_001a1d2c,param_2,param_1 + 4,local_1c);
    if (iVar1 != 0) break;
    if (local_1c[0] == 0) {
      return 0;
    }
    uVar2 = param_2;
    if (local_1c[0] != param_2) {
      cVar3 = cVar3 + '\x01';
      uVar2 = local_1c[0];
    }
    param_2 = uVar2;
    if (cVar3 == '\0') {
      iVar1 = FUN_000034d0(uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      param_2 = FUN_00003318(uVar2 + 1,0x2c);
      if (param_2 == 0) {
        return 0;
      }
      uVar2 = FUN_0016f10c(uVar2);
      if ((uVar2 != 0) && (uVar2 < param_2)) {
        uVar2 = FUN_0016f10c(uVar2 + 1);
        if (uVar2 == 0) {
          return -5;
        }
        if ((param_2 < uVar2) && (param_2 = FUN_00003318(uVar2,0x2c), param_2 == 0)) {
          return 0;
        }
      }
    }
  }
  return iVar1;
}

