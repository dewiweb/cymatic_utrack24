// rea decompile_all
// name: FUN_00088dd0
// address: 0x88dd0
// body: available
// range: 0x88dd0-0x88fa1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00088dd0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  
  puVar2 = (undefined4 *)
           FUN_0006e06c(param_1,s_mDNSResponder_00088fa8,0,DAT_00088fa4,DAT_00088fa4,0x4000,
                        DAT_00088fa4,DAT_00088fa4);
  *puVar2 = DAT_00088fb8;
  puVar2[0x30] = DAT_00088fbc;
  piVar6 = puVar2 + 0x31;
  *piVar6 = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  *(undefined1 *)(puVar2 + 0x37) = 0;
  *(char *)((int)puVar2 + 0xdd) = (char)piVar6;
  puVar2[0x34] = 0;
  puVar2[0x33] = 0;
  puVar2[0x32] = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x14,0);
  piVar3[2] = iVar4;
  iVar4 = *piVar6;
  piVar3[1] = 1;
  *piVar3 = iVar4;
  *piVar6 = (int)piVar3;
  iVar4 = piVar3[2];
  puVar2[0x33] = iVar4;
  puVar2[0x34] = iVar4 + 0x14;
  puVar5 = (undefined1 *)puVar2[0x33];
  puVar2[0x33] = puVar5 + 0x14;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  puVar2[0x35] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar2[0x35] + 8) = puVar2[0x35];
  iVar4 = puVar2[0x35];
  piVar6 = puVar2 + 0x38;
  *(int *)(iVar4 + 0xc) = iVar4;
  *piVar6 = 0;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  *(undefined1 *)(puVar2 + 0x3e) = 0;
  *(char *)((int)puVar2 + 0xf9) = (char)iVar4;
  puVar2[0x3b] = 0;
  puVar2[0x3a] = 0;
  puVar2[0x39] = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x30,0);
  piVar3[2] = iVar4;
  iVar4 = *piVar6;
  piVar3[1] = 1;
  *piVar3 = iVar4;
  *piVar6 = (int)piVar3;
  iVar4 = piVar3[2];
  puVar2[0x3a] = iVar4;
  puVar2[0x3b] = iVar4 + 0x30;
  puVar5 = (undefined1 *)puVar2[0x3a];
  puVar2[0x3a] = puVar5 + 0x30;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  puVar2[0x3c] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar2[0x3c] + 8) = puVar2[0x3c];
  iVar4 = puVar2[0x3c];
  piVar6 = puVar2 + 0x3f;
  *(int *)(iVar4 + 0xc) = iVar4;
  *piVar6 = 0;
  puVar2[0x43] = 0;
  puVar2[0x44] = 0;
  *(undefined1 *)(puVar2 + 0x45) = 0;
  *(char *)((int)puVar2 + 0x115) = (char)iVar4;
  puVar2[0x42] = 0;
  puVar2[0x41] = 0;
  puVar2[0x40] = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x18,0);
  piVar3[2] = iVar4;
  iVar4 = *piVar6;
  piVar3[1] = 1;
  *piVar3 = iVar4;
  *piVar6 = (int)piVar3;
  iVar4 = piVar3[2];
  puVar2[0x41] = iVar4;
  puVar2[0x42] = iVar4 + 0x18;
  puVar5 = (undefined1 *)puVar2[0x41];
  puVar2[0x41] = puVar5 + 0x18;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  puVar2[0x43] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar2[0x43] + 8) = puVar2[0x43];
  iVar4 = puVar2[0x43];
  piVar6 = puVar2 + 0x46;
  *(int *)(iVar4 + 0xc) = iVar4;
  *piVar6 = 0;
  puVar2[0x4a] = 0;
  puVar2[0x4b] = 0;
  *(undefined1 *)(puVar2 + 0x4c) = 0;
  *(char *)((int)puVar2 + 0x131) = (char)iVar4;
  puVar2[0x49] = 0;
  puVar2[0x48] = 0;
  puVar2[0x47] = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x18,0);
  piVar3[2] = iVar4;
  iVar4 = *piVar6;
  piVar3[1] = 1;
  *piVar3 = iVar4;
  *piVar6 = (int)piVar3;
  iVar4 = piVar3[2];
  puVar2[0x48] = iVar4;
  puVar2[0x49] = iVar4 + 0x18;
  puVar5 = (undefined1 *)puVar2[0x48];
  puVar2[0x48] = puVar5 + 0x18;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  puVar2[0x4a] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar2[0x4a] + 8) = puVar2[0x4a];
  piVar6 = puVar2 + 0x4d;
  *(undefined4 *)(puVar2[0x4a] + 0xc) = puVar2[0x4a];
  *piVar6 = 0;
  puVar2[0x4e] = 0;
  puVar2[0x4f] = 0;
  puVar2[0x50] = 0;
  puVar2[0x51] = 0;
  puVar2[0x52] = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x18,0);
  piVar3[2] = iVar4;
  iVar4 = *piVar6;
  piVar3[1] = 1;
  *piVar3 = iVar4;
  *piVar6 = (int)piVar3;
  uVar1 = DAT_00088fc0;
  iVar4 = piVar3[2];
  puVar2[0x4f] = iVar4;
  puVar2[0x50] = iVar4 + 0x18;
  iVar4 = puVar2[0x4f];
  puVar2[0x4f] = iVar4 + 0x18;
  puVar2[0x51] = iVar4;
  *(int *)iVar4 = iVar4;
  *(undefined4 *)(puVar2[0x51] + 4) = puVar2[0x51];
  FUN_00197ab0(DAT_00088fc8,DAT_00088fc4,uVar1,0x40,1,0,0);
  FUN_0006e024(puVar2);
  return puVar2;
}

