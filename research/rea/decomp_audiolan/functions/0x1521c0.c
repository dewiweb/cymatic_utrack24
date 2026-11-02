// rea decompile_all
// name: FUN_001521c0
// address: 0x1521c0
// body: available
// range: 0x1521c0-0x1523a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001521c0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  
  puVar2 = (undefined4 *)
           FUN_0006e06c(param_1 + 8,s_WebServer_001523ac,0,DAT_001523a8,DAT_001523a8,0x2000,
                        DAT_001523a8,DAT_001523a8);
  puVar2[-2] = DAT_001523b8;
  puVar2[-1] = DAT_001523bc;
  *puVar2 = DAT_001523c0;
  piVar5 = puVar2 + 0x30;
  *piVar5 = 0;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x10,0);
  piVar3[2] = iVar4;
  iVar4 = *piVar5;
  piVar3[1] = 1;
  *piVar3 = iVar4;
  *piVar5 = (int)piVar3;
  iVar4 = piVar3[2];
  puVar2[0x32] = iVar4;
  puVar2[0x33] = iVar4 + 0x10;
  iVar4 = puVar2[0x32];
  puVar2[0x32] = iVar4 + 0x10;
  puVar2[0x34] = iVar4;
  *(int *)iVar4 = iVar4;
  *(undefined4 *)(puVar2[0x34] + 4) = puVar2[0x34];
  *(undefined1 *)(puVar2 + 0x37) = 1;
  *(undefined1 *)((int)puVar2 + 0xdd) = 0;
  *(undefined1 *)((int)puVar2 + 0xde) = 0;
  puVar2[0x38] = 0;
  puVar2[0x39] = 0;
  puVar2[0x3a] = 0;
  puVar2[0x3b] = 0;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  FUN_001dcb48(puVar2 + 0x38);
  iVar4 = puVar2[0x3a];
  puVar2[0x3c] = iVar4;
  puVar2[0x3a] = iVar4 + 0xc;
  *(int *)iVar4 = iVar4;
  iVar4 = puVar2[0x3c];
  piVar3 = puVar2 + 0x3e;
  *(int *)(iVar4 + 4) = iVar4;
  *piVar3 = 0;
  puVar2[0x42] = 0;
  puVar2[0x43] = 0;
  *(undefined1 *)(puVar2 + 0x44) = 0;
  *(char *)((int)puVar2 + 0x111) = (char)iVar4;
  puVar2[0x41] = 0;
  puVar2[0x40] = 0;
  puVar2[0x3f] = 0;
  piVar5 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x2c,0);
  piVar5[2] = iVar4;
  iVar4 = *piVar3;
  piVar5[1] = 1;
  *piVar5 = iVar4;
  *piVar3 = (int)piVar5;
  iVar4 = piVar5[2];
  puVar2[0x40] = iVar4;
  puVar2[0x41] = iVar4 + 0x2c;
  puVar6 = (undefined1 *)puVar2[0x40];
  puVar2[0x40] = puVar6 + 0x2c;
  *(undefined4 *)(puVar6 + 8) = 0;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  *puVar6 = 0;
  puVar2[0x42] = puVar6;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)(puVar2[0x42] + 8) = puVar2[0x42];
  iVar4 = puVar2[0x42];
  piVar3 = puVar2 + 0x49;
  *(int *)(iVar4 + 0xc) = iVar4;
  *piVar3 = 0;
  puVar2[0x4d] = 0;
  puVar2[0x4e] = 0;
  *(undefined1 *)(puVar2 + 0x4f) = 0;
  *(char *)((int)puVar2 + 0x13d) = (char)iVar4;
  puVar2[0x4c] = 0;
  puVar2[0x4b] = 0;
  puVar2[0x4a] = 0;
  piVar5 = (int *)FUN_0010f82c(0xc,0);
  iVar4 = FUN_0010f82c(0x18,0);
  piVar5[2] = iVar4;
  iVar4 = *piVar3;
  piVar5[1] = 1;
  *piVar5 = iVar4;
  *piVar3 = (int)piVar5;
  iVar4 = piVar5[2];
  puVar2[0x4b] = iVar4;
  puVar2[0x4c] = iVar4 + 0x18;
  puVar6 = (undefined1 *)puVar2[0x4b];
  puVar2[0x4b] = puVar6 + 0x18;
  *(undefined4 *)(puVar6 + 8) = 0;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  *puVar6 = 0;
  puVar2[0x4d] = puVar6;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)(puVar2[0x4d] + 8) = puVar2[0x4d];
  *(undefined4 *)(puVar2[0x4d] + 0xc) = puVar2[0x4d];
  puVar2[0x50] = 0;
  puVar2[0x51] = 0;
  iVar4 = FUN_00098a40(puVar2 + 0x58,2);
  *(undefined4 *)(iVar4 + -0x4c) = 0;
  *(undefined4 *)(iVar4 + -0x48) = 0;
  *(undefined4 *)(iVar4 + -0x44) = 0;
  iVar9 = iVar4 + -0x168;
  *(undefined4 *)(iVar4 + -0x40) = 0;
  uVar1 = DAT_001523c4;
  uVar10 = 0;
  do {
    iVar7 = FUN_001a0808(0x124,1);
    puVar2 = (undefined4 *)0x0;
    if (iVar7 != 0) {
      puVar2 = (undefined4 *)
               FUN_0006fc90(iVar7,DAT_001523c8,0,4,DAT_001523a8,DAT_001523a8,DAT_001523a8,
                            DAT_001523a8,DAT_001523a8,DAT_001523a8);
      *puVar2 = uVar1;
      puVar2[0x45] = 0;
      puVar2[0x46] = 0;
      puVar2[0x47] = iVar4;
      uVar8 = FUN_0018c0a4();
      puVar2[0x48] = uVar8;
      FUN_0006e024(puVar2);
    }
    iVar7 = uVar10 * 4;
    uVar10 = uVar10 + 1;
    *(undefined4 **)(iVar7 + iVar9 + 0x150) = puVar2;
  } while (uVar10 < 6);
  FUN_00151d04(iVar9,s__http__tcp_001523d0,&DAT_001523cc,0,0);
  FUN_0006e024(iVar4 + -0x160);
  return iVar9;
}

