// rea decompile_all
// name: FUN_00007144
// address: 0x7144
// body: available
// range: 0x7144-0x721b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000071ec) */
/* WARNING: Removing unreachable block (ram,0x000071e8) */
/* WARNING: Removing unreachable block (ram,0x00007214) */

void FUN_00007144(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *local_20;
  undefined4 local_1c;
  
  FUN_001f00bc(param_2 + 0x118);
  iVar2 = FUN_001f01c4(0x2f4,8);
  local_20 = (int *)0x0;
  if (iVar2 != 0) {
    local_20 = (int *)FUN_0000bc44(iVar2,param_2,param_3);
  }
  uVar1 = DAT_00007a44;
  if (local_20 == (int *)0x0) {
    param_1[1] = 0;
    *param_1 = uVar1;
  }
  else {
    local_1c = 0xffffffff;
    iVar2 = FUN_00233d2c(param_2 + 0x15c,&local_1c);
    FUN_00240b3c(iVar2 + 8,&local_20);
    param_1[1] = local_20;
    *param_1 = uVar1;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 0xc0))();
    }
  }
  FUN_001f06d4(param_2 + 0x118);
  return;
}

