// rea decompile_all
// name: FUN_00008548
// address: 0x8548
// body: available
// range: 0x8548-0x86bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00008548(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_20;
  
  iVar10 = param_1 + 0x118;
  local_20 = param_4;
  FUN_001a0700(iVar10);
  local_20 = (**(code **)(*param_2 + 0x34))(param_2);
  iVar3 = FUN_001dbd40(param_1 + 0x15c,&local_20);
  FUN_00008324(param_1,iVar3,param_2 + 1);
  puVar4 = *(undefined4 **)(iVar3 + 0x14);
  puVar7 = *(undefined4 **)(iVar3 + 0x18);
  bVar11 = puVar7 != puVar4;
  if (bVar11) {
    puVar7 = *(undefined4 **)(iVar3 + 0x18);
  }
  bVar2 = false;
  puVar5 = puVar4;
  if (bVar11) {
    do {
      if ((int *)*puVar5 == param_2) {
        if (puVar4 != puVar7) {
          puVar4 = puVar5 + 1;
          if (puVar4 != puVar7) {
            iVar1 = (int)puVar7 - (int)puVar4 >> 2;
            if (0 < iVar1) {
              iVar9 = 0;
              if (puVar4 < puVar7) {
                iVar8 = -(((int)puVar7 - (int)puVar4) * 0x20000000 >> 0x1f);
                if (iVar8 == 1) {
                  iVar9 = 1;
                  *puVar5 = *puVar4;
                }
              }
              else {
                iVar8 = 0;
              }
              for (; iVar8 < iVar1; iVar8 = iVar8 + 2) {
                puVar5[iVar9] = puVar4[iVar9];
                puVar5[iVar9 + 1] = puVar4[iVar9 + 1];
                iVar9 = iVar9 + 2;
              }
            }
          }
          *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + -4;
        }
        bVar2 = true;
        break;
      }
      puVar5 = puVar5 + 1;
    } while (puVar7 != puVar5);
  }
  uVar6 = (**(code **)(*param_2 + 0x34))(param_2);
  FUN_000080b4(param_1,uVar6);
  if (!bVar2) {
    FUN_001a0d18(iVar10);
    return 0;
  }
  FUN_001a0d18(iVar10);
  return 1;
}

