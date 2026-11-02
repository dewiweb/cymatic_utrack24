// rea decompile_all
// name: FUN_001088bc
// address: 0x1088bc
// body: available
// range: 0x1088bc-0x1089f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001088bc(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_0011eda0();
  FUN_000a0ec8(uVar2,0x19,0);
  uVar2 = FUN_0011eda0();
  FUN_00120374(uVar2,&DAT_001089f8);
  FUN_0006a6d4(*(undefined4 *)(param_1 + 0xc0),1);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  FUN_00069cc4(*(undefined4 *)(param_1 + 0xc0),param_1 + 0xb0,param_1 + 0xb8);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x24))
            (*(int **)(param_1 + 0x90),5,0,DAT_001089fc,DAT_001089fc);
  FUN_0011eda0();
  FUN_00120230();
  uVar2 = FUN_0011eda0();
  FUN_00120008(uVar2,*(int *)(param_1 + 0xa4) + 1,1);
  puVar3 = (undefined4 *)FUN_0023d888(param_1 + 0xcc,*(undefined4 *)(param_1 + 0xa4));
  uVar5 = *puVar3;
  uVar2 = FUN_0011eda0();
  FUN_0011fd30(uVar2,uVar5,0);
  puVar3 = (undefined4 *)FUN_002444e4(param_1 + 0xd8,*(undefined4 *)(param_1 + 0xa4));
  uVar5 = *puVar3;
  uVar2 = FUN_0011eda0();
  FUN_0011f970(uVar2,uVar5,1);
  iVar4 = FUN_0023d888(param_1 + 0xcc,*(undefined4 *)(param_1 + 0xa4));
  uVar1 = *(undefined1 *)(iVar4 + 5);
  uVar2 = FUN_0011eda0();
  FUN_0011f1cc(uVar2,0,uVar1);
  uVar2 = FUN_0006a588(*(undefined4 *)(param_1 + 0xc0),*(uint *)(param_1 + 0xa4) & 0xff);
  uVar5 = FUN_0011eda0();
  FUN_0011f234(uVar5,0,uVar2);
  FUN_00107b40(param_1);
  return;
}

