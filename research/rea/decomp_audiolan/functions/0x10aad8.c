// rea decompile_all
// name: FUN_0010aad8
// address: 0x10aad8
// body: available
// range: 0x10aad8-0x10ac47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0010aad8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar6 = 1;
  FUN_001a0700(param_1 + 0x3b8);
  iVar5 = *(int *)(param_1 + 0x4c8);
  if (*(int *)(param_1 + 0x4c8) != 0) {
    do {
      iVar3 = FUN_000ea1e8(param_3,iVar5);
      bVar7 = iVar3 < 0;
      bVar8 = iVar3 == 0;
      if (0 < iVar3) {
        iVar3 = 1;
      }
      if (bVar7) {
        iVar3 = 0;
      }
      if (bVar8) {
        if (iVar5 != 0) {
          if (param_2 == 0) {
            *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) & 0xbfffffff;
            if ((param_4 != 0) && (iVar5 = *(int *)(param_1 + 0x4f0), iVar5 != 0)) {
              for (iVar3 = *(int *)(iVar5 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
                iVar5 = iVar3;
              }
              while( true ) {
                while( true ) {
                  if (iVar5 == 0) goto LAB_0010ab48;
                  if (*(char *)(iVar5 + 0xb1) == '\0') {
                    FUN_00105198(iVar5,0,1);
                  }
                  if (iVar5 == 0) break;
                  pbVar1 = (byte *)(iVar5 + 0xc);
                  iVar5 = *(int *)(iVar5 + 8);
                  iVar3 = iVar5;
                  if ((*pbVar1 & 0x80) == 0) {
                    do {
                      iVar5 = iVar3;
                      if (iVar5 == 0) goto LAB_0010ab48;
                      iVar3 = *(int *)(iVar5 + 4);
                    } while (*(int *)(iVar5 + 4) != 0);
                  }
                }
                iVar5 = *(int *)(param_1 + 0x4f0);
                if (iVar5 == 0) break;
                for (iVar3 = *(int *)(iVar5 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
                  iVar5 = iVar3;
                }
              }
            }
          }
          else {
            *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | 0x40000000;
          }
          goto LAB_0010ab48;
        }
        break;
      }
      iVar4 = *(int *)(iVar5 + iVar3 * 4 + 0x10);
      if (iVar4 == 0) break;
      bVar2 = 0;
      if (iVar3 != 0) {
        bVar2 = *(byte *)(iVar5 + 0x18);
      }
      iVar5 = iVar4;
    } while (iVar3 == 0 || (bVar2 & 0x80) == 0);
  }
  uVar6 = 0;
LAB_0010ab48:
  FUN_001a0d18(param_1 + 0x3b8);
  return uVar6;
}

