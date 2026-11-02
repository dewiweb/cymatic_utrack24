// rea decompile_all
// name: FUN_000b462c
// address: 0xb462c
// body: available
// range: 0xb462c-0xb4789 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_000b462c(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_18 [2];
  
  iVar1 = FUN_000dbb90();
  iVar1 = FUN_000d9c18(iVar1 + 4);
  iVar1 = FUN_000e8070(iVar1 + 4);
  iVar1 = FUN_000e350c(iVar1 + 4);
  puVar2 = (undefined4 *)FUN_000e80f8(iVar1 + 4);
  puVar2[-4] = DAT_000b478c;
  puVar2[-3] = DAT_000b4790;
  puVar2[-2] = DAT_000b4794;
  uVar4 = DAT_000b47a4;
  puVar2[-1] = DAT_000b4798;
  puVar2[1] = 0;
  uVar5 = DAT_000b479c;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = uVar5;
  uVar5 = DAT_000b47a8;
  puVar2[5] = DAT_000b47a0;
  puVar2[6] = uVar4;
  puVar2[7] = uVar5;
  puVar2[8] = 0;
  puVar2[4] = DAT_000b47ac;
  FUN_0014d890(puVar2 + 4,DAT_000b47b0);
  uVar4 = DAT_000b47bc;
  uVar5 = DAT_000b47b8;
  puVar2[10] = DAT_000b47b4;
  puVar2[0xb] = uVar5;
  puVar2[0xc] = uVar4;
  puVar2[0xd] = 0;
  puVar2[9] = DAT_000b47c0;
  FUN_0014d890(puVar2 + 9,DAT_000b47c4);
  iVar1 = DAT_000b47d0;
  uVar5 = DAT_000b47cc;
  puVar2[0xf] = DAT_000b47c8;
  puVar2[0x10] = uVar5;
  puVar2[0x11] = iVar1;
  puVar2[0x12] = 0;
  puVar2[0xe] = DAT_000b47d4;
  FUN_0014d890(puVar2 + 0xe,iVar1 + -4);
  iVar1 = FUN_0006fc90(puVar2 + 0x13,s_StreamDeviceMgrImpl_000b47dc,0,10,DAT_000b47d8,0xe,0xe,0x800,
                       1,DAT_000b47d8);
  pcVar3 = (char *)FUN_0008b800(iVar1 + 0x114);
  *(undefined4 *)pcVar3 = s_l0__T___AudioHWService_000b47f0._0_4_;
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  pcVar3[0x10] = '\0';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  pcVar3[0x18] = '\0';
  pcVar3[0x19] = '\0';
  pcVar3[0x1a] = '\0';
  pcVar3[0x1b] = '\0';
  pcVar3[0x1c] = '\0';
  pcVar3[0x1d] = '\0';
  pcVar3[0x1e] = '\0';
  pcVar3[0x1f] = '\0';
  pcVar3[0x20] = '\0';
  pcVar3[0x21] = '\0';
  pcVar3[0x22] = '\0';
  pcVar3[0x23] = '\0';
  pcVar3[0x24] = '\0';
  pcVar3[0x25] = '\0';
  pcVar3[0x26] = '\0';
  pcVar3[0x27] = '\0';
  pcVar3[0x28] = '\0';
  pcVar3[0x29] = '\0';
  pcVar3[0x2a] = '\0';
  pcVar3[0x2b] = '\0';
  pcVar3[0x2c] = '\0';
  pcVar3[0x2d] = '\0';
  pcVar3[0x2e] = '\0';
  pcVar3[0x2f] = '\0';
  pcVar3[0x30] = '\0';
  pcVar3[0x31] = '\0';
  pcVar3[0x32] = '\0';
  pcVar3[0x33] = '\0';
  pcVar3[0x34] = '\0';
  pcVar3[0x35] = '\0';
  pcVar3[0x36] = '\0';
  pcVar3[0x37] = '\0';
  pcVar3[0x38] = '\0';
  uVar5 = s_l0__T___AudioHWService_000b47f0._4_4_;
  pcVar3[0x39] = '\0';
  pcVar3[0x3a] = '\0';
  pcVar3[0x3b] = '\0';
  *(char **)(s_l0__T___AudioHWService_000b47f0._4_4_ + 4) = pcVar3 + -0x170;
  iVar1 = FUN_001a0808(0x3c,1);
  local_18[0] = 0;
  if (iVar1 != 0) {
    uVar4 = FUN_000e80ec();
    local_18[0] = FUN_0014d818(iVar1,uVar4,0xfffffffe);
  }
  FUN_001dfa8c(pcVar3 + 0xc,local_18);
  uVar4 = FUN_0008cf78();
  iVar1 = FUN_0008ce54(uVar4,s_l0__T___AudioHWService_000b47f0 + 8,pcVar3);
  if (iVar1 != 0) {
    FUN_0006e024(pcVar3 + -0x114);
    FUN_00049c5c(DAT_000b4808,0);
    if (((*(uint *)(uVar5 + 8) & 1) == 0) && (iVar1 = FUN_0016ddfa(DAT_000b480c), iVar1 != 0)) {
      uVar5 = FUN_000c2bfc(DAT_000b4810);
      FUN_0016dd44(uVar5,DAT_000b4818,DAT_000b4814);
    }
  }
  return pcVar3 + -0x170;
}

