// rea decompile_all
// name: FUN_000bf9a8
// address: 0xbf9a8
// body: available
// range: 0xbf9a8-0xbfc9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bf9a8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 auStack_14c [172];
  undefined1 auStack_a0 [44];
  undefined1 auStack_74 [28];
  undefined4 local_58;
  undefined1 auStack_54 [32];
  undefined4 local_34;
  int *local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  local_34 = FUN_00115ad4();
  FUN_000f8ee0();
  FUN_000f881c();
  FUN_001d0130(1000);
  local_154 = FUN_00230e4c(auStack_2c);
  local_158 = FUN_0022d168(param_2);
  uVar1 = FUN_00231ef4(auStack_28,local_158,local_154);
  local_150 = FUN_00123418(auStack_54,param_1 + 4,*(undefined4 *)(param_1 + 0x58),uVar1,1);
  FUN_00232190(auStack_28);
  local_30 = (int *)FUN_000cbaf0();
  iVar2 = (**(code **)(*local_30 + 8))(local_30,auStack_54,0,0xffffffff);
  if (iVar2 == 0) {
    local_58 = FUN_001bac50(auStack_54);
    FUN_0013782c(auStack_74,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_58);
    piVar3 = (int *)FUN_000cbaf0();
    iVar2 = (**(code **)(*piVar3 + 8))(piVar3,auStack_74,0,0xffffffff);
    if (iVar2 == 0) {
      uVar1 = FUN_001bc0c4(auStack_74);
      iVar2 = FUN_001c6a94(uVar1,DAT_000bfca8);
      if (iVar2 == 0) {
        FUN_00002898(DAT_000bfcac);
        FUN_00137868(auStack_74);
        FUN_0012346c(auStack_54);
        uVar1 = 0;
      }
      else {
        local_164 = FUN_001bc0c4(auStack_74);
        local_160 = 0;
        FUN_00123544(auStack_a0,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_58,iVar2);
        piVar3 = (int *)FUN_000cbaf0();
        iVar4 = (**(code **)(*piVar3 + 8))(piVar3,auStack_a0,0,0xffffffff);
        if (iVar4 == 0) {
          FUN_0012c504(&local_164,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_58);
          piVar3 = (int *)FUN_000cbaf0();
          (**(code **)(*piVar3 + 8))(piVar3,&local_164,0xffffffff);
          FUN_0012c578(&local_164);
          FUN_000d70e8(auStack_14c);
          uVar1 = FUN_001bc0c4(auStack_74);
          iVar4 = FUN_00116a00(local_34,iVar2,uVar1,auStack_14c,1);
          if (iVar4 == 1) {
            uVar1 = FUN_001bc0c4(auStack_74);
            local_164 = 0;
            FUN_00116d0c(local_34,iVar2,uVar1,auStack_14c,0);
          }
          FUN_001235f0(auStack_a0);
          FUN_00137868(auStack_74);
          FUN_0012346c(auStack_54);
          uVar1 = 1;
        }
        else {
          uVar1 = FUN_001b29dc(auStack_a0);
          FUN_00002898(DAT_000bfcb0,uVar1);
          FUN_001235f0(auStack_a0);
          FUN_00137868(auStack_74);
          FUN_0012346c(auStack_54);
          uVar1 = 0;
        }
      }
    }
    else {
      uVar1 = FUN_001b29dc(auStack_74);
      FUN_00002898(DAT_000bfca4,uVar1);
      FUN_00137868(auStack_74);
      FUN_0012346c(auStack_54);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = FUN_001b29dc(auStack_54);
    FUN_00002898(DAT_000bfca0,uVar1);
    FUN_0012346c(auStack_54);
    uVar1 = 0;
  }
  return uVar1;
}

