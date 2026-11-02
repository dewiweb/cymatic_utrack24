// rea decompile_all
// name: FUN_000beb94
// address: 0xbeb94
// body: available
// range: 0xbeb94-0xbed43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000beb94(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  byte local_2c [4];
  undefined1 auStack_28 [4];
  
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x14))(*(int **)(param_1 + 0x5c),0xcf,3,0);
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar2 = FUN_000f4fb4();
  uVar3 = FUN_001b5ae8(uVar1);
  FUN_000bddec(auStack_28,param_1,uVar3);
  FUN_00178f04();
  iVar4 = FUN_001776cc();
  if (iVar4 != 0) {
    uVar3 = FUN_00178f04();
    FUN_00176e14(uVar3,local_2c,local_30,local_34);
    uVar3 = FUN_00178f04();
    FUN_00176e40(uVar3,local_38,local_3c,local_40);
    piVar5 = (int *)FUN_000cbaf0();
    (**(code **)(*piVar5 + 0x10))
              (piVar5,local_2c[0] + 2000,local_30[0],local_34[0],local_38[0],local_3c[0],local_40[0]
              );
  }
  if (param_2 != 0) {
    uVar3 = 0;
    iVar4 = FUN_0006d818(uVar2);
    if (iVar4 == 0) {
      uVar3 = 0xffffffff;
    }
    uVar6 = FUN_00095470(uVar1);
    FUN_000bcb6c(param_1,uVar6,auStack_28,uVar3);
    uVar3 = FUN_0022d168(auStack_28);
    FUN_00095470(uVar1);
    uVar6 = FUN_0022d168();
    FUN_00081050(*DAT_000bed68,s_Renaming_Directory_from__ls_to___000bed44,uVar6,uVar3);
  }
  FUN_00093300(uVar1,3);
  FUN_000c0638(param_1,auStack_28);
  iVar4 = FUN_001b2798(uVar2);
  if (iVar4 == 0) {
    FUN_000bc4cc(param_1);
  }
  FUN_00232190(auStack_28);
  return 1;
}

