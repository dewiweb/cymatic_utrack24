// rea decompile_all
// name: FUN_001ae1cc
// address: 0x1ae1cc
// body: available
// range: 0x1ae1cc-0x1ae2f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_001ae1cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  *param_1 = DAT_001ae2f4;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002376c0(&uStack_18,param_1 + 0x1b);
  while( true ) {
    FUN_002376a0(&uStack_10,param_1 + 0x1b);
    iVar1 = FUN_0022d994(&uStack_18,&uStack_10);
    if (iVar1 == 0) break;
    piVar2 = (int *)FUN_0022d960(&uStack_18);
    piVar2 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    FUN_00232ccc(&uStack_14,&uStack_18,0);
  }
  FUN_00237bd0(&uStack_18,param_1 + 0x22);
  while( true ) {
    FUN_00237bb0(&uStack_10,param_1 + 0x22);
    iVar1 = FUN_0022d9e8(&uStack_18,&uStack_10);
    if (iVar1 == 0) break;
    piVar2 = (int *)FUN_0022d9b4(&uStack_18);
    piVar2 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    FUN_00232d2c(&uStack_14,&uStack_18,0);
  }
  iVar1 = FUN_00237ebc(param_1 + 0x22);
  iVar1 = FUN_002379ac(iVar1 + -0x1c);
  iVar1 = FUN_002329f0(iVar1 + -8);
  iVar1 = FUN_00105e58(iVar1 + -0x40);
  iVar1 = FUN_000e203c(iVar1 + -0x20);
  uVar3 = FUN_00057acc(iVar1 + -4);
  return CONCAT44(uStack_18,uVar3);
}

