// rea decompile_all
// name: FUN_00101df4
// address: 0x101df4
// body: available
// range: 0x101df4-0x10212f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00101df4(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  int iStack_208;
  int local_204;
  int iStack_200;
  undefined4 *puStack_1fc;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f4 [22];
  undefined2 local_1de;
  undefined1 auStack_1dc [12];
  ushort local_1d0 [48];
  undefined1 auStack_170 [12];
  char local_164;
  uint local_160 [3];
  undefined1 auStack_154 [8];
  undefined1 auStack_14c [72];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [12];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [68];
  undefined1 auStack_90 [112];
  
  FUN_000f9b04(auStack_1f4,0);
  iVar1 = FUN_000ea3bc(auStack_1f4,param_3);
  if (iVar1 != 0) {
    FUN_0010f5fc(auStack_f4,auStack_1dc);
    if (param_4 != 0) {
      thunk_FUN_000ea2a4(&local_224,param_1[1]);
      iVar1 = FUN_000ea1e8(auStack_170,&local_224);
      FUN_000ea314(&local_224);
      if (iVar1 != 0) {
        (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2],param_2,auStack_170);
        goto LAB_00102080;
      }
    }
    iVar1 = FUN_001080ac(*param_1,local_1d0);
    if (iVar1 == 0) {
      FUN_000ea2e0(&uStack_220);
      if (local_164 == '\0') {
        local_164 = '\x01';
      }
      uVar2 = FUN_0015e0d8(param_1[1],local_164,&uStack_220);
      if ((uVar2 & ~((local_1d0[0] & 0x1ff) >> 8)) == 0) {
        FUN_000eea30(local_160);
        FUN_0010f5fc(&local_214,param_2 + 0x1c);
        FUN_000ee6cc(local_160,local_1de,auStack_f4,&local_214,0);
        if (param_4 == 0) {
          piVar4 = (int *)param_1[2];
          FUN_0010f5fc(&iStack_208,param_2 + 0x1c);
          (**(code **)(*piVar4 + 8))(piVar4,local_160,&iStack_208);
        }
        else {
          (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],local_160);
        }
        FUN_000ee880(local_160);
        FUN_000e9f98(auStack_14c);
        FUN_000e9f98(auStack_154);
        local_160[1] = 0;
        local_160[0] = 0;
        local_160[2] = 0;
      }
      else {
        FUN_000f5618(local_160,local_1d0);
        local_160[0] = local_160[0] & 0xffff7fff;
        FUN_000eea30(&local_e8);
        uVar3 = FUN_000f5618(auStack_90,local_160);
        local_224 = 1;
        FUN_000ed964(&local_e8,local_1de,auStack_f4,0x16,uVar3);
        FUN_000f589c(auStack_90);
        (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2],&local_e8,&uStack_220);
        FUN_000ee880(&local_e8);
        FUN_000e9f98(auStack_d4);
        FUN_000e9f98(auStack_dc);
        local_e4 = 0;
        local_e8 = 0;
        local_e0 = 0;
        FUN_000f589c(local_160);
      }
      FUN_000ea314(&uStack_220);
    }
    else {
      FUN_000eea30(local_160);
      thunk_FUN_000ea2a4(auStack_104,param_1[1]);
      FUN_0015e148(&local_e8,param_1[1]);
      FUN_0010f5fc(&local_e0,param_2 + 0x1c);
      puStack_1f8 = auStack_104;
      puStack_1fc = &local_e8;
      iStack_200 = iVar1 + 0x4c;
      local_204 = iVar1 + 0x20;
      local_214 = *(undefined4 *)(iVar1 + 0x40);
      uStack_210 = *(undefined4 *)(iVar1 + 0x44);
      uStack_20c = *(undefined4 *)(iVar1 + 0x48);
      local_224 = *(undefined4 *)(iVar1 + 0x30);
      uStack_220 = *(undefined4 *)(iVar1 + 0x34);
      uStack_21c = *(undefined4 *)(iVar1 + 0x38);
      uStack_218 = *(undefined4 *)(iVar1 + 0x3c);
      iStack_208 = iVar1;
      FUN_000ee434(local_160,local_1de,auStack_f4,&local_e0,*(undefined4 *)(iVar1 + 0x2c));
      FUN_0010e7f4(&local_e8);
      FUN_000ea314(auStack_104);
      if (param_4 == 0) {
        piVar4 = (int *)param_1[2];
        FUN_0010f5fc(&local_224,param_2 + 0x1c);
        (**(code **)(*piVar4 + 8))(piVar4,local_160,&local_224);
      }
      else {
        (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],local_160);
      }
      FUN_000ee880(local_160);
      FUN_000e9f98(auStack_14c);
      FUN_000e9f98(auStack_154);
      local_160[1] = 0;
      local_160[0] = 0;
      local_160[2] = 0;
    }
  }
LAB_00102080:
  FUN_000f9bac(auStack_1f4);
  return;
}

