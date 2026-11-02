// rea decompile_all
// name: FUN_000244e8
// address: 0x244e8
// body: available
// range: 0x244e8-0x24551 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000244e8(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  pbVar2 = param_1 + 0xc;
  iVar5 = 0;
  do {
    if (((int)(uint)*(ushort *)(param_1 + 4) <= iVar5) || (pbVar2 == (byte *)0x0)) {
      return;
    }
    uVar6 = 0;
    if ((pbVar2 < param_1) || (param_2 <= pbVar2)) {
LAB_0002452a:
      pbVar2 = (byte *)0x0;
    }
    else {
      do {
        while( true ) {
          pbVar3 = pbVar2;
          uVar4 = (uint)*pbVar3;
          pbVar2 = pbVar3 + 1;
          if (uVar4 == 0) goto LAB_00024520;
          bVar1 = *pbVar3 >> 6;
          if (bVar1 != 0) break;
          if ((param_2 <= pbVar2 + uVar4) || (uVar6 = uVar6 + uVar4 + 1, 0xff < uVar6))
          goto LAB_0002452a;
          uVar6 = uVar6 & 0xffff;
          pbVar2 = pbVar2 + uVar4;
        }
        if ((bVar1 == 1) || (bVar1 == 2)) goto LAB_0002452a;
      } while (bVar1 != 3);
      pbVar2 = pbVar3 + 2;
LAB_00024520:
      if ((pbVar2 == (byte *)0x0) || (param_2 < pbVar2 + 4)) goto LAB_0002452a;
      pbVar2 = pbVar2 + 4;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

