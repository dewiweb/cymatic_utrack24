// rea decompile_all
// name: FUN_00091560
// address: 0x91560
// body: available
// range: 0x91560-0x9171b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x91718 to 0x3fe6c FUN_0003fe6c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00091560(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_2c [16];
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  uVar3 = param_2[5];
  uVar4 = param_2[6];
  uVar6 = param_2[7];
  *(undefined4 *)(param_1 + 0x14) = param_2[4];
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar6 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x24) = param_2[8];
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  iVar1 = FUN_00026528();
  if (iVar1 != 0) {
    if (param_6 != 0) {
      FUN_00022168(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x2c),param_7,param_8);
    }
    FUN_0014cd58(auStack_2c);
    iVar2 = FUN_001f01c4(DAT_0009171c,1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_0016f928(iVar2,0x80,0);
    }
    *(int *)(param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *DAT_00091720 = iVar1;
      FUN_0016e818(iVar1,0);
      iVar1 = FUN_00022230();
      FUN_0016b648(*(undefined4 *)(param_1 + 0x34),**(undefined4 **)(iVar1 + 4),auStack_2c,0);
      iVar1 = FUN_001f01c4(DAT_00091724,1);
      if (iVar1 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_001a11d8(iVar1,0,*(int *)(param_1 + 0x34) + 0x720,param_3,param_4,
                                     &DAT_00091728,0);
      }
      iVar1 = FUN_0016cc18(*(undefined4 *)(param_1 + 0x34),piVar5 + 0x118);
      if (piVar5 != (int *)0x0 && iVar1 != 0) {
        FUN_001a0fc0(piVar5);
        iVar1 = FUN_0019f5e0(piVar5);
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x38) = *(int *)(*piVar5 + -0xc) + (int)piVar5;
          FUN_00172330(*(int *)(*piVar5 + -0xc) + (int)piVar5);
          iVar2 = FUN_001f01c4(0x20,1);
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = FUN_00137554(iVar2,*(int *)(*piVar5 + -0xc) + (int)piVar5);
          }
          *(int *)(param_1 + 0x3c) = iVar1;
          if (iVar1 != 0) {
            FUN_0014cd8c(auStack_2c);
            return;
          }
        }
      }
    }
    FUN_0014cd8c(auStack_2c);
  }
  FUN_0003fe6c(s_CopperLanModule__FATAL___Failed_t_0009172c);
  return;
}

