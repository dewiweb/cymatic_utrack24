// rea decompile_all
// name: FUN_00006a20
// address: 0x6a20
// body: available
// range: 0x6a20-0x6b8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00006a20(int param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar1 = (int *)FUN_0007009c(param_1 + 4,s_DataStreamManager_00006b90,0,4,0xf,DAT_00006b8c,
                               DAT_00006b8c,DAT_00006b8c,2000,DAT_00006b8c,DAT_00006b8c);
  iVar6 = _DAT_00006ba4 + 0x54;
  piVar1[-1] = _DAT_00006ba4;
  *piVar1 = iVar6;
  piVar1[0x46] = 0;
  FUN_001a07ac(piVar1 + 0x45,s_DataStreamManager_00006b90);
  pcVar2 = (char *)FUN_0008b800(piVar1 + 0x4e);
  *(undefined4 *)pcVar2 = s____X0__l0__AudioHWService_00006ba5._3_4_;
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  pcVar2[0x10] = '\0';
  pcVar2[0x11] = '\0';
  pcVar2[0x12] = '\0';
  pcVar2[0x13] = '\0';
  pcVar2 = (char *)FUN_0008b800(pcVar2 + 0x14);
  uVar5 = s____X0__l0__AudioHWService_00006ba5._7_4_;
  piVar1 = (int *)(pcVar2 + 0xc);
  *(undefined4 *)pcVar2 = s____X0__l0__AudioHWService_00006ba5._7_4_;
  *piVar1 = 0;
  pcVar2[0x1c] = '\0';
  pcVar2[0x1d] = '\0';
  pcVar2[0x1e] = '\0';
  pcVar2[0x1f] = '\0';
  pcVar2[0x20] = '\0';
  pcVar2[0x21] = '\0';
  pcVar2[0x22] = '\0';
  pcVar2[0x23] = '\0';
  pcVar2[0x24] = '\0';
  pcVar2[0x25] = (char)uVar5;
  pcVar2[0x18] = '\0';
  pcVar2[0x19] = '\0';
  pcVar2[0x1a] = '\0';
  pcVar2[0x1b] = '\0';
  pcVar2[0x14] = '\0';
  pcVar2[0x15] = '\0';
  pcVar2[0x16] = '\0';
  pcVar2[0x17] = '\0';
  pcVar2[0x10] = '\0';
  pcVar2[0x11] = '\0';
  pcVar2[0x12] = '\0';
  pcVar2[0x13] = '\0';
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar6 = FUN_0010f82c(0x44,0);
  piVar3[2] = iVar6;
  *piVar3 = *piVar1;
  piVar3[1] = 1;
  *piVar1 = (int)piVar3;
  puVar4 = (undefined1 *)piVar3[2];
  *(undefined1 **)(pcVar2 + 0x14) = puVar4;
  *(undefined1 **)(pcVar2 + 0x18) = puVar4 + 0x44;
  *(undefined1 **)(pcVar2 + 0x14) = puVar4 + 0x44;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *puVar4 = 0;
  *(undefined1 **)(pcVar2 + 0x1c) = puVar4;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(int *)(*(int *)(pcVar2 + 0x1c) + 8) = *(int *)(pcVar2 + 0x1c);
  *(int *)(*(int *)(pcVar2 + 0x1c) + 0xc) = *(int *)(pcVar2 + 0x1c);
  pcVar2[0x28] = '\0';
  pcVar2[0x29] = '\0';
  pcVar2[0x2a] = '\0';
  pcVar2[0x2b] = '\0';
  pcVar2[0x2c] = '\0';
  pcVar2[0x2d] = '\0';
  pcVar2[0x2e] = '\0';
  pcVar2[0x2f] = '\0';
  pcVar2[0x30] = '\0';
  pcVar2[0x31] = '\0';
  pcVar2[0x32] = '\0';
  pcVar2[0x33] = '\0';
  pcVar2[0x34] = '\0';
  uVar5 = FUN_0008cf78();
  FUN_0008ce54(uVar5,s____X0__l0__AudioHWService_00006ba5 + 0xb,pcVar2);
  FUN_0006e024(pcVar2 + -0x14c);
  FUN_0018eabc(pcVar2 + -0x7c);
  uVar5 = FUN_0008cf78();
  FUN_0008cd40(uVar5,pcVar2 + -0x150);
  return pcVar2 + -0x150;
}

