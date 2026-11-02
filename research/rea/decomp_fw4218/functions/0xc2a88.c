// rea decompile_all
// name: FUN_000c2a88
// address: 0xc2a88
// body: available
// range: 0xc2a88-0xc2d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c2a88(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar2 = param_1[0xd2];
  bVar5 = iVar2 != 0;
  if (!bVar5) {
    iVar2 = param_1[0xd3];
  }
  if (bVar5 || iVar2 != 0) {
    return 1;
  }
  FUN_000c15ec(param_1);
  param_1[0xd2] = param_2;
  param_1[0xd3] = param_3;
  (**(code **)(*param_1 + 0x44))(param_1,param_4);
  if (param_1[0xd0] == 0) {
    iVar3 = FUN_001f01c4(0x2c,1);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_0006d6cc(iVar3,0);
    }
    param_1[0xd0] = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_001a42b4(iVar2,DAT_000c2d6c,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(*(int *)param_1[0xd0] + 8))((int *)param_1[0xd0],param_1[0xcf]);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_0006d398(param_1[0xd0],0xb);
    FUN_0006d514(param_1[0xd0],0);
    uVar4 = FUN_001eed14(*(undefined4 *)(param_2 + 0x18));
    FUN_0006d520(param_1[0xd0],uVar4);
    FUN_0006d550(param_1[0xd0],1);
    FUN_0006cf90(param_1[0xd0],2);
    FUN_0006d3c8(param_1[0xd0],0);
    FUN_0006d55c(param_1[0xd0],8);
    iVar2 = FUN_0006d5c4(param_1[0xd0]);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(*(int *)param_1[0xd0] + 0x1c))();
    param_1[0x116] = iVar2;
    if (param_1[0xd1] == 0) {
      iVar3 = FUN_001f01c4(0x2c,1);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = FUN_0006d6cc(iVar3,0);
      }
      param_1[0xd1] = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_001a42b4(iVar2,DAT_000c2d70,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = (**(code **)(*(int *)param_1[0xd1] + 8))((int *)param_1[0xd1],param_1[0xcf]);
      if (iVar2 != 0) {
        uVar4 = FUN_001eed14(*(undefined4 *)(param_2 + 0x18));
        FUN_0006d398(param_1[0xd1],uVar4);
        FUN_0006d514(param_1[0xd1],1);
        FUN_0006d520(param_1[0xd1],0xb);
        FUN_0006d550(param_1[0xd1],0);
        FUN_0006cf90(param_1[0xd1],2);
        FUN_0006d3c8(param_1[0xd1],0);
        FUN_0006d55c(param_1[0xd1],8);
        iVar2 = FUN_0006d5c4(param_1[0xd1]);
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*(int *)param_1[0xd1] + 0x1c))();
          param_1[0x10a] = iVar2;
          FUN_000762f0(8);
          FUN_000762f4(8,DAT_000c2d74,param_1);
          FUN_000763a8(8);
          (**(code **)(param_1[1] + 8))(param_1 + 1);
          *(undefined1 *)(param_1[0x132] + 0xb) = 0xff;
          (**(code **)(*param_1 + 0x84))(param_1,1);
          bVar1 = *(byte *)(param_1[0x132] + 1);
          iVar2 = FUN_001dc424();
          if (iVar2 == 0) {
            bVar1 = bVar1 & 0xdf;
          }
          if (iVar2 != 0) {
            bVar1 = bVar1 | 0x20;
          }
          *(byte *)(param_1[0x132] + 1) = bVar1 | 0xc0;
          iStack_1c = param_1[0xc5];
          uStack_20 = 0;
          thunk_EXT_FUN_004005e0(param_1[0xd3] + 0x10,&uStack_20,0xffffffff);
          return 1;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}

