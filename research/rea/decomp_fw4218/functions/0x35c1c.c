// rea decompile_all
// name: FUN_00035c1c
// address: 0x35c1c
// body: available
// range: 0x35c1c-0x35d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00035c1c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_44 [32];
  int *piStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  piStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_0003b64e(DAT_00035d04,0,1000);
  iVar2 = DAT_00035d04;
  puVar4 = DAT_00035d08;
  FUN_0003b646(DAT_00035d04 + 0x22,local_1c,10);
  *(char *)(iVar2 + 0x2c) = (char)param_4;
  *(char *)(iVar2 + 0x2d) = (char)param_4;
  *(undefined1 *)(iVar2 + 0x2e) = 2;
  uVar3 = FUN_0003b618(1);
  *(undefined2 *)(iVar2 + 0x30) = uVar3;
  uVar3 = FUN_0003b618(4);
  *(undefined2 *)(iVar2 + 0x32) = uVar3;
  uVar3 = FUN_0003b618(DAT_00035d0c);
  *(undefined2 *)(iVar2 + 0x34) = uVar3;
  *puVar4 = *(undefined1 *)(*(int *)(*param_1 + 0x274) + 4);
  FUN_0003661e(auStack_44);
  iVar1 = *param_1;
  FUN_0003665c(auStack_44,iVar2,0x38,0xd,*(undefined1 *)(iVar1 + 0x3b4),0,
               (int)*(short *)(iVar1 + 0x3b6),*(undefined1 *)(iVar1 + 0x3b8),
               *(undefined1 *)(iVar1 + 0x3e0));
  FUN_00035140(param_1,iVar2,local_20,0x38);
  FUN_00039a50(*(undefined2 *)(*param_1 + 2),auStack_44);
  return;
}

