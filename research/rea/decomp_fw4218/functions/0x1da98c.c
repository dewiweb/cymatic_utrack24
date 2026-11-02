// rea decompile_all
// name: FUN_001da98c
// address: 0x1da98c
// body: available
// range: 0xcd3c0-0xcd513 inclusive
// range: 0x1da98c-0x1da9b3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001da98c(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar7;
  
  iVar4 = FUN_000cd864();
  if ((param_1 < 10) && (*(int *)(iVar4 + param_1 * 4) != 0)) {
    iVar2 = FUN_000cd518(iVar4,param_2,param_3,param_1,unaff_r4,unaff_r5,unaff_r6);
    uVar1 = DAT_000cd514;
    if (iVar2 != 0) {
      FUN_001f00bc();
      piVar6 = (int *)(*(int *)(iVar4 + 0x28) + param_1 * 0x18);
      piVar5 = (int *)piVar6[1];
      iVar4 = piVar6[4];
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)piVar6[2];
        if (piVar5 == (int *)piVar6[3]) {
          uVar7 = 1;
          if (*piVar6 != 0) {
            uVar3 = *(uint *)(*piVar6 + 4);
            uVar7 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
            if (uVar7 < uVar3 + 1) {
              uVar7 = uVar3 + 1;
            }
          }
          piVar5 = (int *)FUN_00173860(0xc,0);
          iVar2 = FUN_00173860(uVar7 << 4,0);
          piVar5[2] = iVar2;
          *piVar5 = *piVar6;
          piVar5[1] = uVar7;
          *piVar6 = (int)piVar5;
          piVar5 = (int *)piVar5[2];
          piVar6[2] = (int)piVar5;
          piVar6[3] = (int)(piVar5 + uVar7 * 4);
        }
        piVar6[2] = (int)(piVar5 + 4);
      }
      else {
        piVar6[1] = *piVar5;
      }
      if (piVar5 + 2 != (int *)0x0) {
        piVar5[2] = param_2;
        piVar5[3] = param_3;
      }
      *piVar5 = iVar4;
      piVar5[1] = *(int *)(iVar4 + 4);
      **(undefined4 **)(iVar4 + 4) = piVar5;
      *(int **)(iVar4 + 4) = piVar5;
      piVar6[5] = piVar6[5] + 1;
      FUN_001f06d4(uVar1);
      return 0;
    }
    return 5;
  }
  return 2;
}

