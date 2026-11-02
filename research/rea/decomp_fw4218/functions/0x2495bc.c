// rea decompile_all
// name: FUN_002495bc
// address: 0x2495bc
// body: available
// range: 0x2495bc-0x249633 inclusive
// range: 0x249638-0x249673 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_002495bc(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  uint *unaff_lr;
  bool bVar3;
  
  if ((((int)*unaff_lr < 0) ||
      (unaff_r5 = param_4 * 2 + (uint)(param_3 != 0), unaff_r5 < 0xffe00001)) &&
     (uVar2 = param_2 * 2 + (uint)(param_1 != 0), uVar2 < 0xffe00001)) {
    if (uVar2 == 0xffe00000) {
      uVar2 = ((int)param_2 >> 0x1f) * -3 + 2;
      if (unaff_r5 == 0xffe00000) {
        uVar2 = (uVar2 - ((int)param_4 >> 0x1f)) + 1;
      }
    }
    else {
      uVar2 = param_4 >> 0x1f;
    }
  }
  else {
    uVar2 = 8;
  }
  uVar2 = *unaff_lr >> uVar2 * 3 & 7;
  switch(uVar2) {
  case 4:
    break;
  case 5:
    param_3 = param_1;
    param_4 = param_2;
    break;
  case 6:
  case 7:
    return 0;
  default:
                    /* WARNING: Could not recover jumptable at 0x0024962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(unaff_lr + uVar2 + 1))();
    return iVar1;
  }
  bVar3 = CARRY4(param_4,param_4) || CARRY4(param_4 * 2,(uint)(param_3 != 0));
  uVar2 = param_4 * 2 + (uint)(param_3 != 0);
  if (uVar2 != 0) {
    bVar3 = uVar2 < 0x200001;
  }
  if (bVar3 && (uVar2 != 0 && uVar2 != 0x200000)) {
    param_3 = 0;
  }
  return param_3;
}

