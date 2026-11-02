// rea decompile_all
// name: FUN_0024a100
// address: 0x24a100
// body: available
// range: 0x24a100-0x24a16f inclusive
// range: 0x24a174-0x24a19f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0024a100(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *unaff_lr;
  bool bVar2;
  
  if ((((int)*unaff_lr < 0) || (param_3 = param_2 * 2, param_3 < 0xff000001)) &&
     (param_1 * 2 < 0xff000001)) {
    if (param_1 * 2 == 0xff000000) {
      uVar1 = ((int)param_1 >> 0x1f) * -3 + 2;
      if (param_3 == 0xff000000) {
        uVar1 = (uVar1 - ((int)param_2 >> 0x1f)) + 1;
      }
    }
    else {
      uVar1 = param_2 >> 0x1f;
    }
  }
  else {
    uVar1 = 8;
  }
  uVar1 = *unaff_lr >> uVar1 * 3 & 7;
  switch(uVar1) {
  case 4:
    break;
  case 5:
    param_2 = param_1;
    break;
  case 6:
  case 7:
    return 0x7fc00000;
  default:
                    /* WARNING: Could not recover jumptable at 0x0024a168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(unaff_lr + uVar1 + 1))();
    return uVar1;
  }
  bVar2 = SUB41(param_2 >> 0x1f,0);
  uVar1 = param_2 * 2;
  if (uVar1 != 0) {
    bVar2 = uVar1 < 0x1000001;
  }
  if (bVar2 && (uVar1 != 0 && uVar1 != 0x1000000)) {
    param_2 = param_2 & 0x80000000;
  }
  return param_2;
}

