// rea decompile_all
// name: FUN_00131b5c
// address: 0x131b5c
// body: available
// range: 0x131b5c-0x131c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00131b5c(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6
                 )

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = *(int *)(param_1 + 0x20);
  do {
    if (iVar6 == 0) {
      puVar4 = (undefined4 *)FUN_0016d7a4(0x28,DAT_00131c60);
      if (puVar4 != (undefined4 *)0x0) {
        uVar5 = FUN_0017bfc0();
        puVar4[1] = 0;
        uVar1 = DAT_00131c64;
        puVar4[3] = uVar5;
        *puVar4 = uVar1;
        puVar4[2] = 0;
        iVar6 = FUN_0010f6a4(puVar4 + 4,param_2);
        *(short *)(iVar6 + 0x10) = (short)param_3;
        *(short *)(iVar6 + 0x12) = (short)param_4;
        *(short *)(iVar6 + 0x14) = (short)param_5;
        *(short *)(iVar6 + 0x16) = (short)param_6;
        *(undefined4 *)(iVar6 + -0xc) = 0;
        *(undefined4 *)(iVar6 + -8) = 0;
        iVar2 = iVar6 + -0x10;
        if (*(int *)(param_1 + 0x24) == 0) {
          *(int *)(param_1 + 0x20) = iVar2;
        }
        else {
          *(int *)(iVar6 + -0xc) = *(int *)(param_1 + 0x24);
          *(int *)(*(int *)(param_1 + 0x24) + 8) = iVar2;
        }
        *(int *)(param_1 + 0x24) = iVar2;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        return;
      }
      return;
    }
    iVar2 = FUN_0015eac4(iVar6 + 0x10,param_2);
    if (iVar2 != 0) {
      uVar3 = (uint)*(ushort *)(iVar6 + 0x20);
      bVar7 = uVar3 == param_3;
      if (bVar7) {
        uVar3 = (uint)*(ushort *)(iVar6 + 0x22);
      }
      if (bVar7 && uVar3 == param_4) {
        uVar3 = (uint)*(ushort *)(iVar6 + 0x24);
        bVar7 = uVar3 == param_5;
        if (bVar7) {
          uVar3 = (uint)*(ushort *)(iVar6 + 0x26);
        }
        if (bVar7 && uVar3 == param_6) {
          return;
        }
      }
    }
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar6 = *(int *)(iVar6 + 8);
    }
  } while( true );
}

