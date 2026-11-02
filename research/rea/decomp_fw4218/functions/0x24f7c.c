// rea decompile_all
// name: FUN_00024f7c
// address: 0x24f7c
// body: available
// range: 0x24f7c-0x251e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00024f7c(undefined1 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 auStack_40c [4];
  undefined1 auStack_408 [4];
  undefined2 local_404;
  undefined4 local_400;
  short local_3fc;
  int local_3e8;
  undefined1 local_2b4 [524];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined2 local_40 [2];
  int local_3c;
  undefined1 auStack_38 [20];
  undefined1 *puStack_24;
  int *piStack_20;
  int local_1c;
  undefined4 local_18;
  
  local_3c = *param_2;
  local_40[0] = CONCAT11(param_1[10],param_1[0xb]);
  local_98 = 0;
  local_a8 = DAT_000251e4;
  local_94 = 0;
  local_a4 = DAT_000251e8;
  local_a0 = DAT_000251ec;
  local_50 = 0;
  local_9c = DAT_000251f0;
  puStack_24 = param_1;
  piStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_0002a2ac(&local_a8,param_3 + DAT_000251f4,0x40);
  FUN_0002a2ac(&local_a8,param_1,*param_2 - (int)param_1);
  FUN_001e9a9c(auStack_40c,0,0,0xfa,0,0x20,0,0,0);
  iVar4 = local_1c + DAT_000251f8;
  iVar1 = local_1c + DAT_000251fc;
  uVar2 = FUN_00025d12();
  if (uVar2 < 0x101) {
    FUN_001e57d8(local_2b4,iVar1,uVar2);
  }
  else {
    local_2b4[0] = 0;
  }
  uVar3 = FUN_00025d12(iVar1,iVar4);
  FUN_0002a2ac(&local_a8,iVar1,uVar3);
  local_404 = 0xff;
  local_44 = 0xff00;
  FUN_0002a2ac(&local_a8,&local_44,2);
  local_400 = 0;
  FUN_0002a2ac(&local_a8,&local_400,4);
  uVar2 = FUN_00025d12(&DAT_00025200,0x25300);
  if (uVar2 < 0x101) {
    FUN_001e57d8(local_3e8 + 4,&DAT_00025200,uVar2);
  }
  else {
    *(undefined1 *)(local_3e8 + 4) = 0;
  }
  iVar1 = FUN_00025d12(&DAT_00025200,0x25300);
  iVar1 = local_3e8 + iVar1 + 4;
  FUN_0002a2ac(&local_a8,&DAT_00025200);
  iVar4 = FUN_001e5a90();
  if (iVar4 == -1) {
    FUN_0002a1c6(0,DAT_0002521c);
    *param_2 = 0;
  }
  local_4c = 0;
  local_4b = 0;
  local_4a = (undefined1)((uint)iVar4 >> 0x18);
  local_49 = (undefined1)((uint)iVar4 >> 0x10);
  local_48 = (undefined1)((uint)iVar4 >> 8);
  local_47 = (undefined1)iVar4;
  FUN_001e57d8(iVar1,&local_4c,6);
  FUN_0002a2ac(&local_a8,&local_4c,6);
  *(undefined1 *)(iVar1 + 6) = 1;
  *(undefined1 *)(iVar1 + 7) = 0x2c;
  FUN_0002a2ac(&local_a8,(undefined1 *)(iVar1 + 6),2);
  uVar5 = (undefined1)((uint)local_18 >> 8);
  local_44._0_2_ = CONCAT11((char)local_18,uVar5);
  uVar3 = local_18;
  FUN_0002a2ac(&local_a8,&local_44,2);
  uVar6 = (undefined1)uVar3;
  local_44 = (uint)local_44._2_2_ << 0x10;
  FUN_0002a2ac(&local_a8,&local_44,2);
  FUN_0002a1c8(auStack_38,&local_a8);
  local_a8 = DAT_000251e4;
  local_a4 = DAT_000251e8;
  local_a0 = DAT_000251ec;
  local_9c = DAT_000251f0;
  local_98 = 0;
  local_94 = 0;
  local_50 = 0;
  FUN_0002a2ac(&local_a8,local_1c + DAT_00025220,0x40);
  FUN_0002a2ac(&local_a8,auStack_38,0x10);
  FUN_0002a1c8(auStack_38,&local_a8);
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 9) = 0x10;
  FUN_001e57d8(iVar1 + 10,auStack_38,0x10);
  *(undefined1 *)(iVar1 + 0x1a) = *param_1;
  *(undefined1 *)(iVar1 + 0x1b) = param_1[1];
  *(undefined1 *)(iVar1 + 0x1c) = uVar5;
  *(undefined1 *)(iVar1 + 0x1d) = uVar6;
  *(undefined1 *)(iVar1 + 0x1e) = 0;
  *(undefined1 *)(iVar1 + 0x1f) = 0;
  local_3fc = ((short)iVar1 - (short)local_3e8) + 0x1c;
  iVar1 = FUN_0003ef54(param_1,local_3c,local_40,auStack_408,0,param_1 + DAT_00025224);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    param_1[10] = (char)((ushort)local_40[0] >> 8);
    param_1[0xb] = (char)local_40[0];
    return;
  }
  FUN_0002a1c6(0,s_ERROR__DNSDigest_SignMessage___c_00025228);
  *param_2 = 0;
  return;
}

