// rea decompile_all
// name: FUN_0006dd44
// address: 0x6dd44
// body: available
// range: 0x6dd44-0x6de47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0006dd44(undefined4 param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [120];
  
  FUN_001dacc0(auStack_a0,0xc);
  iVar8 = 0;
  while (iVar8 != param_3) {
    pbVar1 = (byte *)(param_2 + iVar8);
    uVar7 = (uint)*pbVar1;
    iVar8 = iVar8 + 1;
    if (uVar7 == 0) break;
    uVar4 = uVar7 - 0x61;
    if (0x19 < uVar4) {
      uVar4 = uVar7 - 0x41;
    }
    bVar10 = 0x18 < uVar4;
    bVar9 = uVar4 == 0x19;
    if (0x19 < uVar4) {
      bVar10 = 8 < uVar7 - 0x30;
      bVar9 = uVar7 - 0x30 == 9;
    }
    if (((!bVar10 || bVar9) || (uVar7 == 0x2d || uVar7 == 0x2e)) || (uVar7 == 0x5f || uVar7 == 0x7e)
       ) {
      puVar6 = auStack_98;
    }
    else {
      uVar7 = uVar7 & 0xf;
      if (uVar7 < 10) {
        uVar7 = uVar7 + 0x30;
      }
      else if (uVar7 < 0x10) {
        uVar7 = uVar7 + 0x37;
      }
      else {
        uVar7 = 0x30;
      }
      bVar2 = *pbVar1 >> 4;
      if (bVar2 < 10) {
        cVar3 = bVar2 + 0x30;
      }
      else if (bVar2 < 0x10) {
        cVar3 = bVar2 + 0x37;
      }
      else {
        cVar3 = '0';
      }
      uVar5 = FUN_001e270c(auStack_98,0x25);
      puVar6 = (undefined1 *)FUN_001e270c(uVar5,cVar3);
    }
    FUN_001e270c(puVar6,uVar7);
  }
  FUN_001d8f88(param_1,auStack_a0);
  FUN_00161210(auStack_a0,0);
  return;
}

