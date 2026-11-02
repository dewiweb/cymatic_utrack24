// rea decompile_all
// name: FUN_0006de48
// address: 0x6de48
// body: available
// range: 0x6de48-0x6df5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0006de48(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [120];
  
  iVar1 = FUN_001dacc0(auStack_98,0xc);
  iVar5 = 0;
  while (iVar5 != param_3) {
    iVar4 = iVar5 + 1;
    if (*(char *)(param_2 + iVar5) == '\0') break;
    if (*(char *)(param_2 + iVar5) == '%') {
      if (-1 < param_3) {
        iVar1 = iVar5 + 2;
      }
      if (-1 < param_3 && param_3 <= iVar1) break;
      uVar2 = (uint)*(byte *)(param_2 + iVar4 + 1);
      if (uVar2 - 0x30 < 10) {
        uVar2 = uVar2 - 0x30 & 0xff;
      }
      else {
        if (uVar2 - 0x41 < 6) {
          uVar2 = uVar2 - 0x37;
        }
        else {
          if (5 < uVar2 - 0x61) {
            uVar2 = 0;
            goto LAB_0006deec;
          }
          uVar2 = uVar2 - 0x57;
        }
        uVar2 = uVar2 & 0xff;
      }
LAB_0006deec:
      uVar3 = (uint)*(byte *)(param_2 + iVar4);
      if (uVar3 - 0x30 < 10) {
        uVar3 = uVar3 - 0x30 & 0xff;
      }
      else {
        if (uVar3 - 0x41 < 6) {
          uVar3 = uVar3 - 0x37;
        }
        else {
          if (5 < uVar3 - 0x61) {
            uVar3 = 0;
            goto LAB_0006df28;
          }
          uVar3 = uVar3 - 0x57;
        }
        uVar3 = uVar3 & 0xff;
      }
LAB_0006df28:
      iVar5 = iVar5 + 3;
      iVar1 = FUN_001e270c(auStack_90,uVar2 | (uVar3 & 0xf) << 4);
    }
    else {
      iVar1 = FUN_001e270c(auStack_90);
      iVar5 = iVar4;
    }
  }
  FUN_001d8f88(param_1,auStack_98);
  FUN_00161210(auStack_98,0);
  return;
}

