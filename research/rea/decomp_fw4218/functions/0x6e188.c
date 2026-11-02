// rea decompile_all
// name: FUN_0006e188
// address: 0x6e188
// body: available
// range: 0x6e188-0x6e227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0006e188(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  puVar2 = (undefined4 *)FUN_0006f700(param_1,param_3,0,param_4,param_5,param_6,param_7,param_8);
  uVar1 = DAT_0006e22c;
  *puVar2 = DAT_0006e228;
  puVar2[0x31] = param_2;
  puVar2[0x30] = uVar1;
  puVar2[0x33] = 0;
  FUN_001f0168(puVar2 + 0x32,param_3);
  puVar5 = puVar2 + 0x3b;
  *puVar5 = 0;
  FUN_001ce8fc(puVar5,param_3,0,1);
  thunk_EXT_FUN_00400100(puVar5);
  piVar6 = puVar2 + 0x42;
  *piVar6 = 0;
  puVar2[0x43] = 0;
  puVar2[0x44] = 0;
  puVar2[0x45] = 0;
  puVar2[0x46] = 0;
  puVar2[0x47] = 0;
  piVar3 = (int *)FUN_00173860(0xc,0);
  iVar4 = FUN_00173860(0x1c,0);
  piVar3[2] = iVar4;
  iVar4 = *piVar6;
  piVar3[1] = 1;
  *piVar3 = iVar4;
  *piVar6 = (int)piVar3;
  iVar4 = piVar3[2];
  puVar2[0x44] = iVar4;
  puVar2[0x45] = iVar4 + 0x1c;
  iVar4 = puVar2[0x44];
  puVar2[0x44] = iVar4 + 0x1c;
  puVar2[0x46] = iVar4;
  *(int *)iVar4 = iVar4;
  *(undefined4 *)(puVar2[0x46] + 4) = puVar2[0x46];
  FUN_0006f678(puVar2);
  return puVar2;
}

