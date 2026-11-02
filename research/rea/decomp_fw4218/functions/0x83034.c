// rea decompile_all
// name: FUN_00083034
// address: 0x83034
// body: available
// range: 0x83034-0x833ef inclusive
// range: 0x8345c-0x835af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00083034(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int local_4f8 [128];
  undefined1 auStack_2f8 [444];
  int local_13c;
  undefined1 auStack_138 [64];
  undefined1 auStack_f8 [4];
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [72];
  int local_a8;
  undefined1 auStack_a4 [72];
  uint local_5c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  uint local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined4 local_38;
  uint uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_38 = param_1;
  uStack_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  uVar3 = FUN_00230e4c(auStack_3c);
  FUN_00232050(auStack_50,uVar3);
  uVar3 = FUN_00230e4c(auStack_40);
  FUN_00232050(auStack_54,uVar3);
  uVar3 = FUN_00230e4c(auStack_44);
  FUN_00232050(auStack_58,uVar3);
  local_5c = param_2;
  if (*DAT_000833f0 == '\0') {
    FUN_0023223c(auStack_54,DAT_000833f4);
  }
  else {
    FUN_00232084(auStack_f8,DAT_000833f8);
    iVar4 = FUN_0022d19c(DAT_000833f8);
    FUN_0022d1b0(auStack_f4,auStack_f8,0,iVar4 + -10);
    FUN_0023223c(auStack_f8,auStack_f4);
    FUN_00232190(auStack_f4);
    uVar3 = FUN_0022d168(auStack_f8);
    FUN_00002934(auStack_2f8,0x100,u__ls__04d__wav_000833fc,uVar3,param_2);
    FUN_0023219c(auStack_54,auStack_2f8);
    uVar3 = FUN_0022d168(auStack_f8);
    FUN_00002934(local_4f8,0x100,u__ls__04d__wav_000833fc,uVar3,param_2 + 1);
    FUN_0023219c(auStack_58,local_4f8);
    FUN_00232190(auStack_f8);
  }
  iVar4 = FUN_00081bfc(local_38);
  if (iVar4 == 0) {
    local_5c = 0;
  }
  uVar7 = *(int *)(DAT_000833f4 + 0x4c) * *(int *)(DAT_000833f4 + 0x1c);
  if ((uVar7 <= *(uint *)(DAT_000833f4 + 0x8c)) ||
     (uVar6 = uVar7, *(uint *)(DAT_000833f4 + 0x58) != param_2)) {
    uVar6 = 0;
  }
  uVar3 = FUN_00083bc0(local_38,param_2);
  local_4f8[1] = 0;
  local_4f8[0] = -1;
  FUN_0017111c(auStack_a4,0,auStack_54,local_30,0xffffffff,local_5c,uVar6,uVar3);
  if (*DAT_000833f0 != '\0') {
    for (bVar2 = 0; bVar2 < 0x18; bVar2 = bVar2 + 1) {
      iVar4 = FUN_0023bdc8(DAT_00083418,bVar2);
      FUN_001710f4(auStack_a4,bVar2,(int)(char)*(undefined4 *)(iVar4 + 0xc));
    }
  }
  piVar5 = (int *)FUN_000f8ee0();
  iVar4 = (**(code **)(*piVar5 + 0x80))(piVar5,auStack_a4);
  if (iVar4 == 0) {
    uVar3 = FUN_0022d168(auStack_54);
    FUN_00002898(s_ERROR____d_Setup_next_file__ls_i_00083420,DAT_0008341c,uVar3);
  }
  puVar1 = DAT_00083450;
  *DAT_00083450 = param_2;
  *DAT_00083454 = *puVar1;
  if (param_2 < *(uint *)(DAT_000833f4 + 0x58)) {
    uVar3 = FUN_00083bc0(local_38,param_2 + 1);
    local_4f8[0] = -1;
    local_4f8[1] = 0;
    FUN_0017111c(auStack_138,0,auStack_58,0,0xffffffff,param_2 + 1,0,uVar3);
    for (bVar2 = 0; bVar2 < 0x18; bVar2 = bVar2 + 1) {
      iVar4 = FUN_0023bdc8(DAT_00083418,bVar2);
      local_13c = (int)(char)*(undefined4 *)(iVar4 + 0xc);
      FUN_001710f4(auStack_138,bVar2,local_13c);
    }
    piVar5 = (int *)FUN_000f8ee0();
    iVar4 = (**(code **)(*piVar5 + 0x80))(piVar5,auStack_138);
    if (iVar4 == 0) {
      uVar3 = FUN_0022d168(auStack_58);
      FUN_00002898(s_ERROR____d_Setup_next_file__ls_i_00083420,DAT_00083458,uVar3);
    }
    *DAT_00083454 = param_2 + 1;
    FUN_001711c4(auStack_138);
  }
  if (uVar7 <= *(uint *)(DAT_000833f4 + 0x8c)) {
    uVar7 = *(uint *)(DAT_000833f4 + 0x8c);
  }
  local_a8 = uVar7 + *(int *)(DAT_000833f4 + 0x1c) * -9;
  if (local_a8 < 0) {
    local_a8 = 0;
  }
  iVar4 = FUN_0022d19c(DAT_000835b0);
  if (iVar4 == 0) {
    uVar3 = FUN_00230e4c(auStack_44);
    FUN_00231ef4(auStack_48,&DAT_000835b4,uVar3);
  }
  else {
    FUN_00232084(auStack_48,DAT_000835b0);
  }
  local_4f8[0] = local_a8;
  local_4f8[1] = 0;
  FUN_0017111c(auStack_f0,1,auStack_48,local_2c,uVar7,1,0,1);
  FUN_00232190(auStack_48);
  piVar5 = (int *)FUN_000f8ee0();
  iVar4 = (**(code **)(*piVar5 + 0x80))(piVar5,auStack_f0);
  if (iVar4 == 0) {
    uVar3 = FUN_0022d168(DAT_000835b0);
    FUN_00002898(s_ERROR__Setup_next_file__ls_in_PL_000835b8,uVar3);
  }
  local_4c = local_5c;
  FUN_001711c4(auStack_f0);
  FUN_001711c4(auStack_a4);
  FUN_00232190(auStack_58);
  FUN_00232190(auStack_54);
  FUN_00232190(auStack_50);
  return local_4c;
}

