// rea decompile_all
// name: FUN_000e1664
// address: 0xe1664
// body: available
// range: 0xe1664-0xe1987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000e1664(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = _DAT_000e1988;
  *param_1 = _DAT_000e1988;
  param_1[0x46] = iVar2 + 0x98;
  param_1[0x47] = iVar2 + 0xb4;
  param_1[0x48] = iVar2 + 0xdc;
  param_1[0x49] = iVar2 + 0xf4;
  param_1[0x4a] = iVar2 + 0x108;
  param_1[0x45] = iVar2 + 0x84;
  param_1[0x4b] = iVar2 + 0x11c;
  param_1[0x74] = iVar2 + 0x164;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_00071c88(param_1);
  FUN_00203d74(&uStack_30);
  uVar1 = FUN_000b4964();
  iVar2 = FUN_000b4840(uVar1,s___UIService_000e198a + 2,&uStack_30);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__UIMainControl__Could_NOT_r_000e1998);
    thunk_FUN_000b1228(&uStack_30);
  }
  else {
    uVar1 = FUN_000d97d4();
    FUN_000d9724(uVar1,param_1 + 0x45);
    piVar3 = (int *)FUN_0022bc54(&uStack_30);
    piVar3 = (int *)(**(code **)(*piVar3 + 0x20))(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x10))(piVar3,400,param_1 + 0x47);
      (**(code **)(*piVar3 + 0x10))(piVar3,DAT_000e19d0,param_1 + 0x47);
      (**(code **)(*piVar3 + 0x10))(piVar3,DAT_000e19d4,param_1 + 0x47);
      (**(code **)(*piVar3 + 0x10))(piVar3,DAT_000e19d8,param_1 + 0x47);
      (**(code **)(*piVar3 + 0x10))(piVar3,0x194,param_1 + 0x47);
      (**(code **)(*piVar3 + 0x10))(piVar3,DAT_000e19dc,param_1 + 0x47);
      (**(code **)(*piVar3 + 0x10))(piVar3,DAT_000e19e0,param_1 + 0x47);
      (**(code **)(*piVar3 + 0x10))(piVar3,DAT_000e19e4,param_1 + 0x47);
      (**(code **)(*piVar3 + 0x10))(piVar3,0x198,param_1 + 0x47);
      (**(code **)(*piVar3 + 0x10))(piVar3,DAT_000e19e8,param_1 + 0x47);
    }
    piVar3 = (int *)FUN_0022bc54(&uStack_30);
    piVar3 = (int *)(**(code **)(*piVar3 + 0x30))(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x10))(piVar3,DAT_000e19ec,param_1 + 0x48);
    }
    piVar3 = (int *)FUN_000923c8();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x10))(piVar3);
    if (piVar3 == (int *)0x0) {
      FUN_00002898(DAT_000e19f0);
      thunk_FUN_000b1228(&uStack_30);
    }
    else {
      (**(code **)(*piVar3 + 0x10))(piVar3,0xc9,param_1 + 0x74);
      (**(code **)(*piVar3 + 0x10))(piVar3,0xca,param_1 + 0x74);
      (**(code **)(*piVar3 + 0x10))(piVar3,0xcb,param_1 + 0x74);
      (**(code **)(*piVar3 + 0x10))(piVar3,0xcc,param_1 + 0x74);
      (**(code **)(*piVar3 + 0x10))(piVar3,0xcd,param_1 + 0x74);
      (**(code **)(*piVar3 + 0x10))(piVar3,0xce,param_1 + 0x74);
      (**(code **)(*piVar3 + 0x10))(piVar3,0xcf,param_1 + 0x74);
      (**(code **)(*piVar3 + 0x10))(piVar3,0xd0,param_1 + 0x74);
      thunk_FUN_000b1228(&uStack_30);
    }
  }
  iVar2 = FUN_0006e23c(param_1 + 0x77);
  iVar2 = FUN_00071c00(iVar2 + -0xc);
  uVar1 = FUN_00077674(iVar2 + -0x1d0);
  return CONCAT44(uStack_30,uVar1);
}

