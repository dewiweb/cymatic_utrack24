// rea decompile_all
// name: FUN_001748fa
// address: 0x1748fa
// body: available
// range: 0x1748fa-0x174953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001748fa(uint param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint local_18;
  
  uVar1 = param_2[1];
  uVar4 = uVar1 + 0x20;
  if (uVar4 < 0x1001) {
    local_18 = *param_2;
    param_2[1] = uVar4;
    puVar2 = (uint *)(local_18 + uVar1 + 0x18);
  }
  else {
    local_18 = param_4;
    puVar2 = (uint *)FUN_001754c4(param_2,0x20,&local_18);
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = local_18 | param_3 - 1U;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[1] = param_1;
    puVar2[7] = 0;
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      *(uint **)(param_1 + 0x10) = puVar2;
      puVar2[5] = (uint)puVar2;
      return;
    }
    uVar1 = *(uint *)(iVar3 + 0x14);
    *(uint **)(uVar1 + 0x18) = puVar2;
    puVar2[5] = uVar1;
    *(uint **)(iVar3 + 0x14) = puVar2;
  }
  return;
}

