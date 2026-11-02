// rea decompile_all
// name: FUN_00006d70
// address: 0x6d70
// body: available
// range: 0x6d70-0x6e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00006e18) */
/* WARNING: Removing unreachable block (ram,0x00006e14) */
/* WARNING: Removing unreachable block (ram,0x00006e40) */

void FUN_00006d70(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *local_20;
  undefined4 local_1c;
  
  FUN_001a0700(param_2 + 0x118);
  iVar2 = FUN_001a0808(0x360,8);
  local_20 = (int *)0x0;
  if (iVar2 != 0) {
    local_20 = (int *)FUN_0000e3dc(iVar2,param_2,param_3);
  }
  uVar1 = DAT_0000759c;
  if (local_20 == (int *)0x0) {
    param_1[1] = 0;
    *param_1 = uVar1;
  }
  else {
    local_1c = 0xffffffff;
    iVar2 = FUN_001dbd40(param_2 + 0x15c,&local_1c);
    FUN_001deee0(iVar2 + 0x14,&local_20);
    param_1[1] = local_20;
    *param_1 = uVar1;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 0xc0))();
    }
  }
  FUN_001a0d18(param_2 + 0x118);
  return;
}

