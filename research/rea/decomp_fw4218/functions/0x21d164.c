// rea decompile_all
// name: FUN_0021d164
// address: 0x21d164
// body: available
// range: 0x21d164-0x21d1cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0021d164(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)param_1[2];
    if (puVar1 == (undefined1 *)param_1[3]) {
      if (*param_1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(*param_1 + 4);
      }
      iVar3 = FUN_0020adc4(uVar2,param_1,param_3,param_4,param_4);
      piVar4 = (int *)FUN_00173860(0xc,0);
      iVar5 = FUN_00173860(iVar3 * 0x18,0);
      piVar4[2] = iVar5;
      iVar5 = *param_1;
      piVar4[1] = iVar3;
      *piVar4 = iVar5;
      *param_1 = (int)piVar4;
      puVar1 = (undefined1 *)piVar4[2];
      param_1[3] = (int)(puVar1 + iVar3 * 0x18);
      param_1[2] = (int)puVar1;
    }
    param_1[2] = (int)(puVar1 + 0x18);
  }
  else {
    param_1[1] = *(int *)(puVar1 + 0xc);
  }
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *puVar1 = 0;
  return;
}

