// rea decompile_all
// name: FUN_000e65a0
// address: 0xe65a0
// body: available
// range: 0xe65a0-0xe683f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000e65a0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = FUN_0022d19c(param_3);
  uVar2 = FUN_0022d168(param_3);
  FUN_00002898(DAT_000e6840,param_2,uVar2,uVar1);
  FUN_000aa570();
  uVar1 = FUN_000aa88c();
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  FUN_000f4e84();
  local_28 = FUN_000f4fb4();
  iVar3 = (**(code **)(*(int *)param_1[2] + 8))();
  if (iVar3 == 0) {
    FUN_001a48f0(param_1,0x36,0);
    FUN_001d0130(10);
  }
  iVar3 = FUN_001b5844(uVar2);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*(int *)param_1[2] + 8))();
    uVar4 = 0;
    if (iVar3 != 0) {
      FUN_000bdfe4(param_1 + 5);
      FUN_0006de4c(local_28,0);
      iVar3 = FUN_000bd854(param_1 + 5,param_3);
      if (iVar3 == 0) {
        uVar2 = FUN_0022d168(param_3);
        FUN_00002898(s____ERROR___ls_does_not_exist_in_S_000e6845 + 3,uVar2);
        uVar4 = FUN_0008c334(uVar1,0);
      }
      else {
        local_2c = FUN_0022cefc(param_3,&DAT_000e6874,0xffffffff);
        FUN_0022d1b0(auStack_30,param_3,0,local_2c);
        iVar3 = FUN_000c0a7c(param_1 + 5,auStack_30);
        if (iVar3 != 0) {
          FUN_0023223c(_DAT_000e6878,param_3);
          iVar3 = FUN_000be0ac(param_1 + 5,_DAT_000e6878);
          if (iVar3 != 0) {
            uVar2 = FUN_0022d168(param_3);
            FUN_00002898(s____ERROR___ls_has_the_errror__d_i_000e6879 + 3,uVar2,iVar3);
            FUN_001a48f0(param_1,0x32,0);
            FUN_0008c334(uVar1,0);
            uVar1 = FUN_00232190(auStack_30);
            return uVar1;
          }
          if (*(int *)(_DAT_000e6878 + 0x1c) != param_2) {
            uVar2 = FUN_0022d168(param_3);
            FUN_00002898(DAT_000e68a8,uVar2,param_2,*(undefined4 *)(_DAT_000e6878 + 0x1c));
            FUN_001a48f0(param_1,0x32,0);
            FUN_0008c334(uVar1,0);
            uVar1 = FUN_00232190(auStack_30);
            return uVar1;
          }
          uVar1 = FUN_00232084(auStack_34,param_3);
          FUN_00095440(uVar2,uVar1);
          FUN_00232190(auStack_34);
          (**(code **)(*param_1 + 0x50))(param_1);
          FUN_001a48f0(param_1,0x23,0);
        }
        uVar4 = FUN_00232190(auStack_30);
      }
    }
  }
  else {
    FUN_0023223c(_DAT_000e6844,param_3);
    uVar4 = FUN_001a48f0(param_1,0x24,param_4);
  }
  return uVar4;
}

