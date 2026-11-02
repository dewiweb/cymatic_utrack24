// rea decompile_all
// name: FUN_0008df44
// address: 0x8df44
// body: available
// range: 0x8df44-0x8e217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008df44(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_bc;
  undefined1 auStack_b8 [20];
  undefined4 local_a4;
  undefined1 auStack_80 [31];
  undefined1 local_61;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined1 auStack_40 [40];
  
  FUN_001d6158(&local_f8,0,0x400);
  local_bc = 0;
  FUN_0009cdb8(auStack_b8);
  iVar5 = _DAT_0008e218;
  local_ec = *(undefined4 *)(_DAT_0008e218 + 0xc);
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  FUN_001d41f8(&local_f8,s___ArchwaveVER_0008e21a + 2,&local_c8,local_e8);
  puVar1 = (undefined4 *)FUN_001d436c(&local_f8,s___ArchwaveVER_0008e21a + 2);
  puVar1[3] = *(undefined4 *)(iVar5 + 0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = FUN_001d436c(&local_f8,s___ArchwaveVER_0008e21a + 2);
  local_c8 = 1;
  uStack_c4 = 0;
  local_bc = DAT_0008e228;
  FUN_001d41f8(uVar2,s_version_0008e22c,&local_c8,local_e8);
  FUN_001d41f8(uVar2,s_bootloader_0008e234,&local_c8,local_e8);
  puVar1 = (undefined4 *)FUN_001d436c(uVar2,s_bootloader_0008e234);
  puVar1[3] = *(undefined4 *)(iVar5 + 0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar3 = FUN_000c8b00();
  iVar4 = FUN_000c7af8(uVar3,1,auStack_b8);
  if (iVar4 == 0) {
    FUN_000027f4(auStack_80,0x20,s_No_BSL_0008e25c);
  }
  else {
    FUN_000027f4(auStack_80,0x20,s_BSL_Firmware_revision__u_0008e240,local_a4);
  }
  local_61 = 0;
  FUN_001d42f8(&local_c8,auStack_80,local_e8);
  FUN_001d41f8(puVar1,s_version_0008e22c,&local_c8,local_e8);
  FUN_001d41f8(uVar2,s_application_0008e264,&local_c8,local_e8);
  puVar1 = (undefined4 *)FUN_001d436c(uVar2,s_application_0008e264);
  puVar1[3] = *(undefined4 *)(iVar5 + 0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = FUN_000c8b00();
  iVar5 = FUN_000c7af8(uVar2,2,auStack_b8);
  if (iVar5 == 0) {
    FUN_000027f4(auStack_80,0x20,s_No_version_information_0008e28c);
  }
  else {
    FUN_000027f4(auStack_80,0x20,s_Main_Firmware_revision__u_0008e270,local_a4);
  }
  local_61 = 0;
  FUN_001d42f8(&local_c8,auStack_80,local_e8);
  FUN_001d41f8(puVar1,s_version_0008e22c,&local_c8,local_e8);
  FUN_001d62a8(auStack_58,0,0x100);
  iVar5 = FUN_001d6abc(auStack_40,auStack_58,0,0x20);
  *(undefined1 *)(iVar5 + 0x1c) = 0x20;
  *(undefined4 *)(iVar5 + 0x20) = 4;
  FUN_001d7b74(&local_f8,auStack_40);
  iVar4 = (local_4c - local_50) + 0xd3;
  iVar5 = FUN_001a0808(iVar4,1);
  *(int *)(param_1 + 0x168) = iVar5;
  if (iVar5 == 0) {
    FUN_000028a4(DAT_0008e2a8,iVar4);
  }
  else {
    iVar5 = FUN_000028d8(iVar5,DAT_0008e2a4,local_4c - local_50);
    uVar2 = FUN_001d8d38(auStack_58);
    FUN_00003418(*(int *)(param_1 + 0x168) + iVar5,uVar2);
    *(int *)(param_1 + 0x16c) = (local_4c - local_50) + iVar5;
  }
  FUN_001523dc(auStack_40);
  FUN_0018a280(local_50);
  FUN_0019f30c(local_54);
  FUN_0015242c(&local_f8);
  return;
}

