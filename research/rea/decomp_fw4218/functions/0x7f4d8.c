// rea decompile_all
// name: FUN_0007f4d8
// address: 0x7f4d8
// body: available
// range: 0x7f4d8-0x7f5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0007f4d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_28;
  
  local_28 = param_4;
  uVar3 = FUN_0017b15c();
  uVar7 = 0;
  do {
    iVar4 = param_1 + uVar7;
    bVar1 = *(byte *)(iVar4 + 0x54);
    if (bVar1 != 0) {
      if (bVar1 < 0xc) {
        *(byte *)(iVar4 + 0x54) = bVar1 + 1;
        if (bVar1 == 0xb) {
          FUN_0017beb8(*(undefined4 *)(param_1 + uVar7 * 4 + 0x2c));
        }
      }
      else {
        iVar5 = param_1 + uVar7 * 4;
        uVar8 = *(uint *)(iVar5 + 0x2c) & uVar3;
        if ((uVar8 != 0) && (*(byte *)(iVar4 + 0x54) = bVar1 + 1, bVar1 == 0x16)) {
          FUN_0017bed0(*(undefined4 *)(iVar5 + 0x2c));
          uVar6 = 0;
          do {
            if ((uVar8 & 1 << (uVar6 & 0xff)) != 0) {
              iVar4 = (**(code **)(**(int **)(param_1 + 0x24) + 0x70))
                                (*(int **)(param_1 + 0x24),uVar6);
              local_28 = CONCAT31(local_28._1_3_,4);
              cVar2 = *(char *)(iVar4 + 0x158);
              if ((cVar2 == '\x01') ||
                 ((cVar2 != '\x02' &&
                  (((cVar2 != '\x03' && (cVar2 == '\x04')) || (*(char *)(iVar4 + 0x159) != '\x04')))
                  ))) {
                FUN_000712f4(iVar4 + 0x159,&local_28);
                (**(code **)(*(int *)(iVar4 + 0x13c) + 8))((int *)(iVar4 + 0x13c));
              }
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < 0x10);
        }
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 10);
  return;
}

