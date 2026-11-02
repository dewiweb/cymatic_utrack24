// rea decompile_all
// name: FUN_00111cbc
// address: 0x111cbc
// body: available
// range: 0x111cbc-0x111f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00111cbc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint local_48;
  uint local_44;
  undefined2 local_40 [2];
  undefined2 local_3c [2];
  undefined2 local_38 [2];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  FUN_0023299c(auStack_2c,auStack_20);
  FUN_0023299c(auStack_30,auStack_24);
  FUN_0023299c(auStack_34,auStack_28);
  iVar1 = FUN_000f4648(auStack_2c,auStack_30,auStack_34,local_38,local_3c,local_40);
  if (iVar1 == 0) {
    FUN_00002898(s_ERROR__postInitialize__get___fai_00111f08);
    FUN_002329f0(auStack_34);
    FUN_002329f0(auStack_30);
    FUN_002329f0(auStack_2c);
    uVar2 = 0;
  }
  else {
    local_44 = 0;
    local_48 = 0;
    (**(code **)*param_1)(param_1,&local_44,&local_48);
    uVar2 = FUN_0022d49c(auStack_34);
    uVar3 = FUN_0022d49c(auStack_30);
    uVar4 = FUN_0022d49c(auStack_2c);
    uVar5 = (**(code **)(*param_1 + 0x24))(param_1);
    iVar1 = FUN_00085ff8(uVar5,uVar4,uVar3,uVar2,local_38[0],local_3c[0],local_40[0],local_44 & 0xff
                         ,local_48 & 0xff,1);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__postInitialize__initializ_00111f30);
      FUN_002329f0(auStack_34);
      FUN_002329f0(auStack_30);
      FUN_002329f0(auStack_2c);
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x24))(param_1);
      iVar1 = FUN_00087870(uVar2,param_1 + 0x12);
      if (iVar1 == 0) {
        FUN_00002898(s_ERROR__postInitialize__addConnec_00111f5c);
        FUN_002329f0(auStack_34);
        FUN_002329f0(auStack_30);
        FUN_002329f0(auStack_2c);
        uVar2 = 0;
      }
      else {
        piVar6 = (int *)FUN_0022bc78(param_1 + 0x15);
        uVar2 = (**(code **)(*param_1 + 0x24))(param_1);
        iVar1 = (**(code **)(*piVar6 + 0x14))(piVar6,uVar2);
        if (iVar1 == 0) {
          FUN_00002898(s_ERROR__postInitialize__addDevice_00111f94);
          FUN_002329f0(auStack_34);
          FUN_002329f0(auStack_30);
          FUN_002329f0(auStack_2c);
          uVar2 = 0;
        }
        else {
          FUN_002329f0(auStack_34);
          FUN_002329f0(auStack_30);
          FUN_002329f0(auStack_2c);
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

