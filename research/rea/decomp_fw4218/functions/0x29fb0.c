// rea decompile_all
// name: FUN_00029fb0
// address: 0x29fb0
// body: available
// range: 0x29fb0-0x2a06b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00029fb0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  iVar4 = 0;
  pbVar1 = param_1 + 0xc;
  do {
    if (((int)(uint)*(ushort *)(param_1 + 4) <= iVar4) || (pbVar1 == (byte *)0x0)) {
      iVar4 = 0;
      pbVar6 = param_2;
      pbVar7 = param_1;
      while ((bVar3 = (byte)*(ushort *)(param_1 + 6), iVar4 < (int)(uint)*(ushort *)(param_1 + 6) &&
             (pbVar1 != (byte *)0x0))) {
        pbVar1 = (byte *)FUN_001f6308(param_1,pbVar1,pbVar6,bVar3,pbVar6,pbVar7);
        iVar4 = iVar4 + 1;
      }
      iVar4 = 0;
      if (*(short *)(param_1 + 8) != 0) {
        do {
          pbVar1 = (byte *)FUN_001f6308(param_1,pbVar1,param_2,bVar3,pbVar6,pbVar7);
          bVar3 = (byte)*(ushort *)(param_1 + 8);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 8));
      }
      return;
    }
    uVar5 = 0;
    if ((pbVar1 < param_1) || (param_2 <= pbVar1)) {
LAB_00029ffe:
      pbVar1 = (byte *)0x0;
    }
    else {
      do {
        while( true ) {
          pbVar6 = pbVar1;
          uVar2 = (uint)*pbVar6;
          pbVar1 = pbVar6 + 1;
          if (uVar2 == 0) goto LAB_00029ff4;
          bVar3 = *pbVar6 >> 6;
          if (bVar3 != 0) break;
          if ((param_2 <= pbVar1 + uVar2) || (uVar5 = uVar5 + uVar2 + 1, 0xff < uVar5))
          goto LAB_00029ffe;
          uVar5 = uVar5 & 0xffff;
          pbVar1 = pbVar1 + uVar2;
        }
        if ((bVar3 == 1) || (bVar3 == 2)) goto LAB_00029ffe;
      } while (bVar3 != 3);
      pbVar1 = pbVar6 + 2;
LAB_00029ff4:
      if ((pbVar1 == (byte *)0x0) || (param_2 < pbVar1 + 4)) goto LAB_00029ffe;
      pbVar1 = pbVar1 + 4;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

