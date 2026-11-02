// rea decompile_all
// name: FUN_00167ca4
// address: 0x167ca4
// body: available
// range: 0x167ca4-0x167d4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00167ca4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  piVar4 = (int *)(param_1 + -0x118);
  uVar5 = *DAT_00167d4c;
  uVar6 = DAT_00167d4c[1];
  uVar1 = FUN_001da408(auStack_2c);
  puVar2 = (undefined4 *)FUN_001a0808(0x14,1);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    FUN_001da408(auStack_30,uVar1);
    *puVar2 = DAT_00167d50;
    puVar2[1] = piVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    iVar3 = FUN_001da408(puVar2 + 4,auStack_30);
    iVar3 = iVar3 + -0x10;
  }
  (**(code **)(*piVar4 + 0x2c))(piVar4,iVar3,0xffffffff);
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_001da314(auStack_30);
  }
  FUN_001da314(auStack_2c);
  return;
}

