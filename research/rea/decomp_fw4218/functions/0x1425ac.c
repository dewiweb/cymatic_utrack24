// rea decompile_all
// name: FUN_001425ac
// address: 0x1425ac
// body: available
// range: 0x1425ac-0x14260d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001425ac(int *param_1,uint *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  
  uVar2 = (**(code **)(*param_1 + 0xc))(param_1);
  if ((uVar2 <= *param_2) && (iVar3 = FUN_0022e44a(param_1 + 1), iVar3 == 0)) {
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
    for (puVar4 = (undefined2 *)param_1[1]; (undefined2 *)param_1[2] != puVar4; puVar4 = puVar4 + 1)
    {
      puVar6 = (undefined1 *)*param_3;
      uVar1 = *puVar4;
      *param_3 = puVar6 + 1;
      *puVar6 = (char)uVar1;
      uVar1 = *puVar4;
      puVar6 = (undefined1 *)*param_3;
      *param_3 = puVar6 + 1;
      *puVar6 = (char)((ushort)uVar1 >> 8);
      *param_2 = *param_2 - 2;
    }
    uVar5 = (**(code **)(*param_1 + 0xc))(param_1);
    return uVar5;
  }
  return 0;
}

