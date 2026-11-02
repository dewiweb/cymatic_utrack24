// rea decompile_all
// name: FUN_00082258
// address: 0x82258
// body: available
// range: 0x82258-0x825e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00082258(void)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_2cc;
  uint local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  int local_2bc;
  undefined1 auStack_cc [4];
  int local_c8;
  undefined1 auStack_c4 [72];
  undefined1 auStack_7c [72];
  undefined4 local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  uVar2 = FUN_00230e4c(auStack_28);
  FUN_00232050(auStack_30,uVar2);
  local_34 = 0;
  if (*(char *)(DAT_000825e8 + 4) == '\x02') {
    FUN_0023223c(auStack_30,DAT_000825e8);
  }
  else {
    FUN_00232084(auStack_cc,DAT_000825ec);
    iVar4 = FUN_0022d19c(DAT_000825ec);
    FUN_0022d1b0(&local_c8,auStack_cc,0,iVar4 + -10);
    FUN_0023223c(auStack_cc,&local_c8);
    FUN_00232190(&local_c8);
    uVar2 = FUN_0022d168(auStack_cc);
    FUN_00002934(&local_2cc,0x100,u__ls__04d__wav_000825f0,uVar2,1);
    FUN_0023219c(auStack_30,&local_2cc);
    FUN_00232190(auStack_cc);
  }
  local_2c0 = 0;
  if (*(uint *)(DAT_000825e8 + 0x4c) <= *(uint *)(DAT_000825e8 + 0x50)) {
    local_2c0 = *(undefined4 *)(DAT_000825e8 + 0x1c);
  }
  uVar6 = *(int *)(DAT_000825e8 + 0x4c) * *(int *)(DAT_000825e8 + 0x1c);
  if ((uVar6 <= *(uint *)(DAT_000825e8 + 0x8c)) ||
     (local_2c8 = uVar6, *(int *)(DAT_000825e8 + 0x58) != 1)) {
    local_2c8 = 0;
  }
  local_2c4 = 0;
  local_2bc = 0;
  local_2cc = 1;
  FUN_0017111c(auStack_7c,0,auStack_30,0,0xffffffff);
  for (bVar1 = 0; bVar1 < 0x18; bVar1 = bVar1 + 1) {
    iVar4 = FUN_0023bdc8(DAT_0008260c,bVar1);
    local_c8 = (int)(char)*(undefined4 *)(iVar4 + 0xc);
    FUN_001710f4(auStack_7c,bVar1,local_c8);
  }
  piVar3 = (int *)FUN_000f8ee0();
  iVar4 = (**(code **)(*piVar3 + 0x80))(piVar3,auStack_7c);
  if (iVar4 == 0) {
    uVar2 = FUN_0022d168(auStack_30);
    FUN_00002898(DAT_00082614,DAT_00082610,uVar2);
    FUN_001711c4(auStack_7c);
    FUN_00232190(auStack_30);
    uVar2 = 0;
  }
  else {
    local_34 = 1;
    if (uVar6 <= *(uint *)(DAT_000825e8 + 0x8c)) {
      uVar6 = *(uint *)(DAT_000825e8 + 0x8c);
    }
    if (*(uint *)(DAT_000825e8 + 0x50) < *(uint *)(DAT_000825e8 + 0x4c)) {
      uVar2 = *(undefined4 *)(DAT_000825e8 + 0x1c);
    }
    else {
      uVar2 = 0;
    }
    iVar4 = uVar6 + *(int *)(DAT_00082618 + 0x1c) * -9;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar5 = FUN_0022d19c(DAT_0008261c);
    if (iVar5 == 0) {
      local_c8 = FUN_00230e4c(auStack_28);
      FUN_00231ef4(auStack_2c,&DAT_00082620,local_c8);
    }
    else {
      FUN_00232084(auStack_2c,DAT_0008261c);
    }
    local_2c8 = 0;
    local_2c4 = 0;
    local_2cc = 0;
    local_2c0 = uVar2;
    local_2bc = iVar4;
    FUN_0017111c(auStack_c4,1,auStack_2c,0,uVar6);
    FUN_00232190(auStack_2c);
    piVar3 = (int *)FUN_000f8ee0();
    iVar4 = (**(code **)(*piVar3 + 0x80))(piVar3,auStack_c4);
    if (iVar4 == 0) {
      uVar2 = FUN_0022d168(auStack_30);
      FUN_00002898(DAT_00082628,DAT_00082624,uVar2);
      FUN_001711c4(auStack_c4);
      FUN_001711c4(auStack_7c);
      FUN_00232190(auStack_30);
      uVar2 = 0;
    }
    else {
      local_34 = 1;
      uVar2 = local_34;
      FUN_001711c4(auStack_c4);
      FUN_001711c4(auStack_7c);
      FUN_00232190(auStack_30);
    }
  }
  return uVar2;
}

