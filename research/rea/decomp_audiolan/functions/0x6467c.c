// rea decompile_all
// name: FUN_0006467c
// address: 0x6467c
// body: available
// range: 0x6467c-0x6472d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0006467c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  if (param_2 != 0) {
    iVar5 = *param_1;
    FUN_0016db0c(param_1[1] - iVar5);
    if (param_2 < extraout_r1) {
      puVar4 = (undefined4 *)(iVar5 + param_2 * 0x14);
      uVar1 = puVar4[1];
      if (uVar1 < extraout_r1) {
        iVar7 = 0;
        iVar2 = puVar4[4];
        while (iVar2 != 0) {
          iVar2 = FUN_0006467c(param_1,iVar2);
          if (iVar2 != 0) {
            iVar7 = iVar2;
          }
          iVar2 = puVar4[4];
        }
        iVar2 = *param_1;
        FUN_0016db0c(param_1[1] - iVar2);
        uVar3 = puVar4[3];
        if (uVar3 < extraout_r1_00) {
          if (uVar3 == 0) {
            puVar6 = (uint *)(iVar5 + uVar1 * 0x14 + 0x10);
          }
          else {
            puVar6 = (uint *)(iVar2 + uVar3 * 0x14 + 8);
          }
          uVar1 = puVar4[2];
          *puVar6 = uVar1;
          iVar5 = *param_1;
          FUN_0016db0c(param_1[1] - iVar5);
          if (uVar1 < extraout_r1_01) {
            uVar1 = puVar4[2];
            if (uVar1 == 0) {
LAB_0006471e:
              *puVar4 = 0;
              puVar4[4] = 0;
              puVar4[3] = 0;
              puVar4[2] = 0;
              puVar4[1] = 0;
              return iVar7;
            }
            if (uVar1 < extraout_r1_01) {
              uVar3 = puVar4[3];
              *(uint *)(iVar5 + uVar1 * 0x14 + 0xc) = uVar3;
              FUN_0016db0c(param_1[1] - *param_1);
              if (uVar3 < extraout_r1_02) goto LAB_0006471e;
            }
          }
        }
      }
    }
  }
  return 6;
}

