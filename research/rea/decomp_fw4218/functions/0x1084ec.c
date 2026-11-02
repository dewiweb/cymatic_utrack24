// rea decompile_all
// name: FUN_001084ec
// address: 0x1084ec
// body: available
// range: 0x1084ec-0x10871f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001084ec(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  uVar3 = *(undefined4 *)(param_1 + 0x9c);
  switch(uVar3) {
  case 0:
    iVar5 = FUN_000bd6fc(param_1 + 0x10);
    if (iVar5 == *(int *)(param_1 + 0xa4)) {
      uVar2 = FUN_001b566c(uVar2);
      uVar3 = FUN_0011eda0();
      uVar3 = FUN_0011f3bc(uVar3,uVar2,0);
    }
    else {
      uVar2 = FUN_0006a588(*(undefined4 *)(param_1 + 0xc0),*(uint *)(param_1 + 0xa4) & 0xff);
      uVar3 = FUN_0011eda0();
      FUN_0011f234(uVar3,0,uVar2);
      uVar2 = FUN_0011eda0();
      uVar3 = FUN_00120008(uVar2,*(int *)(param_1 + 0xa4) + 1,1);
    }
    break;
  case 1:
    uVar2 = FUN_0011eda0(uVar3);
    FUN_00120008(uVar2,*(int *)(param_1 + 0xa4) + 1,0);
    puVar4 = (undefined4 *)FUN_0023d888(param_1 + 0xcc,*(undefined4 *)(param_1 + 0xa4));
    uVar3 = *puVar4;
    uVar2 = FUN_0011eda0();
    uVar3 = FUN_0011fd30(uVar2,uVar3,1);
    break;
  case 2:
    puVar4 = (undefined4 *)FUN_0023d888(param_1 + 0xcc,*(undefined4 *)(param_1 + 0xa4));
    uVar3 = *puVar4;
    uVar2 = FUN_0011eda0();
    FUN_0011fd30(uVar2,uVar3,0);
    puVar4 = (undefined4 *)FUN_002444e4(param_1 + 0xd8,*(undefined4 *)(param_1 + 0xa4));
    uVar3 = *puVar4;
    uVar2 = FUN_0011eda0();
    uVar3 = FUN_0011f970(uVar2,uVar3,param_2);
    break;
  case 3:
    puVar4 = (undefined4 *)FUN_002444e4(param_1 + 0xd8,*(undefined4 *)(param_1 + 0xa4));
    uVar3 = *puVar4;
    uVar2 = FUN_0011eda0();
    FUN_0011f970(uVar2,uVar3,1);
    iVar5 = FUN_0023d888(param_1 + 0xcc,*(undefined4 *)(param_1 + 0xa4));
    uVar1 = *(undefined1 *)(iVar5 + 5);
    uVar2 = FUN_0011eda0();
    uVar3 = FUN_0011f1cc(uVar2,1,uVar1);
    break;
  case 4:
    iVar5 = FUN_0023d888(param_1 + 0xcc,*(undefined4 *)(param_1 + 0xa4));
    uVar1 = *(undefined1 *)(iVar5 + 5);
    uVar2 = FUN_0011eda0();
    FUN_0011f1cc(uVar2,0,uVar1);
    uVar2 = FUN_0006a588(*(undefined4 *)(param_1 + 0xc0),*(uint *)(param_1 + 0xa4) & 0xff);
    uVar3 = FUN_0011eda0();
    uVar3 = FUN_0011f234(uVar3,1,uVar2);
    break;
  case 5:
    uVar2 = FUN_001b566c(uVar2);
    uVar3 = FUN_0011eda0();
    uVar3 = FUN_0011f3bc(uVar3,uVar2,1);
  }
  return uVar3;
}

