// rea decompile_all
// name: FUN_000e6b68
// address: 0xe6b68
// body: available
// range: 0xe6b68-0xe6dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000e6b68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fb4();
  FUN_000f4e84();
  local_30 = FUN_000f5150();
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  if (iVar2 == 0) {
    FUN_001a48f0(param_1,0x36,0);
    FUN_001d0130(10);
  }
  uVar3 = FUN_0022d168(param_4);
  FUN_00002898(DAT_000e6dc4,param_2,param_3,uVar3);
  uVar3 = FUN_00230e4c(auStack_2c);
  uVar3 = FUN_00231ef4(auStack_28,&DAT_000e6dc8,uVar3);
  FUN_0006db48(uVar1,uVar3);
  FUN_00232190(auStack_28);
  FUN_000aa570();
  uVar3 = FUN_000aa88c();
  iVar2 = FUN_000e7608(param_1);
  if (iVar2 == 0) {
    FUN_0008c6e8(uVar3,0,param_4);
    uVar1 = FUN_0011eda0();
    FUN_0011ff88(uVar1,s_Preparing_Recording_000e6ddc,s_No_Disk_Space__000e6dcc);
    uVar1 = FUN_0011eda0();
    FUN_000a1000(uVar1,0x1c);
    FUN_001d0130(2000);
    FUN_00002898(DAT_000e6df0);
    uVar1 = FUN_0011eda0();
    uVar1 = FUN_000a0ec8(uVar1,5,0);
  }
  else {
    uVar4 = FUN_000bd790(param_1 + 0x14,param_2);
    FUN_000b810c(local_30,uVar4);
    FUN_000b8208(local_30,param_3);
    iVar2 = FUN_000bd854(param_1 + 0x14,param_4);
    if (iVar2 == 0) {
      uVar4 = FUN_00232084(auStack_34,param_4);
      FUN_0006db48(uVar1,uVar4);
      FUN_00232190(auStack_34);
      FUN_0008c6e8(uVar3,1,param_4);
      uVar1 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))
                        (*(int **)(param_1 + 0xa4),0x24,0,1000,0);
    }
    else {
      iVar2 = FUN_000bd4d8(param_1 + 0x14,param_4);
      iVar5 = FUN_000bff84(param_1 + 0x14);
      if (iVar5 == iVar2) {
        iVar5 = iVar5 + 1;
      }
      FUN_000bddec(auStack_34,param_1 + 0x14,iVar5);
      uVar1 = FUN_0022d168(auStack_34);
      uVar4 = FUN_0022d168(param_4);
      FUN_00002898(DAT_000e6df4,uVar4,uVar1);
      FUN_0008c6e8(uVar3,0,auStack_34);
      uVar1 = FUN_00232190(auStack_34);
    }
  }
  return uVar1;
}

